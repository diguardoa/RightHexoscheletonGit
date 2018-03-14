function y  = indexDirectKinem(u, measurements)
xL_mag = measurements(3); % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
offset = measurements(4); % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA]
LIIp = measurements(1); % Semispessore del metacarpo e della falange (da tarare)
LJJp = LIIp; % semispessore della falangina (da tarare, non per forza uguale a LIIp)
LLM = measurements(2); % Lunghezza della falange
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
s_slitta = 13.5; % [mm] misurato con il calibro
LA2A1 = 13;
LA2B = 16.78;

LKH = LKB + LBH;
LDF = LDE + LEF;
LBD = LBC + LCD;

LKN =  sqrt(LKNx^2 + LKNy^2); %135.6320;
qKN = atan(LKNy / LKNx); %0.1108; % angolo tra il giunto dell'attacco del motore (N) e il giunto K 

xL = -xL_mag; % Derivata  
yL = -(LIIp + offset); % Distanza tra K e 01

lx = u(1); % Allungamento del motore misurato
qB = u(2); % Angolo inB misurato dal potenziometro (espresso in radianti)

%% Calcolo qK
% Cambiamenti della cinematica del pollice
% il link AB e' diventato la spezzata BA2A1. Tra A2 e A1 c'e' un angolo di
% 115 gradi

% Lunghezza motore piu' spostamento
LA1N = lx + lact;

LA2K = sqrt(LA2B^2 + LKB^2 - 2*LA2B*LKB*cos(qB));

% angolo in A2 del triangolo A2BK
qA2 = acos((- LKB^2 + LA2B^2 + LA2K^2)/(2 * LA2B * LA2K));

% NOTA: presente il valore 115, ovvero l'angolo tra A2B e A2A1
LA1K = sqrt(LA2A1^2 + LA2K^2 - 2*LA2A1*LA2K*cos(115 * pi/180 - qA2));

% angolo in N tra A1N e l'orizzontale
qN = acos(((- LA1K^2 + LA1N^2 + LKN^2)/(2*LA1N*LKN))) - qKN;

% angolo in K triangolo KBA2
xK1 = ((-LA2B^2 + LA2K^2 + LKB^2)/(2*LA2K*LKB));
qK1 = acos(xK1);

% angolo in K triangolo KA1N
xK2 = (-LA1N^2 + LA1K^2 + LKN^2)/(2*LA1K*LKN);
qK2 = acos(xK2);

% angolo in K triangolo A2A1K
xK3 = (-LA2A1^2 + LA2K^2 + LA1K^2)/(2*LA2K*LA1K);
qK3 = acos(xK3);
        
% Calcolo qK    
qK = pi - (qK1 + qK2 + qK3 + qKN);

%% Calcolo coordinate punti cinematica parallela
% il centro del sistema di riferimento è in K con asse x verso il polso e
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
LLI = sqrt((xI - xL)^2 + (yI - yL)^2);


%% C1: dello slider. Distanza I da L proiettato sullo slider
spessore = LIIp + s_slitta;
temp = LLI^2 - spessore^2;

if (temp < 0)
    temp = single(0);
end
c1 = sqrt(temp);

% angolo in L del triangolo LIU
xj1 = (-spessore^2 + LLI^2 + c1^2)/(2*c1*LLI);
if abs(xj1)>1
    xj1 = single(1);
end

qj1 = abs(acos(xj1));

%% calcolo di qo1

alpha = atan((yL - yI)/(xL - xI));
qo1 = qj1 + alpha;
    
%% Calcolo distanze tra punti nella cinematica parallela   
LHD = sqrt((xH - xD)^2 + (yH - yD)^2);
LDG = sqrt((xG - xD)^2 + (yG - yD)^2);


% angolo in G triangolo DGH - puo' diventare ottuso
xG1 = (-LHD^2 + LDG^2 + LGH^2)/(2*LDG*LGH);
if abs(xG1)>1
    xG1=single(1);
end
qG1 = abs(acos(xG1));
% angolo in G triangolo FGD - non puo' diventare ottuso
xG2 = (-LDF^2 + LDG^2 + LGF^2)/(2*LDG*LGF);
if abs(xG2)>1
    xG2=single(1);
end

qG2 = abs(acos(xG2));
qG = pi - (qG1 + qG2);

%% Seconda falange
% Giunto M del dito
xM = xL - LLM*cos(qo1); yM = yL - LLM*sin(qo1);

% Angolo in D triangolo DGH
xD1 = (-LGH^2 + LHD^2 + LDG^2)/(2*LHD*LDG);
if abs(xD1)>1
    xD1=single(1);
end
qD1 = abs(acos(xD1));
% Angolo in D triangolo GFD
xD2 = (-LGF^2 + LDG^2 + LDF^2)/(2*LDG*LDF);
if abs(xD2)>1
    xD2=single(1);
end
qD2 = abs(acos(xD2));
% Angolo in D triangolo BDH
xD3 = (-LBH^2 + LHD^2 + LBD^2)/(2*LHD*LBD);
if abs(xD3)>1
    xD3=single(1);
end
qD3 = abs(acos(xD3));

qD = pi - (qD1 + qD2 + qD3);

% Giunto E
xE = xD - LDE*cos(qB - qD - qK);
yE = yD - LDE*sin(qB - qD - qK);
% Giunto J
xJ = xE + LEJ*sin(qB - qD - qK);  
yJ = yE - LEJ*cos(qB - qD - qK);
% Distanza JM
LJM = sqrt((xJ - xM)^2 + (yJ - yM)^2);
% calcolo c2
temp = LJM^2 - spessore^2;
if temp < 0
    temp = single(0);
end
c2 = sqrt(temp);

% Angolo in M triangolo JSM
xj2 = (-spessore^2 + LJM^2 + c2^2)/(2*c2*LJM);
if abs(xj2)>1
    xj2=single(1);
end
qj2 = abs(acos(xj2));


if (xJ - xM)<=0
    qj3 = atan((yJ - yM)/(xJ - xM));
else
    qj3 = pi + atan((yJ - yM)/(xJ - xM));
end


qo2 = qj2 + qj3 - qo1;



y = [qo1; qo2; qK; qD; qG; qN; c1; c2];