clear all; close all;

load('middleDistal.mat')
data = ans;
current = data(5,:)
forces_meas = data(2:4,:)

force_meas_norm = forces_meas - forces_meas(:,1)

force_lenght = sqrt(force_meas_norm(1,:).^2 + force_meas_norm(2,:).^2 + force_meas_norm(3,:).^2)./1000

plot(force_lenght)
hold on;
plot(current)
legend('force','current')