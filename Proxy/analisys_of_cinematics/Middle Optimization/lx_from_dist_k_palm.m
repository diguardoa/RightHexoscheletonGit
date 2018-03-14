clear all; close all;
global dist_k_palm
%% Middle Analysis with genetic algorithm
% This file aims to estimate the value of the actuator when the middle
% finger is completely extended. The value depends on the distance between
% the palm skin and the K joint of the exoskelethon
dist_k_palm = 9; % [mm]

ObjectiveFunction = @fitnessFunction;
nvars = 2;    % Number of variables
LB = [-1 degtorad(90)];   % Lower bound
UB = [20 degtorad(160)];  % Upper bound
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
param(1) = 9; % Semispessore del metacarpo e della falange (da tarare)
param(2) = 46; % Lunghezza della falange
param(3) = 0; % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
param(4) = dist_k_palm; % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA
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
param(16) = 19 %% MISURA
param(17) = 117 %% MISURA
param(18) = 98; %Lunghezza dell'attuatore. [RIMISURA]

u = zeros(2,1);
u(1) = x(1); % Allungamento del motore misurato
u(2) = x(2);

[y]  = directKinem(u, param)

plotFingerKinematic(param,y,u)