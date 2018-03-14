function y  = directKinem(measurements)
global u;
global angle;
s_slitta = 13.5; % [mm] misurato con il calibro

xL_mag = 0;%measurements(3); % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
offset = 3.24;%measurements(2); % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA]
LIIp = measurements(1); % Semispessore del metacarpo e della falange (da tarare)
LJJp = measurements(1); % semispessore della falangina (da tarare, non per forza uguale a LIIp)
LAB =  18;
LBC =  41;
LCI =  17;
LKB =  35;
LKNy = 21; %% MISURA
LKNx = 117; %% MISURA
lact = 98; %Lunghezza dell'attuatore. [RIMISURA]


LKN =  sqrt(LKNx^2 + LKNy^2); %135.6320;
qKN = atan(LKNy / LKNx); %0.1108; % angolo tra il giunto dell'attacco del motore (N) e il giunto K 



xL = -xL_mag; % Derivata  
yL = -(LJJp + offset); % Distanza tra K e 01

lx = u(1); % Allungamento del motore misurato
qB = u(2); % Angolo inB misurato dal potenziometro (espresso in radianti)

LAK = sqrt(LAB^2 + LKB^2 - 2*LAB*LKB*cos(qB)); % quadrato della distanza tra A e K. Non può venire mai negativo

%% Calcolo qK

% Coseno dell'angolo in K del triangolo AKB
xK1 = (-LAB^2 + LAK^2 + LKB^2)/(2*LAK*LKB); 
qK1 = acos(xK1);

% Coseno dell'angolo in K del triangolo AKN
xK2 = (-(lx+lact)^2 + LAK^2 + LKN^2)/(2*LAK*LKN);
qK2 = acos(xK2);

% Angolo qK
qK = pi - ( qK1 + qK2 + qKN);

%% Calcolo coordinate punti cinematica parallela
% il centro del sistema di riferimento è in K con asse x verso il polso e
% asse y uscente (contratio alle dita)

% punto B
xB = - LKB * cos(qK);  yB = LKB * sin(qK);
% punto C
xC = xB - LBC*cos(qB - qK); yC = yB - LBC * sin(qB - qK);
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

y = 0.5*(qo1-angle)^2;