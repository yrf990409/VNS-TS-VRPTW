function [sol_info, data] = deal_initial_sol(sol_info, data)
% 删除sol_info中的空路径

sum_cus_ind = sum(sol_info.routes,2);
del_ind = sum_cus_ind==0; % 删除的路径索引

sol_info.routes(del_ind,:) = [];
sol_info.cost(del_ind,:) = [];
sol_info.payload(del_ind,:) = [];
sol_info.a_r_time(del_ind,:) = [];
sol_info.a_c_time(del_ind,:) = [];
sol_info.z_r_time(del_ind,:) = [];
sol_info.z_c_time(del_ind,:) = [];
sol_info.tw_forward(del_ind,:) = [];
sol_info.tw_backward(del_ind,:) = [];

data.vnum = data.vnum - sum(sum(del_ind));

end

