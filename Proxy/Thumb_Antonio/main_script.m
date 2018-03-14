%% Pose estimation
[T_F, T_F_1] = thumb_kinematics()

%%
CMC = [ -10; -10; -10]
s1 = 12;
%% Read Values
q_A_curr = 0;
q_B_curr = pi/6;
q_C_curr = -pi/3;

%% Find Critical Points
[ F, F_1] = findF(T_F, T_F_1,q_A_curr,q_B_curr,q_C_curr);

%% Find K Position
K = find_K_position(CMC, s1, F, F_1);

%% Get Metacarphal pose
[qo1, qo2] = Eval_CMC_angles(CMC, K);

%%
[x,y,z] = sysEqn(CMC, F, F_1, s1);
K = [x(1);y(1);z(1)];
[qo1, qo2] = Eval_CMC_angles(CMC, K)