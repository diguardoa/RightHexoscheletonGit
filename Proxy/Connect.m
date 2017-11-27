%% Impostazioni di connessione. Per modificare /etc/network/interfaces
% aggiungi indirizzi in /etc/hosts
% Mano Destra (esoscheletro) User: root
% Ethernet: 10.100.39.24
% Usb: 192.168.7.2

% Mano Sinistra (grilletto) User: ubuntu    PWD: temppwd
% Ethernet: 10.100.39.23
% USB: 192.168.7.2
%% Set Low Pass Filter (1st order fislter)
cutFreq = 0.1; %Hz
sampleTime = 0.01;
filt = tf(1,[cutFreq 1]);
filt = c2d(filt,sampleTime);

ampliFactor = 1.60;
ampliFactorMiddle = 2.00;
ampliFactorDistal = 1;

% Set Hand Address
RightHandAddress = '10.24.4.17'%'10.100.39.24';
LeftHandAddress = '10.24.4.15'%'10.100.39.23'
Verosim = '10.24.4.215'
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
% setenv('ROS_MASTER_URI','http://192.168.3.80:11311');
% setenv('ROS_IP','192.168.3.92');%'10.100.39.22');
% rosinit

%% Left Hand
%setenv('ROS_MASTER_URI','http://192.168.7.2:11311');
%setenv('ROS_IP','192.168.7.1');%'10.100.39.22');
%rosinit

% setenv('ROS_MASTER_URI','http://192.168.56.102:11311');
% setenv('ROS_IP','192.168.56.1');%'10.100.39.22');
% rosinit
% setenv('ROS_MASTER_URI','http://antonio-MacBookPro:11311');
% setenv('ROS_IP','10.24.4.16');%'10.100.39.22');
% rosinit

setenv('ROS_MASTER_URI','http://10.24.4.100:11311');
setenv('ROS_IP','10.24.4.215');%'10.100.39.22');
rosinit
%% First open the model, then
robotics.ros.createSimulinkBus(gcs)
