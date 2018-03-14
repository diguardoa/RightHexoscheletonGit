%% TROVO G1
syms xH yH zH xD yD zD xI yI zI xG2 yG2 zG2

% metodo "proporzioni" 
xG1 = xD + 52*(xH-xD)/73;
yG1 = yD + 52*(yH-yD)/73;
zG1 = zD + 52*(zH-zD)/73;

%% Trovo G2

% 1. coefficienti direttori piano passante per H, D, I
% testa equazione
% 0: H, 1: D, 2:I
a = (yD*zI - yI*zD - yD*zH + yH*zD + yI*zH - yH*zI);%(yD - yH)*(zI - zH) - (yI - yH)*(zD - zH);
b = (xI*zD - xD*zI + xD*zH - xH*zD - xI*zH + xH*zI);%-( (xD - xH)*(zI - zH) - (zD - zH)*(xI - xH));
c = (xD*yI - xI*yD - xD*yH + xH*yD + xI*yH - xH*yI);%(xD - xH)*(zI - zH) - (yD - yH)*(yI - yH);

% 2. Eq retta perpendicolare al piano e passante per G1
eq1 = (xG2 - xG1)/a == (yG2 - yG1)/b;
eq2 = (yG2 - yG1)/b == (zG2 - zG1)/c;

% sfera passante per G2 e raggio noto
r = 32;
eq3 = (xG2 - xG1)^2 + (yG2- yG1)^2 + (zG2 - zG1)^2 == r^2;

%% Solve and Generate code
[xG2_sol,yG2_sol,zG2_sol] = solve([eq1; eq2; eq3],[xG2,yG2, zG2]);
    

matlabFunction(xG2_sol, yG2_sol, zG2_sol,'file','findG2_optimized')