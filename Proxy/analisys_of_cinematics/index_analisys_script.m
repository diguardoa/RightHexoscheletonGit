%% Analisys of the FInger Kinematics
clear all; close all;
% configure lenghts

param = zeros(18,1);
param(1) = 9; % Semispessore del metacarpo e della falange (da tarare)
param(2) = 50; % Lunghezza della falange
param(3) = 0; % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
param(4) = 3; % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA
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

% run
u = zeros(2,1);
u(1) = 0; % Allungamento del motore misurato
u(2) = degtorad(130);

[y]  = indexDirectKinem(u, param)
plotIndexKinematic(param,y,u)
%%
% param(4) = 5; % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA
param(3) = 0
u(2) = 134;
vect = [0,0,0];
k = 0;
for i=[0:0.1:7]
    k = k+1;
    param(1) = i;
    vect(1,k) = i;
    [y] = directKinem(u, param);
    vect(2,k) = y(1);
    vect(3,k) = y(2);
end
figure
plot(vect(1,:),vect(2,:));
hold on
plot(vect(1,:),vect(3,:));

%% Plotta acquisizioni vere
clear all; close all;
%load ssta.mat
%load acqui_massi.mat
load massi_2.mat
%%
u = strange_situation_to_analyze(:,1:2);
param = strange_situation_to_analyze(:,3:20);
y = strange_situation_to_analyze(:,21:28);
%%
for k=1:20:size(strange_situation_to_analyze,1)
    close all;
    plotFingerKinematic(param(k,:),y(k,:),u(k,:))
    k
    pause(1)
end

%% Elabora dati veri
clear all; close all;
load massi_2.mat
u = strange_situation_to_analyze(:,1:2);

param = strange_situation_to_analyze(:,3:20);
param(:,4) = 0;
for k=1:20:size(strange_situation_to_analyze,1)
    close all;
    [y_curr]  = directKinem(u(k,:), param(k,:));
    plotFingerKinematic(param(k,:),y_curr,u(k,:));
    k;
    pause(1)
end