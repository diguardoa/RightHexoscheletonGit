%% Il seguente script scrive le trasformazioni della cinematica del pollice
% a partire dai parametri di Denavit-Hartemberg
% Le trasformazioni fanno riferimento a schema_cinematica.jpg
% Si sceglie una rappresentazione della catena cinematica il più vicina
% possibile al funzionamento della Schunk, per facilitarne il mapping in un
% secondo momento
clear all; 

% Variabili conosciute
syms xCMC yCMC zCMC l_meta l_dist l_proxi
% Variabili incognite
syms CMC_AA CMC_FE MCP_AA MCP_FE PIP_FE

%% 1 Trasformazione: da Base Esoscheletro a Base Pollice

% 1. traslo di CMC
T_b_b1_1 = [1,0,0 xCMC; 0,1,0, yCMC; 0,0,1, zCMC; 0,0,0,1];
% 2. ruoto di pi/2 attorno a xb
T_b_b1_2 = [1, 0, 0, 0; 0, cos(pi/2), -sin(pi/2), 0; 0, sin(pi/2), cos(pi/2), 0; 0, 0, 0, 1];
% 3. ruoto di pi/2 attorno a zb'
T_b_b1_3 = [cos(pi/2), -sin(pi/2), 0, 0; sin(pi/2), cos(pi/2), 0, 0; 0, 0, 1, 0; 0, 0, 0, 1];
% Completo la trasformazione
T_b_b1 = T_b_b1_1*T_b_b1_2*T_b_b1_3;

%% 2. Trasformazione da b1 a 1 (CMC_AA)
T_b1_1 = DH_matrix(0, CMC_AA, 0, -pi/2);

%% 3. Trasformazione da CMC a MCP (CMC_FE)
T_1_2 = DH_matrix(0, CMC_FE, l_meta, pi/2);

%% 4. Trasformazione da 2 a 3 (MCP_AA)
T_2_3 = DH_matrix(0, MCP_AA, 0, -pi/2);

%% 5. Trasformazione da MCP a PIP (MCP_FE)
T_3_4 = DH_matrix(0, MCP_FE, l_dist, 0);

%% 6. Trasformazione da PIP a TIP (PIP_FE)
T_4_5 = DH_matrix(0, PIP_FE, l_proxi, 0);

%% MCP Position
T_b_MCP = T_b_b1*T_b1_1*T_1_2;
pos_MCP = T_b_MCP*[0,0,0,1]';

%% PIP Position
T_b_PIP = T_b_MCP*T_2_3*T_3_4;
pos_PIP = T_b_PIP*[0,0,0,1]';

%% TIP Position
T_b_TIP = T_b_PIP*T_4_5;
pos_TIP = T_b_TIP*[0,0,0,1]';

%% Save Transformation
save('transformations.mat','T_b_MCP','pos_MCP','T_b_PIP','pos_PIP','T_b_TIP','pos_TIP',...
    'xCMC', 'yCMC', 'zCMC', 'l_meta', 'l_dist', 'l_proxi', ...
    'CMC_AA', 'CMC_FE', 'MCP_AA', 'MCP_FE', 'PIP_FE');
