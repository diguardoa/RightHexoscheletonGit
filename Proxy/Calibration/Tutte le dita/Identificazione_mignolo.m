%% Identificazione Mignolo
% Fase 1: tenere fermo il giunto distale e muovere solo il metacarpale
clear all
% numero acquisizioni
n = 20;
% apro il file delle prime acquisizioni
load pinky.mat

% ingresso parametri registrati della traiettoria (il primo per ogni
% colonna e' qB, il secondo e' lx)
u = zeros(2,n);
A = zeros(n,3);
b = zeros(n,1);
close all;
figure;
subplot(1,2,1);
plot(pinky_pose(:,1));
subplot(1,2,2);
plot(pinky_pose(:,2));
%% campiono la traiettoria
upper = 60;
low = 30;
step = floor((upper-low)/n);
m = 0;
for i = low:step:upper %step:(80+(n)*step)
   m = m + 1;
   u(1,m) = pinky_pose(i,2); % qB
   u(2,m) = pinky_pose(i,1); % lx
end

% [y x s]
for i = 1:n
    qB = u(1,i);
    lx = u(2,i);
    [m,q] = calcola_retta_pinky(qB,lx);
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
s = -par(3)-13.5