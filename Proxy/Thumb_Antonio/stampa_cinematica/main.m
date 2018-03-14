%% Plotta La Cinematica del Pollice
load exo_points.mat
l = size(points,2);
for i=60:10:l
    
    current_points = points(:,i);

    print_kinematics(current_points,25,30,50);
    pause(1);
end
%%
clear all
load exo_points.mat
current_points = points(:,190);
close all;

print_kinematics(current_points,25,30,50);