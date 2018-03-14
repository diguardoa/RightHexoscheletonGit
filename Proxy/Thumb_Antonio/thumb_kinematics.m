function [T_B,T_C, A_3, A_4,A_D, C_E, E_J, J_I,  T_F, T_F_1, T_D, T_E, T_J, T_I] = thumb_kinematics()
%% This script is used to generate direct kinematic matrices to be used inside the matlab model

%% Thumb Kinematics
% All data are measured by Antonio D.G. on the 23/01/2018 @ AIS lab

%% The very first part is related with the planar part of the structure ABCDE
% all lenghts are expressed in mm
l_ab = 16.5;
l_bc = 30;
l_cd = 85;
l_cf_y2 = 60;
l_cf_x2 = -31;

% these measured must be confirmed by Max
l_ce = 97;
l_ce_x = 91;
l_ce_y = sqrt(l_ce^2 - l_ce_x^2);
angle_ce = acos(l_ce_x/l_ce); 

%% Zero transformation
% I have a rotation around y axes
% Prima ho una rotazione di 180� rispetto all'azze z
off_R1 = [cos(pi), -sin(pi), 0, 0; ...
          sin(pi), cos(pi) , 0, 0; ...
          0      , 0       , 1, 0; ...
          0      , 0       , 0, 1];
% Poi ho una rotazione di -45 gradi rispetto all'asse y
o_rot = - pi/4;

off_R2 = [cos(o_rot),   0,  sin(o_rot), 0; ...
          0         ,   1,          0 , 0; ...
         -sin(o_rot),   0,  cos(o_rot), 0; ...
         0          ,   0,          0 , 1];
     
f_tran = off_R1*off_R2;     

%% First transformation
% Link 1: from joint A to joint B
syms q_A;
d_1 = l_ab;
theta_1 = q_A;
a_1 = 0;
alpha_1 = pi/2;

A_1 = DH_matrix( d_1, theta_1, a_1, alpha_1);

%% BC Link
syms q_B;
d_2 = 0;
theta_2 = pi/2 + q_B;
a_2 = l_bc;
alpha_2 = 0;

A_2 = DH_matrix( d_2, theta_2, a_2, alpha_2);

%% CF Link
syms q_C;
d_3 = 0;
theta_3 = -(pi/2+atan(abs(l_cf_x2)/l_cf_y2)) + q_C;
a_3 = sqrt( l_cf_x2^2 + l_cf_y2^2 );
alpha_3 = 0;
A_3 = DH_matrix( d_3, theta_3, a_3, alpha_3);

%% CF_1 Link
d_4 = 0;
theta_4 = -pi/2 + q_C;
a_4 = l_cf_y2;
alpha_4 = -pi/2;
A_4 = DH_matrix( d_4, theta_4, a_4, alpha_4);

%% CD Link
d_d = 0;
theta_d = -pi/2 + q_C;
a_d = l_cd;
alpha_d = -pi/2;

A_D = DH_matrix( d_d, theta_d, a_d, alpha_d);

%% CE Link
% NB: E joint does not depend on the angle in C
% Nota: ho modificato Theta_e. ci sara' sicuramente bisogno di una
% ulteriore modifica. Da testare
d_e_1 = 0;
theta_e = -pi/2;% + angle_ce;
a_e = l_ce_x;
alpha_e = -pi/2;
d_e_2 = l_ce_y;
C_E = DH_matrix( d_e_1, theta_e, a_e, alpha_e)*[eye(3), [0;0;d_e_2];zeros(1,3), 1];

%% EJ Link
l_j = 100;
syms q_E
d_j = 0;
theta_j = q_E;
a_j = l_j;
alpha_j = pi/2;
E_J = DH_matrix(d_j, theta_j, a_j, alpha_j);

%% JI Link
l_i = 80;
syms q_J
% Problemi a trovare la rappresentazione DH adatta, trovo il la
% trasformazione in altro modo

% 1. ruoto attorno a z di q_J (allineo y' con IJ)
J_I_1 = [cos(q_J), -sin(q_J), 0, 0; ...
         sin(q_J), cos(q_J), 0, 0; ...
         0,         0,      0, 0; ...
         zeros(1,3), 1];
% 2. traslo in y di -l_i
J_I_2 = [zeros(1,4); zeros(1,3),-l_i; zeros(1,4); zeros(1,3), 1];
% 3. ruoto in x di pi/2
J_I_3 = [1, 0, 0, 0; ...
        0, cos(pi/2), -sin(pi/2), 0; ...
        0, sin(pi/2), cos(pi/2), 0; ...
        0, 0, 0, 1];
J_I = J_I_1 * J_I_2 * J_I_3;
%% Export Transformations
T_B = f_tran*A_1;
T_C = f_tran*A_1*A_2;
T_F = T_C*A_3;
T_F_1 = T_C*A_4;
T_D = T_C*A_D;
T_E = T_C*C_E;
T_J = T_E*E_J;
T_I = T_J*J_I;
end