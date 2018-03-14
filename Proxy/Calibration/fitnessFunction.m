function J = fitnessFunction(angle_des, sens_values, to_find, K_mat)
%UNTITLED5 Summary of this function goes here
%   Detailed explanation goes here
param = zeros(18,1);

%% Sono i parametri da ottimizzare
param(1) = to_find(1); % Semispessore del metacarpo e della falange (da tarare)
param(2) = to_find(2); % Lunghezza della falange
param(3) = to_find(3); % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
param(4) = to_find(4); % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA
%% Sono i parametri fissi dell'Indice
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
param(16) = 24;   % LKNy
param(17) = 129;  % LKNx
param(18) = 111.5;  % lact

[y] = dK(sens_values, param);

q_tilde = [y(1); y(2)];
error = q_tilde - angle_des;
J = 0.5 * error' * K_mat * error;
end

