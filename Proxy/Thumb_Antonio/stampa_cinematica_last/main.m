%% Plotta La Cinematica del Pollice
load exo_points.mat
l = size(points,2);
for i=1:2:l
    
    current_points = points(:,i);

    print_kinematics(current_points);
    pause(1);
end
%%
clear all
load exo_points.mat
current_points = points(:,2);
close all;

print_kinematics(current_points);