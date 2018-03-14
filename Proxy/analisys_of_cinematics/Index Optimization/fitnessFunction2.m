function J = fitnessFunction2(t)
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
global uin
% Middle parameters (nota: par 1:3 must not change the optimization)
param = zeros(18,1);
param(1) = t(1); % Semispessore del metacarpo e della falange (da tarare)
param(2) = t(2); % Lunghezza della falange
param(3) = t(3); % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
param(4) = t(4); % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA
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
LKN = 144;
angle = t(5);
param(16) = LKN*sin(angle);   % LKNy TO CHANGE
param(17) = LKN*cos(angle);  % LKNx TO CHANGE
param(18) = 111.5;  % lact

u = zeros(2,1);
u(1) = uin(1); % Allungamento del motore misurato
u(2) = uin(2);

K = [1,0.5;0.5,1];
[y1]  = indexDirectKinem(u, param);
e1 = [y1(1);y1(2)] - [pi/4;pi/4];

% u(1) = uin(3);
% u(2) = uin(4);
% [y2]  = indexDirectKinem(u, param);
% e2 = [y2(1);y2(2)] - [pi/4;0];

% u(1) = uin(5);
% u(2) = uin(6);
% [y3]  = indexDirectKinem(u, param);
% e2 = [y2(1);y2(2)] - [deg2rad(15);0];

J = 0.5*(e1'*K*e1)% + e2'*K*e2);
end

