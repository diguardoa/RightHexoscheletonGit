function plotIndexKinematic(measurements,parameters,u)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here

%% Prendo i parametri
xL_mag = measurements(3); % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
offset = measurements(4); % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA]
LIIp = measurements(1); % Semispessore del metacarpo e della falange (da tarare)
LJJp = LIIp; % semispessore della falangina (da tarare, non per forza uguale a LIIp)
LLM = measurements(2);
%%
LAB =  measurements(5);
LBC =  measurements(6);
LCD =  measurements(7);
LDE =  measurements(8);
LEF =  measurements(9);
LBH =  measurements(10); 
LGH =  measurements(11);
LGF =  measurements(12);
LEJ =  measurements(13);
LCI =  measurements(14);
LKB =  measurements(15);
LKNy = measurements(16); %% MISURA
LKNx = measurements(17); %% MISURA
lact = measurements(18); %Lunghezza dell'attuatore. [RIMISURA]
LA2A1 = 13;
LA2B = 16.78;
AngleA = 115*pi/180;
s_slitta = 13.5; % [mm] misurato con il calibro
LKH = LKB + LBH;
LDF = LDE + LEF;
LBD = LBC + LCD;

LKN =  sqrt(LKNx^2 + LKNy^2); %135.6320;
qKN = atan(LKNy / LKNx); %0.1108; % angolo tra il giunto dell'attacco del motore (N) e il giunto K 

lx = u(1); % Allungamento del motore misurato
qB = u(2); % Angolo inB misurato dal potenziometro (espresso in radianti)

qo1 = parameters(1);
qo2 = parameters(2);
qK = parameters(3);
qD = parameters(4);
qG = parameters(5);
qN = parameters(6);
c1 = parameters(7);
c2 = parameters(8);

LAN = lx + lact;
%% calcolo dei punti
p_N_0 = [LKNx, LKNy, 0, 1]';
T_N_0 = Rz(pi)*Tx(-LKNx)*Ty(-LKNy);
p_K_0 = [0,0,0,1]';
p_A1_0 = T_N_0*DH(-(qN),LAN)*[0,0,0,1]';
p_B_0 = DH(pi-qK, LKB)*[0,0,0,1]'; 
p_A2_0 = DH((pi-qK), LKB)*DH((qB-pi), LA2B)*[0,0,0,1]';
p_A1_0_loop = DH((pi-qK), LKB)*DH((qB-pi), LA2B)*DH((AngleA-pi),LA2A1)*[0,0,0,1]';
p_H_0 = DH(pi-qK, LKH)*[0,0,0,1]'; 
p_G_0 = DH(pi-qK, LKH)*DH(pi/2,LGH)*[0,0,0,1]'; 
p_F_0 = DH(pi-qK, LKH)*DH(pi/2,LGH)*DH(qG,LGF)*[0,0,0,1]';
p_D_0 = DH(pi-qK, LKB)*DH(qB,LBD)*[0,0,0,1]'; 
p_F_0_loop = DH(pi-qK, LKB)*DH(qB,LBD)*DH(-qD,LDF)*[0,0,0,1]'; 
p_C_0 = DH(pi-qK, LKB)*DH(qB,LBC)*[0,0,0,1]'; 
p_I_0 = DH(pi-qK, LKB)*DH(qB,LBC)*DH(pi/2,LCI)*[0,0,0,1]'; 
p_L_0 = Ty(-(LIIp + offset))*DH(-pi, xL_mag)*[0,0,0,1]';
p_M_0 = Ty(-(LIIp + offset))*DH(-pi, xL_mag)*DH(qo1,LLM)*[0,0,0,1]';
p_BegFinger_0 = Ty(-(LIIp + offset))*Tx(LKNx)*[0,0,0,1]';
p_EndFinger_0 = Ty(-(LIIp + offset))*DH(-pi, xL_mag)*DH(qo1,LLM)*DH(qo2,LLM)*[0,0,0,1]';
p_E_0 = DH(pi-qK, LKB)*DH(qB,LBD)*DH(-qD,LDE)*[0,0,0,1]'; 
p_J_0 = DH(pi-qK, LKB)*DH(qB,LBD)*DH(-qD,LDE)*DH(pi/2,LEJ)*[0,0,0,1]'; 

loop1 = [p_K_0,p_B_0, p_A2_0, p_A1_0,p_A1_0_loop, p_N_0]; % p_A_0, p_A_0_loop devono essere uguali, se no errore
loop2 = [p_K_0,p_H_0,p_G_0,p_F_0,p_F_0_loop,p_D_0,p_B_0];
first_slider = [p_C_0, p_I_0];
second_slider = [p_E_0, p_J_0];
joint_to_print = [p_BegFinger_0, p_L_0, p_M_0, p_EndFinger_0];

plot(loop1(1,:), loop1(2,:));
hold on;
plot(loop2(1,:), loop2(2,:));
plot(first_slider(1,:), first_slider(2,:));
plot(second_slider(1,:), second_slider(2,:));
plot(joint_to_print(1,:), joint_to_print(2,:), '*');
plot(joint_to_print(1,:), joint_to_print(2,:));
xlim([-120,130]);
ylim([-120,130]);
axis equal
end
%% Denavit Semplificato
function mat = DH( angle, tras )
    temp_mat = Rz(angle) * Tx (tras);
    
    mat = temp_mat;
end
%% Trasla asse x
function mat = Tx( meas )
    temp_mat = eye(4);
    
    temp_mat(1,4) = meas;
    
    mat = temp_mat;
end

%% Trasla asse y
function mat = Ty( meas )
    temp_mat = eye(4);
    
    temp_mat(2,4) = meas;
    
    mat = temp_mat;
end
%% Trasla asse z
function mat = Tz( meas )
    temp_mat = eye(4);
    
    temp_mat(3,4) = meas;
    
    mat = temp_mat;
end

%% Rotazione attorno asse x
function mat = Rx( angle_rad )
    temp_mat = zeros(4,4);
    temp_mat(4,4) = 1;
    
    temp_mat(1,1) = 1;
    temp_mat(2,2) = cos(angle_rad);
    temp_mat(2,3) = -sin(angle_rad);
    temp_mat(3,2) = sin(angle_rad);
    temp_mat(3,3) = cos(angle_rad);
    
    mat = temp_mat;
end

%% Rotazione attorno asse y
function mat = Ry( angle_rad )
    temp_mat = zeros(4,4);
    temp_mat(4,4) = 1;
    
    temp_mat(1,1) = cos(angle_rad);
    temp_mat(1,3) = sin(angle_rad);
    temp_mat(2,2) = 1;
    temp_mat(3,1) = -sin(angle_rad);
    temp_mat(3,3) = cos(angle_rad);
    
    mat = temp_mat;
end

%% Rotazione attorno asse z
function mat = Rz( angle_rad )
    temp_mat = zeros(4,4);
    temp_mat(4,4) = 1;
    
    % Implemento la matrice omogenea
    temp_mat(1,1) = cos(angle_rad);
    temp_mat(1,2) = -sin(angle_rad);
    temp_mat(2,1) = sin(angle_rad);
    temp_mat(2,2) = cos(angle_rad);
    temp_mat(3,3) = 1;
    mat = temp_mat;
end