function [best_sol_info, new_param_pen, new_tabu_list] = intensification(sol_info, data, param_pen, param_ts, tabu_list)
% 禁忌搜索强化扰动后的解

% 初始化
cus_num = length(data.dmd); % 客户的数目
% sol_info.cost = calculate_cost(sol_info, param_pen, data);
employed_num = size(sol_info.routes,1); % 使用的车辆数

% 先计算sol_info的广义成本

best_sol_info = sol_info;   % 记录搜索到的最佳解

% 初始化频率
frequency = zeros(employed_num, cus_num);
frequency = update_frequency(frequency, sol_info.routes);

% 进入禁忌搜索迭代
count_time = 0;
count_cap = 0;
for i = 1:param_ts.eta_tabu
    % 生成最佳的邻域
    % 随机禁忌长度
    random_tabu_len = param_ts.theta_min + ceil(rand*(param_ts.theta_max-param_ts.theta_min));
    [best_neighbor, best_del, change_route_ind] = ...
        generate_ts_neighbor(sol_info, data, param_pen, tabu_list(1:random_tabu_len,:), frequency, param_ts.lambda_div);
    
    % 更新这个解的时间相关信息
    [best_neighbor.a_r_time(change_route_ind,:), ...
     best_neighbor.a_c_time(change_route_ind,:), ...
     best_neighbor.z_r_time(change_route_ind,:), ...
     best_neighbor.z_c_time(change_route_ind,:), ...
     best_neighbor.tw_forward(change_route_ind,:), ...
     best_neighbor.tw_backward(change_route_ind,:)] = ...
     calculate_time(best_neighbor.routes, data, change_route_ind);


    % 更新惩罚因子
    flags = jdg_feasible(sol_info, data);
    if flags(1)
        count_time = count_time - 1; % 可行则减少
    else
        count_time = count_time + 1; % 不可行则增加
    end
    if flags(2)
        count_cap = count_cap - 1;
    else
        count_cap = count_cap + 1;
    end
    
    best_sol_info.cost(:,3) = best_sol_info.cost(:,3) / param_pen.beta_0;
    if count_time > param_pen.eta_pen
        param_pen.beta_0 = min([param_pen.beta_0 * param_pen.delta, param_pen.beta_max]);
        count_time = 0;
    elseif count_time < -param_pen.eta_pen
        param_pen.beta_0 = max([param_pen.beta_0 / param_pen.delta, param_pen.beta_min]);
        count_time = 0;
    end
    best_sol_info.cost(:,3) = best_sol_info.cost(:,3) * param_pen.beta_0;

    best_sol_info.cost(:,2) = best_sol_info.cost(:,2) / param_pen.alpha_0;
    if count_cap > param_pen.eta_pen
        param_pen.alpha_0 = min([param_pen.alpha_0 * param_pen.delta, param_pen.alpha_max]);
        count_cap = 0;
    elseif count_cap < -param_pen.eta_pen
        param_pen.alpha_0 = max([param_pen.alpha_0 / param_pen.delta, param_pen.alpha_min]);
        count_cap = 0;
    end
    best_sol_info.cost(:,2) = best_sol_info.cost(:,2) * param_pen.alpha_0;

    % 更新这个解的成本
    best_neighbor.cost = calculate_cost(best_neighbor, param_pen, data);
    
    if sum(best_neighbor.cost,'all') <= sum(best_sol_info.cost,'all')
        % 得到了更小成本的解
        best_sol_info = best_neighbor;
    end

    % 更新频率
    sol_info = best_neighbor;
    frequency = update_frequency(frequency, best_neighbor.routes);
    
    % 更新禁忌表
    temp_tabu = [best_del;tabu_list];
    tabu_list = temp_tabu(1:param_ts.theta_max,1:2);

end

new_param_pen = param_pen;  % 记录新参数
new_tabu_list = tabu_list;  % 禁忌列表


% % payload测试
% employ_num = size(sol_info.routes, 1);
% temp = zeros(employ_num,1);
% for mm = 1:employ_num
%     % 计算容量惩罚
%     route = best_sol_info.routes(mm,:);
%     route([false, route(2:end-1)==0 ,false]) = [];
%     temp(mm) = sum(data.dmd(route+1));
% end
% disp('inten')
% best_sol_info.payload - temp
% if any(abs(best_sol_info.payload - temp) > 0)
%     warning('?')
% end

end