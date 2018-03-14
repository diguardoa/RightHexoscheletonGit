clear all; close all;

%% Middle Analysis with genetic algorithm
% This file aims to estimate dist_k_palm from potentiometers' value when
% the finger is completely extended. 
global uin
global angle
angle(1) = pi/4;
angle(2) = 0;
uin(1)= 20.51;%10.3421;
uin(2)= 1.565;%2.6928; % degtorad(140);

ObjectiveFunction = @fitnessFunction2;
nvars = 5;
LB = [3 40 5 15 110];   % Lower bound
UB = [10 60 15 30 130];  % Upper bound
options = gaoptimset;
options = gaoptimset(options, ...
                       'SelectionFcn', @selectionroulette, ... %@selectiontournament
                       'CrossoverFcn', @crossoversinglepoint, ... %@crossovertwopoint
                       'MutationFcn', @mutationadaptfeasible, ...%@mutationgaussian, ...               
                       'Generations', 600 ...%10 ... %300
                      );
[x,fval] = ga(ObjectiveFunction,nvars,[],[],[],[],LB,UB,[],[], options)

%% Plot
param = zeros(18,1);
param(1) = x(1); % Semispessore del metacarpo e della falange (da tarare)
param(2) = x(2); % Lunghezza della falange
param(3) = 0; % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
param(4) = x(3); % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA
param(5) =  18;
param(6) =  41;
param(7) =  9;
param(8) =  52;
param(9) =  21;
param(10) =  37; 
param(11) =  86;
param(12) =  46;
param(13) =  39;
param(14) =  17;
param(15) =  35;
param(16) = x(4);
param(17) = x(5);
param(18) = 98; %Lunghezza dell'attuatore. [RIMISURA]


u = zeros(2,1);
u(1) = uin(1); % Allungamento del motore misurato
u(2) = uin(2);

[y]  = directKinem(u, param)

plotFingerKinematic(param,y,u)