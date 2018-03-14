%% Solve MCP_AA Angle
% Before:
syms xG1 yG1 zG1 xG2 yG2 zG2 xMCP yMCP zMCP xCMC yCMC zCMC MCP_FE l_meta l_dist CMC_AA CMC_FE
syms xPIP yPIP zPIP xK yK zK PIP_FE MCP_AA t
%% Risolvi con formule parametriche

% scrivo distanza K_PIP
K_PIP =  (xPIP - xK)^2 + (yPIP - yK)^2 + (zPIP - zK)^2 ;
% scrivo distanza PIP_MCP
PIP_MCP = (xPIP - xMCP)^2 + (yPIP - yMCP)^2 + (zPIP - zMCP)^2;
% scrivo distanza K_MCP
K_MCP = (xK - xMCP)^2 + (yK - yMCP)^2 + (zK - zMCP)^2 ;
% scrivo distanza K_G2
K_G2 = (xK - xG2)^2 + (yK - yG2)^2 + (zK - zG2)^2 ;
% scrivo distanza PIP_CMC
PIP_CMC = (xPIP - xCMC)^2 + (yPIP - yCMC)^2 + (zPIP - zCMC)^2;
% 1. PIP appartiene al piano passante per G,G1,MCP
xPIP = (xCMC - l_meta*cos(CMC_AA)*cos(CMC_FE) - l_dist*cos(MCP_FE)*(((1-t^2)/(1+t^2))*(cos(CMC_AA)*cos(CMC_FE) - (4967757600021511*sin(CMC_AA)*sin(CMC_FE))/81129638414606681695789005144064) - (2*t/(1+t^2))*(sin(CMC_AA) + (4967757600021511*cos(CMC_AA)*sin(CMC_FE))/81129638414606681695789005144064 + (24678615572571482867467662723121*cos(CMC_FE)*sin(CMC_AA))/6582018229284824168619876730229402019930943462534319453394436096)) + (4967757600021511*l_meta*sin(CMC_AA)*sin(CMC_FE))/81129638414606681695789005144064 + l_dist*sin(MCP_FE)*((4967757600021511*((1-t^2)/(1+t^2))*(sin(CMC_AA) + (4967757600021511*cos(CMC_AA)*sin(CMC_FE))/81129638414606681695789005144064 + (24678615572571482867467662723121*cos(CMC_FE)*sin(CMC_AA))/6582018229284824168619876730229402019930943462534319453394436096))/81129638414606681695789005144064 - (4967757600021511*sin(CMC_AA))/81129638414606681695789005144064 + (4967757600021511*(2*t/(1+t^2))*(cos(CMC_AA)*cos(CMC_FE) - (4967757600021511*sin(CMC_AA)*sin(CMC_FE))/81129638414606681695789005144064))/81129638414606681695789005144064 + cos(CMC_AA)*sin(CMC_FE) + (4967757600021511*cos(CMC_FE)*sin(CMC_AA))/81129638414606681695789005144064));
yPIP = (yCMC - l_dist*cos(MCP_FE)*(((1-t^2)/(1+t^2))*((4967757600021511*cos(CMC_AA)*sin(CMC_FE))/81129638414606681695789005144064 + cos(CMC_FE)*sin(CMC_AA)) + (2*t/(1+t^2))*(cos(CMC_AA) + (24678615572571482867467662723121*cos(CMC_AA)*cos(CMC_FE))/6582018229284824168619876730229402019930943462534319453394436096 - (4967757600021511*sin(CMC_AA)*sin(CMC_FE))/81129638414606681695789005144064)) - (4967757600021511*l_meta*cos(CMC_AA)*sin(CMC_FE))/81129638414606681695789005144064 - l_meta*cos(CMC_FE)*sin(CMC_AA) + l_dist*sin(MCP_FE)*((4967757600021511*cos(CMC_AA))/81129638414606681695789005144064 - (4967757600021511*((1-t^2)/(1+t^2))*(cos(CMC_AA) + (24678615572571482867467662723121*cos(CMC_AA)*cos(CMC_FE))/6582018229284824168619876730229402019930943462534319453394436096 - (4967757600021511*sin(CMC_AA)*sin(CMC_FE))/81129638414606681695789005144064))/81129638414606681695789005144064 + (4967757600021511*(2*t/(1+t^2))*((4967757600021511*cos(CMC_AA)*sin(CMC_FE))/81129638414606681695789005144064 + cos(CMC_FE)*sin(CMC_AA)))/81129638414606681695789005144064 - (4967757600021511*cos(CMC_AA)*cos(CMC_FE))/81129638414606681695789005144064 + sin(CMC_AA)*sin(CMC_FE)));
zPIP = (zCMC - l_meta*sin(CMC_FE) - l_dist*cos(MCP_FE)*(((1-t^2)/(1+t^2))*sin(CMC_FE) + (2*t/(1+t^2))*((4967757600021511*cos(CMC_FE))/81129638414606681695789005144064 - 4967757600021511/81129638414606681695789005144064)) - l_dist*sin(MCP_FE)*(cos(CMC_FE) - (4967757600021511*sin(CMC_FE)*(2*t/(1+t^2)))/81129638414606681695789005144064 + (4967757600021511*((1-t^2)/(1+t^2))*((4967757600021511*cos(CMC_FE))/81129638414606681695789005144064 - 4967757600021511/81129638414606681695789005144064))/81129638414606681695789005144064 + 24678615572571482867467662723121/6582018229284824168619876730229402019930943462534319453394436096));
 
matr1 = [xPIP - xG1, yPIP - yG1, zPIP - zG1; ...
        xG2 - xG1, yG2 - yG1, zG2 - zG1; ...
        xMCP - xG1, yMCP - yG1, zMCP - zG1];

eq1 = det(matr1);

%eq_MCP_AA = [eq1;eq9;eq10;eq11] == zeros(4,1);
[t_s] = solve(eq1==0,[t])%,'random',true)%,[0,0,0,0,0,0,0,0]);

matlabFunction(t_s,'file','findt_fun')
