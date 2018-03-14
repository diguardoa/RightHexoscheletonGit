%% Generate neural network
clear all;
load dataset_2.mat

% dataset(i,1) = falange;
% dataset(i,2) = semispessore;
% dataset(i,3) = distanza;
% dataset(i,4) = x(1);
% t(i) = angle_to_reach;


%% Train
x = dataset';
t = t;
%[x,t] = simplefit_dataset;

% La rete neurale ha solo un livello nascosto con 10 neuroni
net = feedforwardnet(10);
net = train(net,x,t)

%%
gensim(net)