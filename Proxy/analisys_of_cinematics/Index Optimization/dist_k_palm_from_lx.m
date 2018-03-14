clear all; close all;

%% Index Analysis with genetic algorithm
% This file aims to estimate dist_k_palm from potentiometers' value when
% the finger is completely extended. 
global uin
uin(1)= 15.1%10.3421;
uin(2)= 1.88%2.6928; % degtorad(140);
% uin(3)= 16.02%10.3421;
% uin(4)= 2.006%2.6928; % degtorad(140);
% uin(5)= 0%10.3421;
% uin(6)= 2.006%2.6928; % degtorad(140);

ObjectiveFunction = @fitnessFunction2;
nvars = 5;
LB = [5 40 -10 5 0];   % Lower bound
UB = [10 55 10 15 pi/4];  % Upper bound
options = gaoptimset;
options = gaoptimset(options, ...
                       'SelectionFcn', @selectionroulette, ... %@selectiontournament
                       'CrossoverFcn', @crossoversinglepoint, ... %@crossovertwopoint
                       'MutationFcn', @mutationadaptfeasible, ...%@mutationgaussian, ...               
                       'Generations', 400 ...%10 ... %300
                      );
[x,fval] = ga(ObjectiveFunction,nvars,[],[],[],[],LB,UB,[],[], options)

%% Plot
param = zeros(18,1);
param(1) = x(1); % Semispessore del metacarpo e della falange (da tarare)
param(2) = x(2); % Lunghezza della falange
param(3) = x(3); % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
param(4) = x(4); % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA
param(5) =  18; % LAB   NOT USED
param(6) =  43; % LBC
param(7) =  9;  % LCD
param(8) =  40; % LDE
param(9) =  27; % LEF
param(10) =  37; % LBH
param(11) =  86; % LGH
param(12) =  46; % LGF
param(13) =  39; % LEJ
param(14) =  16; % LCI
param(15) =  35; % LKB
param(16) = 24;   % LKNy TO CHANGE
param(17) = 129;  % LKNx TO CHANGE
param(18) = 111.5;  % lact


u = zeros(2,1);
u(1) = uin(1); % Allungamento del motore misurato
u(2) = uin(2);

[y]  = indexDirectKinem(u, param)

plotIndexKinematic(param,y,u)