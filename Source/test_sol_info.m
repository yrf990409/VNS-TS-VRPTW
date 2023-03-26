function flag = test_sol_info(sol_info, data, param_pen)
%TEST_SOL_INFO 此处显示有关此函数的摘要
%   此处显示详细说明


[a_r_time, a_c_time, z_r_time, z_c_time, tw_forward, tw_backward] = calculate_time(sol_info.routes, data, 1:size(sol_info.routes,1));

if any(any(abs(sol_info.a_r_time - a_r_time) > 10^-10))
    error('a_r_time')
elseif any(any(abs(sol_info.a_c_time - a_c_time) > 10^-10))
    error('a_c_time')
elseif any(any(abs(sol_info.z_r_time - z_r_time) > 10^-10))
    error('z_r_time')
elseif any(any(abs(sol_info.z_c_time - z_c_time) > 10^-10))
    error('z_c_time')
elseif any(any(abs(sol_info.tw_forward - tw_forward) > 10^-10))
    error('tw_forward')
elseif any(any(abs(sol_info.tw_backward - tw_backward) > 10^-10))
    error('tw_backward')
end

general_cost = calculate_cost(sol_info, param_pen, data);

if any(any(abs(general_cost - sol_info.cost) > 10^-8))
    flag = false;
else
    flag = true;
end

