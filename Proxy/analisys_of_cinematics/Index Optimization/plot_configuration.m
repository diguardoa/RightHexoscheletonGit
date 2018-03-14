%% Plot Index Configuration
load x_values.mat
%% Assegna valori ingressi
u = zeros(2,1);
u(1) = 25.59;%21.63; % Allungamento del motore misurato
u(2) = 2.143;

% Configurea Parametri
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
param(16) = x(5);   % LKNy TO CHANGE
param(17) = x(6);  % LKNx TO CHANGE
param(18) = 111.5;  % lact

% calcola cinematica
[y]  = indexDirectKinem(u, param);
% stampa cinematica
plotIndexKinematic(param,y,u);
