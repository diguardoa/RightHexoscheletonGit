function J = fitnessFunction(uin)
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
global dist_k_palm
% Middle parameters (nota: par 1:3 must not change the optimization)
param = zeros(18,1);
param(1) = 6; % Semispessore del metacarpo e della falange (da tarare)
param(2) = 50; % Lunghezza della falange
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
param(16) = 19; %% MISURA
param(17) = 117; %% MISURA
param(18) = 98; %Lunghezza dell'attuatore. [RIMISURA]

u = zeros(2,1);
u(1) = uin(1); % Allungamento del motore misurato
u(2) = uin(2);

[y]  = directKinem(u, param);
K = [1,0.5;0.5,1];
e = [y(1);y(2)];

J = 0.5*e'*K*e;
end

