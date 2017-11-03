%load('ThumbDatasetRAL_EMG_FFWD_1.mat')ù
load('ThumbDatasetRAL_EMG_Transparency_1.mat')
%EMG
figure;
plot(data(36:37,:)');
grid on;
title('EMG');

figure;
plot(data(2:7,:)');
title('Optoforce 1 e 2');

figure;
plot(data(8,:)');
title('Pressione');

figure;
plot(data(15,:)');
title('Strain Gauge');