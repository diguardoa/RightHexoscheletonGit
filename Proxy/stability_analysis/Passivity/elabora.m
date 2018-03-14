clear all;
% senza tempo
% load ./RosBag/Vecchio_Controllore/Instabilita_fine_corsa/rosbag1.mat
% load ./RosBag/Vecchio_Controllore/Prove_Diego/6_antonio.mat
% load ./RosBag/Vecchio_Controllore/Prove_Diego/23_antonio.mat
% con tempo
% load ./RosBag/Vecchio_Controllore/afferro_cilindro/dita_attive.mat
% load ./RosBag/Vecchio_Controllore/afferro_cilindro/dita_attive2.mat
load ./RosBag/Vecchio_Controllore/afferro_cilindro/dita_attive3.mat

% forzo l'instabilita'
% load ./9marzo/delay100ms_2; % delay: 150 ms kpf = 0.75
load ./9marzo/delay200ms_8.mat
close all;

%%
% 1. Tempo
% t = acqui(1,:);
% 2. lact
%lact = acqui(2,:);
% 3. qB
%qB = acqui(3,:);
% 4. Xm
%Xm = acqui(4,:);
% 5. Xs
%Xs = acqui(5,:);
% 6. Fs (scalata)
%Fs = acqui(6,:);
% % 7. Fm ref
% Fm_ref = ref_force;
% clear ref_force;
% % 8. Fm ref post passivity
% Fm_pas = ref_passivato;
% clear ref_passivato;
% % 9. Energy m
% Em = E_obs;
% clear E_obs;
% % 10. PWM
% PWM = pwm_value;
% % 11. Fm meas
% Fm_meas = acqui(11,:);
%%

to_plot = 1:size(E_obs,1);
% %to_plot = t>0 & t<128;
% 
close all; 
subplot(1,2,1);
plot(master_index_proximal);
hold on;
plot(slave_index_proximal);
plot(torque_index_proximal,'y');

legend('Xm','Xs','torque');
xlabel('time[cs]');
ylabel('angle [rad], torque [Nm]');
title('proximal phalanx');
grid on;
subplot(1,2,2);

plot(master_index_distal);
hold on;
plot(slave_index_distal);
plot(torque_index_distal,'y');

legend('Xm','Xs','torque');
xlabel('time[s]');
ylabel('angle [rad], torque [Nm]');
title('distal phalanx');
grid on;
%%
figure
% calcola_derivata
for i=1:(size(lin_pot,2)-1)
    lin_pot_der(i) = (lin_pot(i+1) - lin_pot(i))*100;

end
lin_pot_der(i+1) = lin_pot_der(i);
plot(lin_pot_der);
hold on
plot(-4*ref_passivato);
plot(-lin_pot_der.*ref_passivato);
legend('vel','force\_ref','power');
%%
%  close all;
figure
subplot(1,2,1);
%plot(ref_force);
plot(ref_passivato);
hold on; grid on;
plot(mes_force);

legend('Fm pas','Fm meas');
xlabel('time[s]');
ylabel('force [N]');
title('reference vs measured (exo)');
subplot(1,2,2);
plot(ref_force);
hold on; grid on;
plot(ref_passivato);
plot(E_obs./600,'y');
legend('Fm ref','Fm pas','Energy');
xlabel('time[s]');
ylabel('force [N], Energy');
title('passivity (exo)');
%%
figure
plot(pwm_value)
xlabel('time[s]');
ylabel('duty cycle');

legend('PWM');
