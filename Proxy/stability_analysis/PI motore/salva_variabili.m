%% Get from rosbag
clear all
bagselect = rosbag('./step4_5.bag');
bagselect2 = select(bagselect,'Topic', '/hand_exo/debug');
%%
N = bagselect2.NumMessages;
for i=1:N
    t(i) = (i-1)*0.01;
    msg = readMessages(bagselect2,i);
    vector = msg{1,1}.Effort;
    ref_force(i) = vector(1);
    mes_force(i) = vector(2);
    pwm_value(i) = vector(3);
    ref_passivato(i) = vector(4);
    E_obs(i) = vector(5);
    vector2 = msg{1,1}.Position;
    lin_pot(i) = vector2(1);
    rot_pot(i) = vector2(2);
end
%
%% Salva veriabili Acquisite
save('step4_5.mat','mes_force','pwm_value','ref_force','ref_passivato','E_obs','t','lin_pot','rot_pot');
clear all;