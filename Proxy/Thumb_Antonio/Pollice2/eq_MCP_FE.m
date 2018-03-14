%% Scrivo equazione MCP_FE in funzione di tutto il resto 
% 8° equazione nel sistema da risolvere
clear all;
load transformations.mat

% Genero funzione
syms MCP_FE xPIP yPIP zPIP
eqPIP = [xPIP; yPIP; zPIP] - pos_PIP(1:3)
%[MCP_FE_s,MCP_AA_s,param, cond] = solve(eq([1 2]), [MCP_FE, MCP_AA], 'ReturnConditions', true)
%%
% matlabFunction(MCP_FE_s,'file','findMCP_FEz')
save('eqPIP.mat','eqPIP');