function [x,error] = IndexCalibration(vin)
%% Directional direct-search method
% Choose starting point x 0 ? Rn, step size t0 > 0, ? ? (0, 1), tolerance ? > 0 and a
% positive basis D. Set k = 0.
%
% while tk > ? do
%   Order the poll set {x k + tk d, d ? D}
%   Evaluate f at the poll points following the chosen order
%   If there is a poll point s.t. f (x k + tk d) < f (x k )
%       then x k+1 = x k + tk d, tk+1 = tk (successful iteration)
%       else x k+1 = x k , tk+1 = ?tk (step size reduction)
%   k = k + 1
% end

%% Ingressi letti
u = zeros(2,1);
u(1) = vin(1);
u(2) = vin(2);
% u(1) = 16.7; % potenziometro lineare (mm)
% u(2) = 1.82; % potenziometro rotazionale (rad)

%% Angoli noti
angle_des = zeros(2,1);
angle_des(1) = vin(3);
angle_des(2) = vin(4);
% angle_des(1) = 0; % angolo metacarpale (rad)
% angle_des(2) = pi/2; % angolo prima falange (rad)

%% Parametri da ottimizzare (sono tutte in mm)
x = zeros(4,1);
x(1) = 9; % Semispessore del metacarpo e della falange (da tarare)
x(2) = 40; % Lunghezza della falange
x(3) = 0; % Posizione lungo l'asse x di L rispetto a K [RIMISURA]
x(4) = 5; % Distanza tra il giunto K e l'appoggio del metacarpo [RIMISURA

%% Matrice dei pesi degli errori
K_mat = [1, 0.5; 0.5, 1];

%% Direzioni di ricerca 
D = {[0.5;0;0;0], [0;1;0;0], [0;0;0.5;0], [0;0;0;1], [-0.5;0;0;0], [0;-1;0;0], [0;0;-0.5;0], [0;0;0;-1]};
dir = zeros(8,1); % variabile di supporto

%% Fattore di riduzionde delle direzioni di ricerca e passo iniziale
beta = 0.8;
t = 1;
k = 0; % Numero di iterazione
epsilon = 10^-3; % Precisione

%% Ottimizzazione
error = fitnessFunction(angle_des, u, x, K_mat);
while t > epsilon
   % Calcolo il valore della funzione nelle diverse direzioni
   for d = 1:8
       x_temp = x + t*D{d};
       dir(d) = fitnessFunction(angle_des, u, x_temp, K_mat);
   end
   % find the minimum 
   [max_val,pos_idx]=min(dir(:));
   if dir(pos_idx) < error
       x = x + t*D{pos_idx};
       error = dir(pos_idx);
   else
       t = beta*t;
   end
   k = k+1;
end

