%% Trova CMC angles from Values
clear all;
load transformations.mat
% Variabili che conosco
syms kx ky kz xCMC yCMC zCMC

% Devo farla in funzione del punto K che ho trovato 
% la trasformazione che si utilizza � quella per andare a MCP dove per�
% l_meta � uguale alla distanza tra CMC e K
l_m = sqrt((kx - xCMC)^2 + (ky - yCMC)^2 + (kz - zCMC)^2);
pos_K = subs(pos_MCP,l_meta,l_m);

% Imposto il sistema a 2 incognite
eq1 = kx == pos_K(1);
eq2 = ky == pos_K(2);
eq3 = kz == pos_K(3);

[CMC_FE_s,CMC_AA_s,~,~] = solve([eq1, eq3], [CMC_FE,CMC_AA], 'ReturnConditions', true);
matlabFunction(CMC_FE_s,CMC_AA_s,'file','findCMCAngles')


%% Easier version
clear all;
syms qAA qFE kx ky kz
% kx, ky, kz are expressed in a reference system centred in CMC
syms CMC_FE CMC_AA
d = sqrt(kx^2 + ky^2 + kz^2);
% Rispetto al sistema di riferimento centrato in CMC e orientato come BASE

% 1. Ruoto attorno a Y di -CMC_AA
T_CMC_AA = [cos(-CMC_AA), 0, sin(-CMC_AA), 0; ...
            0, 1, 0, 0; ...
            -sin(-CMC_AA), 0, cos(-CMC_AA), 0; ...
            0       , 0        , 0, 1];
% 2. Ruoto attorno a X' di -CMC_FE
T_CMC_FE = [1, 0, 0, 0; ...
            0, cos(-CMC_FE), -sin(-CMC_FE), 0; ...
            0, sin(-CMC_FE), cos(-CMC_FE) , 0; ...
            0,        0        , 0, 1];
        
% 3. Traslo di d rispetto a z
        
T_d_K = [1, 0, 0, 0; ...
           0, 1, 0, 0; ...
           0, 0, 1, d; ...
           0, 0, 0, 1];

PAR_K = T_CMC_AA*T_CMC_FE*T_d_K*[0,0,0,1]';
eq = PAR_K(1:3,1) == [kx;ky;kz]
%%
CMC_FE_s = solve([eq(2)],CMC_FE)
%%
CMC_FE_s = CMC_FE_s(1)
%%
eq1 = subs(eq(1),CMC_FE,CMC_FE_s)
%%
[CMC_AA_s,param, cond] = solve([eq1], CMC_AA, 'ReturnConditions', true)

%%
CMC_AA_s = subs(CMC_AA_s(1), param, 0)

%%
matlabFunction(CMC_FE_s,CMC_AA_s,'file','findCMCAngles')