function J = fitnessFunction2(t)
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
global uin
global angle
% Middle parameters (nota: par 1:3 must not change the optimization)
param = zeros(19,1);
param(1) = t(1); % Semispessore del metacarpo e della falange (da tarare)
param(2) = t(2); % Lunghezza della falange
param(3) = 0; % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
param(4) = t(3); % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA
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
param(16) = t(4);%21;
param(17) = t(5);%117;
param(18) = 98; %Lunghezza dell'attuatore. [RIMISURA]

% param(19) = t(6); %semispessore metacarpo
u = zeros(2,1);
u(1) = uin(1); % Allungamento del motore misurato
u(2) = uin(2);

[y]  = directKinem(u, param);
K = [1,0;0,0];
e = [y(1);y(2)] - [angle(1);angle(2)];

J = 0.5*e'*K*e;
end

