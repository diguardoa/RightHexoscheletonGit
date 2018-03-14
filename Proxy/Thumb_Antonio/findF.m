function [ F, F_1] = findF(T_F, T_F_1,q_A_curr,q_B_curr,q_C_curr)
syms q_A q_B q_C
A_temp = subs(T_F, {q_A, q_B, q_C}, {q_A_curr,q_B_curr,q_C_curr});
F = eval(A_temp*[ 0, 0, 0, 1]');
A_temp = subs(T_F_1, {q_A, q_B, q_C}, {q_A_curr,q_B_curr,q_C_curr});
F_1 = eval(A_temp*[ 0, 0, 0, 1]');
end

