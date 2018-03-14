clear all;

% load ./indice_fissato.mat % Trasparenza + passivita'
load ./dati_calibrazione.mat 
close all;
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
%subplot(1,2,1);
plot(-lin_pot./10);

grid on; hold on;
%plot(rot_pot);
plot(mes_force);
plot(ref_passivato);
legend('lin\_plot','Fmes','Fpass');


%%
figure
plot(pwm_value)
xlabel('time[s]');
ylabel('duty cycle');

legend('PWM');
%%
figure
plot(E_obs)
legend('Energy');