%% Find H
%  Non e' garantito che la soluzione esista (e sia unica)
syms xI yI zI xJ yJ zJ xH yH zH xD yD zD
%% 1. Costruisco il piano passante per I e perpendicolare alla retta IJ
% a. trovo la direzione della retta IJ
va = xI - xJ;
vb = yI - yJ;
vc = zI - zJ;

% b. trovo il parametro d
d = -(va*xI + vb*yI + vc * zI);

% c. scrivo equazione piano (generico punto H che cerco)
eqPiano = va*xH + vb*yH + vc*zH + d == 0;

%% 2. Sfera centrata in I e raggio IH
r1 = 40;
eqSferaI = (xH - xI) ^ 2 + (yH - yI)^2 + (zH - zI)^2 == r1^2 

%% 3. Sfera centrata in D e raggio DH
r2 = 73;
eqSferaD = (xH - xD) ^ 2 + (yH - yD)^2 + (zH - zD)^2 == r2^2 

%% Risolvo sistema
[xH_sol,yH_sol,zH_sol] = solve([eqPiano; eqSferaI; eqSferaD],[xH,yH,zH]);

%% Salvo la procedura in un file
matlabFunction(xH_sol, yH_sol, zH_sol,'file','findH_optimized')

