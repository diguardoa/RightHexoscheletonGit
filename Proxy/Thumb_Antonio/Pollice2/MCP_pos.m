%% Trova MCP pos

clear all;
load transformations.mat
syms MCP
MCP = pos_MCP;

matlabFunction(MCP,'file','findMCP_pos')
