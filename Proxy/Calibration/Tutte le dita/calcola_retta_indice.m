function [m,q] = calcola_retta(qB,lx)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here

%% Ingressi letti
% u = zeros(2,1);
% u(1) = qB;
% u(2) = lx;
% u(1) = 16.7; % potenziometro lineare (mm)
% u(2) = 1.82; % potenziometro rotazionale (rad)

%% Angoli noti
param = zeros(18,1);
% param(4) = yL;
param(5) =  18; % LAB   NOT USED
param(6) =  43; % LBC
param(7) =  9;  % LCD
param(8) =  40; % LDE
param(9) =  27; % LEF
param(10) =  37; % LBH
param(11) =  86; % LGH
param(12) =  46; % LGF
param(13) =  39; % LEJ
param(14) =  14.10; % LCI DIVERSO DA QUELLO MINE'
param(15) =  35; % LKB
% LKN = 144; lunghezza totale
param(16) = 37.75;%LKN*sin(angle);   % LKNy TO CHANGE
param(17) = 140+7.5;%LKN*cos(angle);  % LKNx TO CHANGE
param(18) = 122;%111.5;  % lact
% error = 0;
[xI,yI,xJ,yJ] = lenght_fun(qB, lx,param);
m = (yJ - yI)/(xJ - xI);
q = -xI*m + yI;
end

function [xI,yI,xJ,yJ]  = lenght_fun(qB, lx, measurements)
%#codegen
% s_slitta = 13.5;
% xL_mag = 0; % FISSATO [mm]
% LIIp = 8; % FISSATO [mm]
% LJJp = LIIp; % semispessore della falangina (da tarare, non per forza uguale a LIIp)
LAB =  measurements(5);
LBC =  measurements(6);
LCD =  measurements(7);
LDE =  measurements(8);
LEF =  measurements(9);
LBH =  measurements(10); 
LGH =  measurements(11);
LGF =  measurements(12);
LEJ =  measurements(13);
LCI =  measurements(14);
LKB =  measurements(15);
LKNy = measurements(16); %% MISURA
LKNx = measurements(17); %% MISURA
lact = measurements(18); %Lunghezza dell'attuatore. [RIMISURA]

LA2A1 = 14.36;%13;
LA2B = 16;%16.78;

LKH = LKB + LBH;
LDF = LDE + LEF;
LBD = LBC + LCD;

LKN =  sqrt(LKNx^2 + LKNy^2); %135.6320;
qKN = atan(LKNy / LKNx); %0.1108; % angolo tra il giunto dell'attacco del motore (N) e il giunto K 

%xL = -xL_mag; % Derivata  
%yL = -(offset); % Distanza tra K e 01

%lx = u(1); % Allungamento del motore misurato
%qB = u(2); % Angolo inB misurato dal potenziometro (espresso in radianti)

%% Calcolo qK
% Cambiamenti della cinematica del pollice
% il link AB e' diventato la spezzata BA2A1. Tra A2 e A1 c'e' un angolo di
% 115 gradi

% Lunghezza motore piu' spostamento
LA1N = lx + lact;

LA2K = sqrt(LA2B^2 + LKB^2 - 2*LA2B*LKB*cos(qB));

% angolo in A2 del triangolo A2BK
qA2 = my_acos((- LKB^2 + LA2B^2 + LA2K^2)/(2 * LA2B * LA2K));

% NOTA: presente il valore 115, ovvero l'angolo tra A2B e A2A1
LA1K = sqrt(LA2A1^2 + LA2K^2 - 2*LA2A1*LA2K*cos(115 * pi/180 - qA2));

% angolo in N tra A1N e l'orizzontale
%qN = my_acos(((- LA1K^2 + LA1N^2 + LKN^2)/(2*LA1N*LKN))) - qKN;

% angolo in K triangolo KBA2
xK1 = ((-LA2B^2 + LA2K^2 + LKB^2)/(2*LA2K*LKB));
qK1 = my_acos(xK1);

% angolo in K triangolo KA1N
xK2 = (-LA1N^2 + LA1K^2 + LKN^2)/(2*LA1K*LKN);
qK2 = my_acos(xK2);

% angolo in K triangolo A2A1K
xK3 = (-LA2A1^2 + LA2K^2 + LA1K^2)/(2*LA2K*LA1K);
qK3 = my_acos(xK3);
        
% Calcolo qK    
qK = pi - (qK1 + qK2 + qK3 + qKN);
%% Calcolo coordinate punti cinematica parallela
% il centro del sistema di riferimento � in K con asse x verso il polso e
% asse y uscente (contratio alle dita)

% punto B
xB = - LKB * cos(qK);  yB = LKB * sin(qK);
% punto H
xH = - LKH * cos(qK);  yH = LKH * sin(qK);
% punto G
xG = xH - LGH*sin(qK);  yG = yH - LGH*cos(qK);
% punto C
xC = xB - LBC*cos(qB - qK); yC = yB - LBC * sin(qB - qK);
% punto D
xD = xC - LCD*cos(qB - qK);   yD = yC - LCD*sin(qB - qK);
% punto I
xI = xC + LCI * sin(qB - qK);   yI = yC - LCI * cos(qB - qK);
% distanza tra L ed I
% LLI = sqrt((xI - xL)^2 + (yI - yL)^2);


%% C1: dello slider. Distanza I da L proiettato sullo slider
% spessore = LIIp + s_slitta;
% temp = LLI^2 - spessore^2;
% 
% if (temp < 0)
%     temp = single(0);
% end
% c1 = sqrt(temp);
% 
% % angolo in L del triangolo LIU
% xj1 = (-spessore^2 + LLI^2 + c1^2)/(2*c1*LLI);
% if abs(xj1)>1
%     xj1 = single(1);
% end
% qj1 = abs(my_acos(xj1));
% 
% %% calcolo di qo1
% 
% alpha = atan((yL - yI)/(xL - xI));
% qo1 = qj1 + alpha
    
%% Calcolo distanze tra punti nella cinematica parallela   
LHD = sqrt((xH - xD)^2 + (yH - yD)^2);
LDG = sqrt((xG - xD)^2 + (yG - yD)^2);


% angolo in G triangolo DGH - puo' diventare ottuso
xG1 = (-LHD^2 + LDG^2 + LGH^2)/(2*LDG*LGH);

qG1 = my_acos(xG1);
% angolo in G triangolo FGD - non puo' diventare ottuso
xG2 = (-LDF^2 + LDG^2 + LGF^2)/(2*LDG*LGF);

qG2 = my_acos(xG2);
qG = pi - (qG1 + qG2);

%% Seconda falange
% Giunto M del dito
% xM = xL - LLM*cos(qo1); yM = yL - LLM*sin(qo1);

% Angolo in D triangolo DGH
xD1 = (-LGH^2 + LHD^2 + LDG^2)/(2*LHD*LDG);

qD1 = my_acos(xD1);
% Angolo in D triangolo GFD
xD2 = (-LGF^2 + LDG^2 + LDF^2)/(2*LDG*LDF);
qD2 = my_acos(xD2);
% Angolo in D triangolo BDH
xD3 = (-LBH^2 + LHD^2 + LBD^2)/(2*LHD*LBD);
qD3 = my_acos(xD3);

qD = pi - (qD1 + qD2 + qD3);

% Giunto E
xE = xD - LDE*cos(qB - qD - qK);
yE = yD - LDE*sin(qB - qD - qK);
% Giunto J
xJ = xE + LEJ*sin(qB - qD - qK);  
yJ = yE - LEJ*cos(qB - qD - qK);
% % Distanza JM
% LJM = sqrt((xJ - xM)^2 + (yJ - yM)^2);
% % calcolo c2
% temp = LJM^2 - spessore^2;
% 
% c2 = sqrt(temp);
% 
% % Angolo in M triangolo JSM
% xj2 = (-spessore^2 + LJM^2 + c2^2)/(2*c2*LJM);
% qj2 = my_acos(xj2);
% 
% 
% % if (xJ - xM)<=0
%     qj3 = atan((yJ - yM)/(xJ - xM));
% % else
% %     qj3 = pi + atan((yJ - yM)/(xJ - xM));
% % end
% 
% 
% 
% 
% 
% eqn = qo2 == qj2 + qj3 - qo1;
% 
% offset = solve(eqn,LLM);
% y = offset(1);
end

%% my_acos
function y = my_acos(x)

    y = acos(real(x));
            
end