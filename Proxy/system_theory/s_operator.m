%% Discrete time stuff
dt = 0.001;
close all
step(A)
hold on;
k = 1;
for i = 0:dt:4
    k = 1/(dt+1)*k;
    plot(i,1-k,'*');
end