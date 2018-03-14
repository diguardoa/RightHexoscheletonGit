%% Analisys of the PINKY FINGER Kinematics
clear all; close all;
%global angle_to_reach
global angle_to_reach;
global falange;
global semispessore;
global distanza;

ObjectiveFunction = @fitnessFunction;
nvars = 2;    % Number of variables
LB = [0 degtorad(60)];   % Lower bound
UB = [60 degtorad(180)];  % Upper bound
options = gaoptimset;
options = gaoptimset(options, ...
                       'SelectionFcn', @selectionroulette, ... %@selectiontournament
                       'CrossoverFcn', @crossoversinglepoint, ... %@crossovertwopoint
                       'MutationFcn', @mutationadaptfeasible, ...%@mutationgaussian, ...               
                       'Generations', 200 ...%10 ... %300
                      );

j = 0;
i = 0;
for falange=30:5:60 
    j = j + 1;
    m = 0;
    for semispessore =2:2:12 
        m = m+1;
        l = 0;
        for distanza = 3:2:11
            l = l+1;
            k = 0;
            for angle_to_reach=0:0.02:60*pi/180
                k = k+1

                [x,fval] = ga(ObjectiveFunction,nvars,[],[],[],[],LB,UB,[],[], options)
                %plotFingerKinematic(param,y,u)
                res{j,m,l}(k,1) = angle_to_reach;
                res{j,m,l}(k,2) = x(1);
                res{j,m,l}(k,3) = x(2);
                res{j,m,l}(k,4) = fval;
                
                if (fval < 0.005)
                    i = i+1;
                    dataset(i,1) = falange;
                    dataset(i,2) = semispessore;
                    dataset(i,3) = distanza;
                    dataset(i,4) = x(1);
                    t(i) = angle_to_reach;
                end
            end


        end
    end

end
%%
j = 4;
m = 2;
l = 3;
            figure;
            hold on;
            subplot(2,2,1);
            plot(res{j,m,l}(:,1), res{j,m,l}(:,2));
            subplot(2,2,2);
            plot(res{j,m,l}(:,1), res{j,m,l}(:,3));
            subplot(2,2,3);
            plot(res{j,m,l}(:,1), res{j,m,l}(:,4));

%%
acquisition.data = res;
acquisition.description{1} = 'lunghezza falange 45:5:65'
acquisition.description{2} = 'semispessore 4:2:13'
acquisition.description{3} = 'distanza 3:2:11'
acquisition.description{4} = 'angolo da raggiungere 0:0.05:pi/2'
acquisition.description{5} = 'valori salvati: 1 angolo 2 lx 3 qB 4 J'
acquisition.constants = 'spessore metacarpo: 9, distanza K-Lx: 3'


