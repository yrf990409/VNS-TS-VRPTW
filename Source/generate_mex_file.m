clc
clear

load('intensification_data.mat')
param_ts.eta_tabu = 5;
[best_sol_info, new_param_pen, new_tabu_list] = intensification(sol_info, data, param_pen, param_ts, tabu_list);