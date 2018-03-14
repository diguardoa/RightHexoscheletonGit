function [J] = fitness_function(x)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
syms LLM
global curren_equation
temp = subs(curren_equation, LLM, x);
J = (temp-pi/4)^2;
end

