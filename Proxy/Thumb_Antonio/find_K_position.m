function K_1 = find_K_position(CMC, s1, F, F_1)

%% Pose estimation
% This script finds K1 position starting from CMC, F, F_1
% clear al,l;
syms x y z;

% Given the CMC point in a reference system in which it is defined thumb
% exoskeleton too
% s1 = 1;
% CMC = [0,0,0]; % [x, y, z]
% F = [10, 10, 10];
% F_1 = [10, 20, 10];
% Write the equation on the plane passing through 3 points (Plane1)
det_matrix = [x - CMC(1)   , y - CMC(2)   , z - CMC(3)   ; ...
              F(1) - CMC(1), F(2) - CMC(2), F(3) - CMC(3); ...
              F_1(1)-CMC(1), F_1(2)-CMC(2), F_1(3)-CMC(3)];
% a_plane = det([F(2) - CMC(2), F(3) - CMC(3);F_1(2)-CMC(2), F_1(3)-CMC(3)]);
% b_plane = -det([F(1) - CMC(1), F(3) - CMC(3);F_1(1)-CMC(1), F_1(3)-CMC(3)]);
% c_plane = det([F(1) - CMC(1), F(2) - CMC(2);F_1(1)-CMC(1), F_1(2)-CMC(2)]);

eq_plane_3points = det( det_matrix ) == 0;
%% write the sphere of radious s1 centered in F
% F = WRITE_THE_FUNCTION(q_A, q_B, q_C)
eq_sphere_F = (x - F(1))^2 + (y - F(2))^2 + (z - F(3))^2 == s1^2;
%% Ipotesi condensata (cerco il piano ortogonale a Plane1 passante per CMC e tangente alla sfera in un punto
% Appartenente all'intersezione tra sfera e Plane1. In pratica mi metto nel
% piano che contiene la circonferenza data dall'intersezione tra sfera e
% plane1 e cerco il punto P s.t. forma con F e CMC un triangolo rettangolo.
% Esistono due soluzioni , prendo quella con la y pi\'u piccola
% eq_semplificativa = (F(1)-x)^2 + (F(2)-y)^2 + (F(3)-z)^2 + (CMC(1)-x)^2 + (CMC(2)-y)^2 + (CMC(3)-z)^2 == (F(1)-CMC(1))^2 + (F(2)-CMC(2))^2 + (F(3)-CMC(3))^2;
% [x_sol,y_sol,z_sol] = solve([eq_plane_3points; eq_sphere_F; eq_semplificativa; y < F(2)],[x,y,z]);
% K = [x_sol;y_sol;z_sol];

eq_semplificativa1 = s1^2 + (CMC(1)-x)^2 + (CMC(2)-y)^2 + (CMC(3)-z)^2 == (F(1)-CMC(1))^2 + (F(2)-CMC(2))^2 + (F(3)-CMC(3))^2;
[x_sol,y_sol,z_sol] = solve([eq_plane_3points; eq_sphere_F; eq_semplificativa1; y < F(2)],[x,y,z]);
K_1 = [x_sol;y_sol;z_sol];
end

