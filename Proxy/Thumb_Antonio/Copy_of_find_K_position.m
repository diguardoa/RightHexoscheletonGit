%function K_1 = Copy_of_find_K_position(CMC1, CMC2, CMC3,s1, F1, F2, F3, F_11, F_12, F_13)

%% Pose estimation
% This script finds K1 position starting from CMC, F, F_1
% clear all;
syms x y z;
syms CMC1 CMC2 CMC3 s1  F1  F2  F3  F_11  F_12  F_13

% Given the CMC point in a reference system in which it is defined thumb
% exoskeleton too
% s1 = 1;
% CMC = [0,0,0]; % [x, y, z]
% F = [10, 10, 10];
% F_1 = [10, 20, 10];
% Write the equation on the plane passing through 3 points (Plane1)
det_matrix = [x - CMC1   , y - CMC2   , z - CMC3   ; ...
              F1 - CMC1, F2 - CMC2, F3 - CMC3; ...
              F_11-CMC1, F_12-CMC2, F_13-CMC3];
% a_plane = det([F2 - CMC2, F3 - CMC3;F_12-CMC2, F_13-CMC3]);
% b_plane = -det([F1 - CMC1, F3 - CMC3;F_11-CMC1, F_13-CMC3]);
% c_plane = det([F1 - CMC1, F2 - CMC2;F_11-CMC1, F_12-CMC2]);

eq_plane_3points = det( det_matrix ) == 0;
%% write the sphere of radious s1 centered in F
% F = WRITE_THE_FUNCTION(q_A, q_B, q_C)
eq_sphere_F = (x - F1)^2 + (y - F2)^2 + (z - F3)^2 == s1^2;
%% Ipotesi condensata (cerco il piano ortogonale a Plane1 passante per CMC e tangente alla sfera in un punto
% Appartenente all'intersezione tra sfera e Plane1. In pratica mi metto nel
% piano che contiene la circonferenza data dall'intersezione tra sfera e
% plane1 e cerco il punto P s.t. forma con F e CMC un triangolo rettangolo.
% Esistono due soluzioni , prendo quella con la y pi\'u piccola
% eq_semplificativa = (F1-x)^2 + (F2-y)^2 + (F3-z)^2 + (CMC1-x)^2 + (CMC2-y)^2 + (CMC3-z)^2 == (F1-CMC1)^2 + (F2-CMC2)^2 + (F3-CMC3)^2;
% [x_sol,y_sol,z_sol] = solve([eq_plane_3points; eq_sphere_F; eq_semplificativa; y < F2],[x,y,z]);
% K = [x_sol;y_sol;z_sol];

eq_semplificativa1 = s1^2 + (CMC1-x)^2 + (CMC2-y)^2 + (CMC3-z)^2 == (F1-CMC1)^2 + (F2-CMC2)^2 + (F3-CMC3)^2;
[x_sol,y_sol,z_sol] = solve([eq_plane_3points; eq_sphere_F; eq_semplificativa1],[x,y,z]);
K_1 = [x_sol;y_sol;z_sol];

matlabFunction(x_sol, y_sol, z_sol,'file','sysEqnOptimized')

%end

