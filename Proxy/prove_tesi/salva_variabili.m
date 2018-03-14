%% Get from rosbag
clear all
name = './k_100_new/d100/stiff_np.bag';
file_dest =  './k_100_new/d100/stiff_np.mat';
bagselect = rosbag(name); 
bagselect2 = select(bagselect,'Topic', '/hand_exo/debug');
%%
N = bagselect2.NumMessages;
for i=1:N
    msg = readMessages(bagselect2,i);
    t_debug_sec(i) = msg{1,1}.Header.Stamp.Sec;
    t_debug_nsec(i) = msg{1,1}.Header.Stamp.Nsec;
    vector = msg{1,1}.Effort;
    ref_force(i) = vector(1);
    mes_force(i) = vector(2);
    pwm_value(i) = vector(3);
    ref_passivato(i) = vector(4);
    E_obs(i) = vector(5);
    ring_force_sens(i) = vector(6);
    pinky_force_sens(i) = vector(7);
    %pinky_force_ref(i) = vector(8);
    vector2 = msg{1,1}.Position;
    index_lin_pot(i) = vector2(1);
    middle_lin_pot(i) = vector2(2);
    ring_lin_pot(i) = vector2(3);
    pinky_lin_pot(i) = vector2(4);
    thumb_lin_pot(i) = vector2(5);
    exo_mode(i) = vector2(6);
    packet_difference(i) = vector2(7);
    %index_force_ref(i) = vector2(9);
    vector3 = msg{1,1}.Velocity;
    thumb_force_ref(i) = vector3(1);
    middle_force_ref(i) = vector3(2);
    ring_force_ref(i) = vector3(3);
    pinky_force_ref(i) = vector3(4);
    middle_force_sens(i) = vector3(6);
    thumb_force_sens(i) = vector3(7);
end
%
bagselect3 = select(bagselect,'Topic', '/svh_controller/channel_targets');
N = bagselect3.NumMessages;
for i=1:N
    %t = (i-1)*0.01;
    msg = readMessages(bagselect3,i);
    t_c_t_sec(i) = msg{1,1}.Header.Stamp.Sec;
    t_c_t_nsec(i) = msg{1,1}.Header.Stamp.Nsec;
    vector = msg{1,1}.Position;
    master_thumb_flexion(i) = vector(1);
    master_thumb_opposition(i) = vector(2);
    master_index_distal(i) = vector(3);
    master_index_proximal(i) = vector(4);
    master_middle_distal(i) = vector(5);
    master_middle_proximal(i) = vector(6);
    master_ring(i) = vector(7);
    master_pinky(i) = vector(8);
    master_spread(i) = vector(9);
end
%
bagselect4 = select(bagselect,'Topic', '/svh_controller/channel_feedback');
N = bagselect4.NumMessages;
for i=1:N
    %t = (i-1)*0.01;
    msg = readMessages(bagselect4,i);
    t_c_f_sec(i) = msg{1,1}.Header.Stamp.Sec;
    t_c_f_nsec(i) = msg{1,1}.Header.Stamp.Nsec;
    vector = msg{1,1}.Position;
    slave_thumb_flexion(i) = vector(1);
    slave_thumb_opposition(i) = vector(2);
    slave_index_distal(i) = vector(3);
    slave_index_proximal(i) = vector(4);
    slave_middle_distal(i) = vector(5); 
    slave_middle_proximal(i) = vector(6);
    slave_ring(i) = vector(7);
    slave_pinky(i) = vector(8);
    slave_spread(i) = vector(9);
end
%
bagselect4 = select(bagselect,'Topic', '/svh_controller/channel_currents');
N = bagselect4.NumMessages;
for i=1:N
    %t = (i-1)*0.01;
    msg = readMessages(bagselect4,i);
    vector = msg{1,1}.Data;
    torque_thumb_flexion(i) = 1/605*(0.08+0.08+0.06)*vector(1);
    torque_thumb_opposition(i) = 1/605*(0.19+0.19)*vector(2);
    torque_index_distal(i) = 1/360*(0.04+0.04)*vector(3);
    torque_index_proximal(i) = 1/688*0.52*vector(4);
    torque_middle_distal(i) = 1/360*(0.04+0.04)*vector(5);
    torque_middle_proximal(i) = 1/688*0.52*vector(6);
    torque_ring(i) = 1/360*(0.03+0.02+0.02)*vector(7);
    torque_pinky(i) = 1/360*(0.02+0.02+0.02)*vector(8);
    torque_spread(i) = 1/688*(0.06+0.06+0.03)*vector(9);
end
%% Salva veriabili Acquisite
save(file_dest,'ring_force_sens','pinky_force_sens','thumb_force_sens','middle_force_sens','mes_force','pwm_value','ref_force','ref_passivato','E_obs','master_index_distal','master_index_proximal',...
    'slave_index_distal','slave_index_proximal','torque_index_distal','torque_index_proximal','index_lin_pot','middle_lin_pot', ...
    'ring_lin_pot','pinky_lin_pot','thumb_lin_pot','pinky_force_ref','exo_mode','middle_force_ref','ring_force_ref','thumb_force_ref','packet_difference', ...
    'slave_thumb_flexion','slave_thumb_opposition','slave_middle_distal','slave_middle_proximal',...
    'slave_ring','slave_pinky','slave_spread','master_thumb_flexion','master_thumb_opposition', ...
    'master_middle_distal', 'master_middle_proximal', 'master_ring', 'master_pinky', 'master_spread',...
    'torque_thumb_flexion','torque_thumb_opposition','torque_middle_distal','torque_middle_proximal',...
    'torque_ring','torque_pinky','torque_spread','t_debug_sec','t_debug_nsec','t_c_t_sec','t_c_t_nsec',...
    't_c_f_sec','t_c_f_nsec');
clear all;