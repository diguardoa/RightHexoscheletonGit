% #codegen
syms LLM LIIp offset xL_mag lx qB qo1 qo2
syms LAB LBC LCD LDE LEF LBH LGH LGF LEJ LCI LKB LKNy LKNx lact 
% vecchi
% LKN =  135.6320;
% qKN = 0.1108;
% lact = 117.77;
s_slitta = 13.5; % [mm] misurato con il calibro
% 
% xL_mag = measurements(3); % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
% offset = measurements(4); % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA]
% LIIp = measurements(1); % Semispessore del metacarpo e della falange (da tarare)
% LLM = measurements(2); % Lunghezza della falange
LJJp = LIIp; % semispessore della falangina (da tarare, non per forza uguale a LIIp)

% LAB =  measurements(5);
% LBC =  measurements(6);
% LCD =  measurements(7);
% LDE =  measurements(8);
% LEF =  measurements(9);
% LBH =  measurements(10); 
% LGH =  measurements(11);
% LGF =  measurements(12);
% LEJ =  measurements(13);
% LCI =  measurements(14);
% LKB =  measurements(15);
% LKNy = measurements(16); %% MISURA
% LKNx = measurements(17); %% MISURA
% lact = measurements(18); %Lunghezza dell'attuatore. [RIMISURA]

LKH = LKB + LBH;
LDF = LDE + LEF;
LBD = LBC + LCD;

LKN =  sqrt(LKNx^2 + LKNy^2); %135.6320;
qKN = atan(LKNy / LKNx); %0.1108; % angolo tra il giunto dell'attacco del motore (N) e il giunto K 



xL = -xL_mag; % Derivata  
yL = -(offset); % Distanza tra K e 01
% 
% lx = u(1); % Allungamento del motore misurato
% qB = u(2); % Angolo inB misurato dal potenziometro (espresso in radianti)

LAK = sqrt(LAB^2 + LKB^2 - 2*LAB*LKB*cos(qB)); % quadrato della distanza tra A e K. Non pu� venire mai negativo

%% Calcolo qK
% Calcolo di qN: l'angolo del motore (mia implementazione). Non pu� mai
% essere negarivo
qN = acos( (- LAK^2 + LKN^2 + (lx+lact)^2)/(2*(lx+lact)*LKN) ) ;

% Coseno dell'angolo in K del triangolo AKB
xK1 = (-LAB^2 + LAK^2 + LKB^2)/(2*LAK*LKB); 
qK1 = acos(xK1);

% Coseno dell'angolo in K del triangolo AKN
xK2 = (-(lx+lact)^2 + LAK^2 + LKN^2)/(2*LAK*LKN);
qK2 = acos(xK2);

% Angolo qK
qK = pi - ( qK1 + qK2 + qKN);

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
LLI = sqrt((xI - xL)^2 + (yI - yL)^2);


%% C1: dello slider. Distanza I da L proiettato sullo slider
spessore = LIIp + s_slitta;
c1 = sqrt(LLI^2 - spessore^2);

% angolo in L del triangolo LIU
xj1 = (-spessore^2 + LLI^2 + c1^2)/(2*c1*LLI);
qj1 = acos(xj1);

%% calcolo di qo1

alpha = atan((yL - yI)/(xL - xI));
eq1 = qo1 == qj1 + alpha;
    
%% Calcolo distanze tra punti nella cinematica parallela   
LHD = sqrt((xH - xD)^2 + (yH - yD)^2);
LDG = sqrt((xG - xD)^2 + (yG - yD)^2);


% angolo in G triangolo DGH - puo' diventare ottuso
xG1 = (-LHD^2 + LDG^2 + LGH^2)/(2*LDG*LGH);
qG1 = acos(xG1);
% angolo in G triangolo FGD - non puo' diventare ottuso
xG2 = (-LDF^2 + LDG^2 + LGF^2)/(2*LDG*LGF);
qG2 = acos(xG2);

qG = pi - (qG1 + qG2);

%% Seconda falange
% Giunto M del dito
xM = xL - LLM*cos(qo1); yM = yL - LLM*sin(qo1);

% Angolo in D triangolo DGH
xD1 = (-LGH^2 + LHD^2 + LDG^2)/(2*LHD*LDG);
qD1 = acos(xD1);
% Angolo in D triangolo GFD
xD2 = (-LGF^2 + LDG^2 + LDF^2)/(2*LDG*LDF);
qD2 = acos(xD2);
% Angolo in D triangolo BDH
xD3 = (-LBH^2 + LHD^2 + LBD^2)/(2*LHD*LBD);
qD3 = acos(xD3);

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
c2 = sqrt(LJM^2 - spessore^2);

% Angolo in M triangolo JSM
xj2 = (-spessore^2 + LJM^2 + c2^2)/(2*c2*LJM);

qj2 = acos(xj2);

qj3 = atan2((yM - yJ),(xM - xJ));


eq2 = qo2 == qj2 + qj3 - qo1;

% Equazione che deriva dai parametri della Schunk
eq3 = qo2 == qo1*1.35880

[qo1_s,qo2_s,qB_s] = solve([eq1; eq2;eq3],[qo1,qo2,qB]);

%matlabFunction(qo1_s,qo2_s,'file','anulare_kd')


