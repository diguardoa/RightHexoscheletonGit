%% Procedura di identificazione dei parametri della mano
% Fase 1: tenere fermo il giunto distale e muovere solo il metacarpale
clear all
% numero acquisizioni
n = 20;
% apro il file delle prime acquisizioni
load middle.mat

% ingresso parametri registrati della traiettoria (il primo per ogni
% colonna e' qB, il secondo e' lx)
u = zeros(2,n);
A = zeros(n,3);
b = zeros(n,1);
close all;
figure;
subplot(1,2,1);
plot(middle_pose(:,1));
subplot(1,2,2);
plot(middle_pose(:,2));
%% campiono la traiettoria
upper = 150;
low = 110;
step = floor((upper-low)/n);
m = 0;
for i = low:step:upper %step:(80+(n)*step)
   m = m + 1;
   u(1,m) = middle_pose(i,2); % qB
   u(2,m) = middle_pose(i,1); % lx
end

% [y x s]
for i = 1:n
    qB = u(1,i);
    lx = u(2,i);
    [m,q] = calcola_retta_medio(qB,lx);
    A(i,1) = 1;
    A(i,2) = -m;
    alpha = 1/(cos(atan(m)));
    A(i,3) = -alpha;
    b(i,1) = q;
end

% [m,q] = calcola_retta(qB,lx)

% Calcola i 3 parametri % [y x s]
% ricorda che per avere lo spessore del dito da mettere nell'algoritmo devi
% togliere ad 's' lo spessore della slitta (13.5 mm)

% soluzione problema ai minimi quadrati
par = inv(A'*A)*A'*b;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
offx = par(2)
offy = par(1)
s = par(3)

%% Calcola lunghezza dita (Parametro)
% Blocco l'angolo tra le due falangi pari a 45' (utilizzando apposito
% supporto)
% Muovo il giunto metacarpale
% Nota: sono sufficienti i parametri gia' identificati per identificare il
% primo angolo

% Per ogni punto della traiettoria minimizzo la funzione obiettivo (trovo
% il valore di Ldito tale che...e poi li plotto tutti. Il valore effettivo
% e' il valore medio
load mano_antonio/second.mat
figure;
subplot(1,2,1);
plot(middle_pose(:,1));
subplot(1,2,2);
plot(middle_pose(:,2));
%% numero acquisizioni
n = 6;
low = 203;
upper = 361;
% ingresso parametri registrati della traiettoria (il primo per ogni
% colonna e' qB, il secondo e' lx)
u2 = zeros(2,n);
l_opt = zeros(1,n);
% campiono la traiettoria
% step = floor((size(middle_pose,1)-300)/(n));
step = floor((upper-low)/n);
m = 0;
% for i = 150:step:(150+(n)*step)
for i = low:step:((n)*step)

   m = m + 1;
   u2(1,m) = middle_pose(i,2); % qB
   u2(2,m) = middle_pose(i,1); % lx
end

syms LLM
global curren_equation

ObjectiveFunction = @fitness_function;
nvars = 1;
LB = [30];   % Lower bound
UB = [60];  % Upper bound
options = gaoptimset;
options = gaoptimset(options, ...
                       'SelectionFcn', @selectionroulette, ... %@selectiontournament
                       'CrossoverFcn', @crossoversinglepoint, ... %@crossovertwopoint
                       'MutationFcn', @mutationadaptfeasible, ...%@mutationgaussian, ...               
                       'Generations', 10 ...%10 ... %300
                      );
                  
for i=1:n
    qB = u2(1,i);
    lx = u2(2,i);
    [qo1, xJ, yJ] = calcolo_giunto_metacarpale(qB,lx, offx, offy, s);
    % Calcolo parametri
    xM = offx - LLM*cos(qo1); yM = offy - LLM*sin(qo1);
    qj3 = atan((yJ - yM)/(xJ - xM));
    LJM = sqrt((xJ - xM)^2 + (yJ - yM)^2);
    c2 = sqrt(LJM^2 - s^2);
    qj2 = acos(-s^2 + LJM^2 + c2^2)/(2*c2*LJM);
    
    curren_equation = qj2 + qj3 - qo1;
    

    [x,fval] = ga(ObjectiveFunction,nvars,[],[],[],[],LB,UB,[],[], options);
    
    % eqn = pi/4 == qj2 + qj3 - qo1;    
    % current_solution = vpasolve(eqn,LLM)
    l_opt(i) = x;
end

l_true = mean(l_opt);
plot(l_opt);
%%
s_slitta = 13.5;

vect = [-s-s_slitta l_true -offx -offy]