%% Script per il calcolo di PIP-FE e MCP-FE
clear all

% Input
syms xG1 yG1 zG1 xG2 yG2 zG2 xMCP yMCP zMCP r2 l_dist l_meta xCMC yCMC zCMC

% Output
syms xPIP yPIP zPIP xK yK zK PIP_FE MCP_FE MCP_AA

% Before:
% scrivo distanza K_PIP
K_PIP =  (xPIP - xK)^2 + (yPIP - yK)^2 + (zPIP - zK)^2 ;
% scrivo distanza PIP_MCP
PIP_MCP = (xPIP - xMCP)^2 + (yPIP - yMCP)^2 + (zPIP - zMCP)^2;
% scrivo distanza K_MCP
K_MCP = (xK - xMCP)^2 + (yK - yMCP)^2 + (zK - zMCP)^2 ;
% scrivo distanza K_G2
K_G2 = (xK - xG2)^2 + (yK - yG2)^2 + (zK - zG2)^2 ;
% scrivo distanza PIP_CMC
PIP_CMC = (xPIP - xCMC)^2 + (yPIP - yCMC)^2 + (zPIP - zCMC)^2;
% 1. PIP appartiene al piano passante per G,G1,MCP
matr1 = [xPIP - xG1, yPIP - yG1, zPIP - zG1; ...
        xG2 - xG1, yG2 - yG1, zG2 - zG1; ...
        xMCP - xG1, yMCP - yG1, zMCP - zG1];

eq1 = det(matr1);

% 2. K appartiene al piano passante per G, G1, MCP
matr2 = [xK - xG1, yK - yG1, zK - zG1; ...
        xG2 - xG1, yG2 - yG1, zG2 - zG1; ...
        xMCP - xG1, yMCP - yG1, zMCP - zG1];

eq2 = det(matr2);

% 3. K e' il punto di tangenza tra la circonferenza di raggio r2 e la retta
% passante per la falange prossimale. Scrivo dunque il teorema di pitagora

eq3 = r2^2 + K_PIP -( (xPIP - xG2)^2 + (yPIP - yG2)^2 + (zPIP - zG2)^2);

% 4. Impongo che K_G2 sia uguale a r2 (noto)

eq4 = K_G2 - r2^2;

% 5. Scrivo il teorema dei coseni che lega K, PIP e MCP

%eq5 = K_MCP -( K_PIP + l_dist^2 - 2*sqrt(K_MCP)*l_dist*cos(PIP_FE));
eq5 = K_MCP -( K_PIP + l_dist^2 - 2*sqrt(K_MCP)*l_dist*cos(MCP_FE));
%eq5 = l_meta*(K_MCP - K_PIP - l_proxi)^2 -( K_MCP*(PIP_CMC - l_meta - l_proxi)^2) == 0;
% 6. Impongo PIP_MCP uguale a l_proxi

eq6 = PIP_MCP - l_dist^2;

% 7. relazione PIP_FE e MCP_FE

%eq7 = PIP_FE - MCP_FE;

% 8. 
%teorema dei coseni con PIP, MCP e CMC proiettato nel piano G1,G2,MCP
%eq7 = PIP_CMC - l_meta + l_proxi - 2*sqrt(l_meta*l_proxi)*cos(MCP_FE) == 0;
load eqPIP.mat
% Eq1
eq8 = eqPIP(1);
eq9 = eqPIP(2);
% %% Risolvo sistema
% [xK_s,yK_s,zK_s,xPIP_s,yPIP_s,zPIP_s] = solve([eq1;eq2;eq3;eq4;eq5;eq6],...
%     [xK,yK,zK,xPIP,yPIP,zPIP]);
% 
% %% Ottimizzo la soluzione in un file
% matlabFunction(xK_s,yK_s,zK_s,xPIP_s,yPIP_s,zPIP_s,'file','findAngles2_optimized')

%% 
F = [eq1;eq2;eq3;eq4;eq5;eq6;eq8;eq9];
J = jacobian(F,[xK,yK,zK,xPIP,yPIP,zPIP,MCP_FE, MCP_AA])
% J_inv = inv(J)

matlabFunction(F,'file','findF')
matlabFunction(J,'file','findJ')
% matlabFunction(J_inv,'file','findJ_inv')
