%% Ipotizzo che la distanza lungo l'asse x tra giunto metacarpale e K sia nulla
% Utilizzo le conoscenze dell'angolo al primo giunto per trovare l'offset e
% il metacarpale
clear all;
global u;
global angle;
u(1)= 20.51;%0.70;
u(2)= 1.565;%;
angle = degtorad(40);

ObjectiveFunction = @directKinem;
nvars = 1%2;
LB = [3] %3];   % Lower bound
UB = [10] %10];  % Upper bound
options = gaoptimset;
options = gaoptimset(options, ...
                       'SelectionFcn', @selectionroulette, ... %@selectiontournament
                       'CrossoverFcn', @crossoversinglepoint, ... %@crossovertwopoint
                       'MutationFcn', @mutationadaptfeasible, ...%@mutationgaussian, ...               
                       'Generations', 600 ...%10 ... %300
                      );
[x,fval] = ga(ObjectiveFunction,nvars,[],[],[],[],LB,UB,[],[], options)