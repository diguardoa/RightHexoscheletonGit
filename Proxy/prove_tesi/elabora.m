clear all;

% load ./step4/step_space.mat
load ./k_100_new/d100/stiff_np.mat

close all;

t0 = min([t_c_f_sec(1) t_c_t_sec(1) t_debug_sec(1)]);
t_c_f = t_c_f_sec - t0 + 0.001*floor(t_c_f_nsec/1000000);
t_c_t = t_c_t_sec - t0 + 0.001*floor(t_c_t_nsec/1000000);
t_debug= t_debug_sec - t0 + 0.001*floor(t_debug_nsec/1000000);

%%
to_plot = 1:size(E_obs,1);
% %to_plot = t>0 & t<128;
% 
%close all; 
figure
subplot(1,2,1);
plot(t_c_t,master_index_proximal);
hold on;
plot(t_c_f,slave_index_proximal);
plot(t_c_f,torque_index_proximal(1:size(t_c_f,2)),'y');

legend('Xm','Xs','torque');
xlabel('time[s]');
ylabel('angle [rad], torque [Nm]');
title('proximal phalanx');
grid on;
subplot(1,2,2);

plot(t_c_t,master_index_distal);
hold on;
plot(t_c_f,slave_index_distal);
plot(t_c_f,torque_index_distal(1:size(t_c_f,2)),'y');

legend('Xm','Xs','torque');
xlabel('time[s]');
ylabel('angle [rad], torque [Nm]');
title('distal phalanx');
grid on;
% %%
% figure
% % calcola_derivata
% for i=1:(size(index_lin_pot,2)-1)
%     lin_pot_der(i) = (lin_pot(i+1) - lin_pot(i))*100;
% 
% end
% lin_pot_der(i+1) = lin_pot_der(i);
% plot(lin_pot_der);
% hold on
% plot(-4*ref_passivato);
% plot(-lin_pot_der.*ref_passivato);
% legend('vel','force\_ref','power');
%%
%  close all;
figure
subplot(1,2,1);
%plot(ref_force);
plot(t_debug,ref_passivato);
hold on; grid on;
plot(t_debug,mes_force);

legend('Fm pas','Fm meas');
xlabel('time[s]');
ylabel('force [N]');
title('reference vs measured (exo)');
subplot(1,2,2);
plot(t_debug,ref_force);
hold on; grid on;
plot(t_debug,ref_passivato);
plot(t_debug,E_obs./600,'y');
legend('Fm ref','Fm pas','Energy');
xlabel('time[s]');
ylabel('force [N], Energy');
title('passivity (exo)');
%%
close all
figure
subplot(2,3,1)
plot(t_debug,ref_force);
hold on; grid on;
plot(t_debug,ref_passivato);
plot(t_debug,mes_force);
legend('Fm ref','Fm pas','mes_force');
xlabel('time[s]');
ylabel('force [N]');
title('Index');

subplot(2,3,2)
plot(t_debug,middle_force_ref);

hold on; grid on;
plot(t_debug,middle_force_sens);
legend('Fm ref','mes_force');
xlabel('time[s]');
ylabel('force [N]');
title('Middle');

subplot(2,3,3)
plot(t_debug,ring_force_ref);
%plot(t_debug,ref_force);
hold on; grid on;
plot(t_debug,ring_force_sens);
legend('Fm ref','mes_force');
xlabel('time[s]');
ylabel('force [N]');
title('Ring');

subplot(2,3,4)
plot(t_debug,pinky_force_ref);
 %plot(t_debug,ref_force);
hold on; grid on;
plot(t_debug,pinky_force_sens);
legend('Fm ref','mes_force');
xlabel('time[s]');
ylabel('force [N]');
title('Pinky');

subplot(2,3,5)
plot(t_debug,thumb_force_ref);
%plot(t_debug,ref_force);
hold on; grid on;
plot(t_debug,thumb_force_sens);
legend('Fm ref','mes_force');
xlabel('time[s]');
ylabel('force [N]');
title('Thumb');
%%
figure
plot(t_debug,pwm_value)
hold on; grid on;
plot(t_debug,ref_force.*10);

xlabel('time[s]');
ylabel('duty cycle');
title('PWM');
legend('PWM','force ref * 10');
%%
close all
figure
subplot(2,3,1);
plot(t_debug,mes_force);
hold on;
plot(t_debug,ref_force);
grid on;
plot(t_debug,index_lin_pot);
xlabel('time[s]');
legend('Mes Force','Ref Force','L motor');
title('index');
subplot(2,3,2);
plot(t_debug,middle_force_sens);
hold on; grid on;
plot(t_debug,middle_force_ref);
plot(t_debug,middle_lin_pot);
xlabel('time[s]');
legend('Mes Force','Ref Force','L motor');
title('middle');
subplot(2,3,3);
plot(t_debug,ring_force_sens);
hold on; grid on;
plot(t_debug,ring_force_ref);
plot(t_debug,ring_lin_pot);
xlabel('time[s]');
legend('Mes Force','Ref Force','L motor');
title('ring');
subplot(2,3,4);
plot(t_debug,pinky_force_sens);
hold on; grid on;
plot(t_debug,pinky_force_ref);
plot(t_debug,pinky_lin_pot);
xlabel('time[s]');
legend('Mes Force','Ref Force','L motor');
title('pinky');
subplot(2,3,5);
plot(t_debug,thumb_force_sens);
hold on; grid on;
plot(t_debug,thumb_force_ref);
plot(t_debug,thumb_lin_pot);
xlabel('time[s]');
legend('Mes Force','Ref Force','L motor');
title('thumb');
% da questo grafico potresti volendo anche calcolarti l'energia per
% muoverti in free space
%%
%%
close all
range=min([size(t_debug,2) size(master_index_proximal,2)]);
figure
subplot(2,3,1);
plot(t_debug(1:range),master_index_proximal(1:range));
hold on;
plot(t_debug(1:range),ref_force(1:range));
grid on;
plot(t_c_f,slave_index_proximal);

xlabel('time[s]');
legend('MCP_m','Ref Force','MCP_s');
title('index');

subplot(2,3,2);
plot(t_debug(1:range),master_middle_proximal(1:range));
hold on; grid on;
plot(t_debug(1:range),middle_force_ref(1:range));
plot(t_c_f,slave_middle_proximal);
xlabel('time[s]');
legend('MCP_m','Ref Force','MCP_s');
title('middle');

subplot(2,3,3);
plot(t_debug(1:range),master_ring(1:range));
hold on; grid on;
plot(t_debug(1:range),ring_force_ref(1:range));
plot(t_c_f,slave_ring);
xlabel('time[s]');
legend('Ring_m','Ref Force','Ring_s');
title('ring');

subplot(2,3,4);
plot(t_debug(1:range),master_pinky(1:range));
hold on; grid on;
plot(t_debug(1:range),pinky_force_ref(1:range));
plot(t_c_f,slave_pinky);
xlabel('time[s]');
legend('Pinky_m','Ref Force','Pinky_s');
title('pinky');

subplot(2,3,5);
plot(t_debug(1:range),master_thumb_flexion(1:range));
hold on; grid on;
plot(t_debug(1:range),thumb_force_ref(1:range));
plot(t_c_f,slave_thumb_flexion);
xlabel('time[s]');
legend('Thumb_m','Ref Force','Thumb_s');
title('thumb');
% da questo grafico potresti volendo anche calcolarti l'energia per
% muoverti in free space