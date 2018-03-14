%% Trova CMC angles from Values
clear all;
load transformations.mat

%% Easier version
clear all;
syms kx ky kz
% kx, ky, kz are expressed in a reference system centred in CMC
syms CMC_FE CMC_AA
d = sqrt(kx^2 + ky^2 + kz^2);
% Rispetto al sistema di riferimento centrato in CMC e orientato come BASE

% 1. Ruoto attorno a Z di CMC_AA
T_CMC_AA = [cos(CMC_AA), -sin(CMC_AA), 0, 0; ...
            sin(CMC_AA), cos(CMC_AA), 0, 0; ...
            0,          0       , 1, 0; ...
            0       , 0        , 0, 1];
% 2. Ruoto attorno a Y di -CMC_FE
T_CMC_FE = [cos(-CMC_FE), 0, sin(-CMC_FE), 0; ...
            0, 1, 0, 0; ...
            -sin(-CMC_FE), 0, cos(-CMC_FE), 0; ...
            0,        0        , 0, 1];
        
% 3. Traslo di d rispetto a z
        
T_d_K = [1, 0, 0, 0; ...
           0, 1, 0, 0; ...
           0, 0, 1, d; ...
           0, 0, 0, 1];

PAR_K = T_CMC_AA*T_CMC_FE*T_d_K*[0,0,0,1]';
eq = PAR_K(1:3,1) == [kx;ky;kz]
%%
CMC_FE_s = solve([eq(3)],CMC_FE)
%%
CMC_FE_s = CMC_FE_s(1)
%%
eq1 = subs(eq(1),CMC_FE,CMC_FE_s)
%%
[CMC_AA_s,param, cond] = solve([eq1], CMC_AA, 'ReturnConditions', true)

%%
CMC_AA_s = subs(CMC_AA_s(2), param, 0)

%%
matlabFunction(CMC_FE_s,CMC_AA_s,'file','findCMCAngles')