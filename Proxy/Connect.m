%% Set Low Pass Filter (1st order)
cutFreq = 0.1; %Hz
sampleTime = 0.01;
filt = tf(1,[cutFreq 1]);
filt = c2d(filt,sampleTime);

%% Connect to ROS

% % Diego PC
% setenv('ROS_MASTER_URI','http://lou:11311')
% setenv('ROS_IP','10.100.39.22')
% rosinit
% 
% % Centauro Config
% setenv('ROS_MASTER_URI','http://10.24.4.100:11311');%'http://lou:11311')
% setenv('ROS_IP','10.24.4.60');%'10.100.39.22')
% rosinit

% Virtual Machine
% to connect 
setenv('ROS_MASTER_URI','http://192.168.56.102:11311');
setenv('ROS_IP','192.168.56.1');%'10.100.39.22');
rosinit

%% First open the model, then
robotics.ros.createSimulinkBus(gcs)
