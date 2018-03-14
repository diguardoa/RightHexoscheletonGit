%% Script per il calcolo di PIP-FE e MCP-FE

% Input
syms xG1 yG1 zG1 xG2 yG2 zG2 xMCP yMCP zMCP r2 l_proxi l_meta xCMC yCMC zCMC

% Output
syms xPIP yPIP xK yK

% Before:
% scrivo distanza K_PIP
K_PIP =  (xPIP - xK)^2 + (yPIP - yK)^2;
% scrivo distanza PIP_MCP
PIP_MCP = (xPIP - xMCP)^2 + (yPIP - yMCP)^2;
% scrivo distanza K_MCP
K_MCP = (xK - xMCP)^2 + (yK - yMCP)^2;
% scrivo distanza K_G2
K_G2 = (xK - xG2)^2 + (yK - yG2)^2;
% scrivo distanza PIP_CMC
PIP_CMC = (xPIP - xCMC)^2 + (yPIP - yCMC)^2;
% % 1. PIP appartiene al piano passante per G,G1,MCP
% matr1 = [xPIP - xG1, yPIP - yG1, zPIP - zG1; ...
%         xG2 - xG1, yG2 - yG1, zG2 - zG1; ...
%         xMCP - xG1, yMCP - yG1, zMCP - zG1];
% 
% eq1 = det(matr1) == 0;
% 
% % 2. K appartiene al piano passante per G, G1, MCP
% matr2 = [xK - xG1, yK - yG1, zK - zG1; ...
%         xG2 - xG1, yG2 - yG1, zG2 - zG1; ...
%         xMCP - xG1, yMCP - yG1, zMCP - zG1];
% 
% eq2 = det(matr2) == 0;

% 3. K e' il punto di tangenza tra la circonferenza di raggio r2 e la retta
% passante per la falange prossimale. Scrivo dunque il teorema di pitagora

eq3 = r2^2 + K_PIP == (xPIP - xG2)^2 + (yPIP - yG2)^2;

% 4. Impongo che K_G2 sia uguale a r2 (noto)

eq4 = K_G2 == r2^2;

% 5. Scrivo il teorema dei coseni che lega K, PIP e MCP

%eq5 = K_MCP == K_PIP + l_proxi - 2*sqrt(K_MCP*l_proxi)*cos(PIP_FE);
eq5 = l_meta*(K_MCP - K_PIP - l_proxi)^2 == K_MCP*(PIP_CMC - l_meta - l_proxi)^2;
% 6. Impongo PIP_MCP uguale a l_proxi

eq6 = PIP_MCP == l_proxi^2;

% 7. teorema dei coseni con PIP, MCP e CMC proiettato nel piano G1,G2,MCP

% eq7 = PIP_CMC == l_meta + l_proxi - 2*sqrt(l_meta*l_proxi)*cos(MCP_FE);

% 8. relazione PIP_FE e MCP_FE
% eq8 = PIP_FE == MCP_FE;

%% Risolvo sistema
[xK_s,yK_s,xPIP_s,yPIP_s] = solve([eq3;eq4;eq5;eq6],...
    [xK,yK,xPIP,yPIP]);

%% Ottimizzo la soluzione in un file
matlabFunction(xK_s,yK_s,xPIP_s,yPIP_s,'file','findAngles3_optimized')
