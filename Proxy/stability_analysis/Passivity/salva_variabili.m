%% Get from rosbag
clear all
% bagselect = rosbag('./RosBag/Vecchio_Controllore/afferro_cilindro/dita_attive3.bag');
% bagselect = rosbag('./9marzo/1.bag'); % delay: 100 ms kpf = 0.75
bagselect = rosbag('./9marzo/9.bag'); % delay: 150 ms kpf = 0.75

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
bagselect3 = select(bagselect,'Topic', '/svh_controller/channel_targets');
N = bagselect3.NumMessages;
for i=1:N
    %t = (i-1)*0.01;
    msg = readMessages(bagselect3,i);
    vector = msg{1,1}.Position;
    master_index_distal(i) = vector(3);
    master_index_proximal(i) = vector(4);
end
%
bagselect4 = select(bagselect,'Topic', '/svh_controller/channel_feedback');
N = bagselect4.NumMessages;
for i=1:N
    %t = (i-1)*0.01;
    msg = readMessages(bagselect4,i);
    vector = msg{1,1}.Position;
    slave_index_distal(i) = vector(3);
    slave_index_proximal(i) = vector(4);
end
%
bagselect4 = select(bagselect,'Topic', '/svh_controller/channel_currents');
%N = bagselect3.NumMessages;
for i=1:N
    %t = (i-1)*0.01;
    msg = readMessages(bagselect4,i);
    vector = msg{1,1}.Data;
    torque_index_distal(i) = 1/360*0.04*vector(3);
    torque_index_proximal(i) = 1/688*0.52*vector(4);
end
%% Salva veriabili Acquisite
save('delay300ms_9.mat','mes_force','pwm_value','ref_force','ref_passivato','E_obs','t','master_index_distal','master_index_proximal',...
    'slave_index_distal','slave_index_proximal','torque_index_distal','torque_index_proximal','lin_pot','rot_pot');
clear all;