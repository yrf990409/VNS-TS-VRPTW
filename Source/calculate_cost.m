function general_cost = calculate_cost(sol_info, param_pen, data)
%CALCULATE_COST 计算广义成本
% general_cost [距离, 容量, 时间, 多样性(0)]

% 初始化
employ_num = size(sol_info.routes, 1);
general_cost = zeros(employ_num, 3);

for i = 1:employ_num
    % 计算距离
    route = sol_info.routes(i,:);
    route([false, route(2:end-1)==0 ,false]) = [];
    dist_sub = [route(1:end-1);route(2:end)] + 1;
    dist_ind = sub2ind(size(data.dist), dist_sub(1,:), dist_sub(2,:));
    general_cost(i,1) = sum(data.dist(dist_ind));  % 每辆车的距离 cost(1)

    % 计算容量惩罚
    general_cost(i,2) = param_pen.alpha_0 * max([sum(data.dmd(route+1))-data.cap, 0]);

    % 计算时间惩罚
    general_cost(i,3) = param_pen.beta_0 * max(sol_info.tw_forward(i,:));
end
end
