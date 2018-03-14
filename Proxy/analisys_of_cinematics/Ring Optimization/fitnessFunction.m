function y = fitnessFunction(x)
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here
% configure lenghts
global angle_to_reach;
global falange;
global semispessore;
global distanza;

%%
u = x;
param = zeros(18,1);
param(1) = semispessore; % Semispessore del metacarpo e della falange (da tarare)
param(2) = falange; % Lunghezza della falange
param(3) = 0; % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
param(4) = distanza; % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA
param(5) =  18; % LAB
param(6) =  42; % LBC
param(7) =  10;  % LCD
param(8) =  38; % LDE
param(9) =  29; % LEF
param(10) =  37; % LBH
param(11) =  86; % LGH
param(12) =  46; % LGF
param(13) =  39; % LEJ
param(14) =  16; % LCI
param(15) =  35; % LKB
param(16) = 26;   % LKNy
param(17) = 114;  % LKNx
param(18) = 98;  % lact
%%
[y_temp]  = directKinem(u, param);
%%
y_pre = abs((y_temp(1)-angle_to_reach)^2 + (y_temp(2)-angle_to_reach )^2 + (y_temp(1) - y_temp(2))^2);

if y_pre == []
    y_pre = 1;
else
    y_pre = y_pre(1);
    
y = real(y_pre);
end

