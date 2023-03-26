function [best_neighbor, best_total_cost, best_del, best_ind] = ts_two_optimization(sol_info, data, param_pen, tabu_list, frequency, div)
% 路线之间2-OPT*交换
% 初始化
new_cost = zeros(2,3); % 记录变化之后的成本
cus_num = length(data.dmd)-1; % 顾客数量
v_num = data.vnum; % 车辆数 
sum_ori_cost = sum(sol_info.cost,'all'); % 原始解sol_inf的成本

pool_routes = int16(zeros(param_pen.pool_size, size(sol_info.routes,1), size(sol_info.routes,2))); % 邻域池子
pool_del = int16(zeros(param_pen.pool_size, 2, 2)); % 每个邻域解对应删除的弧
pool_ind = zeros(param_pen.pool_size, 2); % 每个邻域解对应变动索引
pool_deter = false(param_pen.pool_size, 1); % 每个邻域解是否退化
pool_gen_cost = inf*ones(param_pen.pool_size, 1); % 每个邻域解的广义成本
pool_dis = zeros(param_pen.pool_size, 1); % 每个邻域解的总距离
pool_payload = zeros(param_pen.pool_size, 2); % 每个邻域解变动的装载量
max_pool_ind = 1;  % 初始池子中最大成本对应的索引
max_pool_cost = inf; % 初始池子中最大成本

% 交换
for i = 1:data.vnum
    % 路线信息
    r_1 = sol_info.routes(i,:); % 第一个路径
    a_r_r_1 = sol_info.a_r_time(i,:); % 实际最晚到达
    a_c_r_1 = sol_info.a_c_time(i,:); % 修正最晚到达
    z_c_r_1 = sol_info.z_c_time(i,:); % 修正最早到达
    tw_f_r_1 = sol_info.tw_forward(i,:); % 前向惩罚时间
    tw_b_r_1 = sol_info.tw_backward(i,:); % 反向惩罚时间

    % 消除多余的0
    r_1([false, r_1(2:end-1)==0 ,false]) = [];
    temp = a_r_r_1(2:end)==0; 
    if all(temp==1) % 全0
        time_del_ind = [false,false,temp(2:end)];
    else
        time_del_ind = [false,temp];
    end
    a_c_r_1(time_del_ind) = [];
    z_c_r_1(time_del_ind) = [];
    tw_f_r_1(time_del_ind) = [];
    tw_b_r_1(time_del_ind) = [];

    % 原来的成本
    old_cost_1 = sol_info.cost(i,:);
    
    % 计算第一个路径的累加前向反向距离
    cum_dist_f_1 = zeros(size(r_1));
    for j = 2:length(r_1)
        cum_dist_f_1(j) = cum_dist_f_1(j-1) + data.dist(r_1(j-1)+1, r_1(j)+1);
    end
    cum_dist_b_1 = zeros(size(r_1));
    cum_dist_b_1(1) =  cum_dist_f_1(end);
    for j = 2:length(r_1)
        cum_dist_b_1(j) = cum_dist_b_1(j-1) - data.dist(r_1(j-1)+1, r_1(j)+1);
    end
    
    for j = i+1:data.vnum
        % 路线信息
        r_2 = sol_info.routes(j,:);
        a_r_r_2 = sol_info.a_r_time(j,:);
        a_c_r_2 = sol_info.a_c_time(j,:);
        z_c_r_2 = sol_info.z_c_time(j,:);
        tw_f_r_2 = sol_info.tw_forward(j,:);
        tw_b_r_2 = sol_info.tw_backward(j,:);

        % 消除多余的0
        r_2([false, r_2(2:end-1)==0 ,false]) = [];
        temp = a_r_r_2(2:end)==0; % 判断是否全是0
        if all(temp==1) % 全0
            time_del_ind = [false,false,temp(2:end)];
        else
            time_del_ind = [false,temp];
        end
        a_c_r_2(time_del_ind) = [];
        z_c_r_2(time_del_ind) = [];
        tw_f_r_2(time_del_ind) = [];
        tw_b_r_2(time_del_ind) = [];

        % 原来的成本
        old_cost_2 = sol_info.cost(j,:); 
        % 旧的总成本
        old_sum_cost = sum(old_cost_2 + old_cost_1,'all');
        
        % 计算第二个路径的累加前向反向距离
        cum_dist_f_2 = zeros(size(r_2));
        for m = 2:length(r_2)
            cum_dist_f_2(m) = cum_dist_f_2(m-1) + data.dist(r_2(m-1)+1, r_2(m)+1);
        end
        cum_dist_b_2 = zeros(size(r_2));
        cum_dist_b_2(1) = cum_dist_f_2(end);
        for m = 2:length(r_2)
            cum_dist_b_2(m) = cum_dist_b_2(m-1) - data.dist(r_2(m-1)+1, r_2(m)+1);
        end
        
        load_1_l = 0;
        for m = 1:length(r_1)-1
            % 第一条路径
            r_1_l = r_1(1:m); % left
            r_1_r = r_1(m+1:end); % right
            
            load_1_l = load_1_l + data.dmd(r_1_l(m)+1);
            load_1_r = sol_info.payload(i) - load_1_l;
            
            load_2_l = 0;
            for n = 1:length(r_2)-1

                load_2_l = load_2_l + data.dmd(r_2(n)+1);
                load_2_r = sol_info.payload(j) - load_2_l;

                if m == length(r_1)-1 && n == length(r_2)-1 % 只换了仓库
                    continue
                end
                if m == 1 && n == 1 % 只换了仓库
                    continue
                end
                if m == length(r_1)-2 && n == length(r_2)-2 % 只换最后一个客户
                    continue
                end
                if m == 2 && n == 2 % 只换了最后一个客户(interexchange已经换过)
                    continue
                end

                r_2_l = r_2(1:n); % left
                r_2_r = r_2(n+1:end); % right


                % 弧关系
                add_arc = [r_1_l(end), r_2_r(1);
                           r_2_l(end), r_1_r(1);]; % 增加弧
                del_arc = [r_1_l(end), r_1_r(1);
                           r_2_l(end), r_2_r(1);]; % 删除弧

                % 可行性判断
                if myismember(add_arc, tabu_list)
                    continue % 禁忌
                end
                if data.arc(add_arc(1,1)+1, add_arc(1,2)+1)==0 || ...
                    data.arc(add_arc(2,1)+1, add_arc(2,2)+1)==0
                    continue  % 不可行弧
                end

                % 生成新路径
                new_r_1 = [r_1_l, r_2_r];
                new_r_2 = [r_2_l, r_1_r];

                % 计算成本
                % 1. 距离
                new_cost(1,1) = cum_dist_f_1(m) + cum_dist_b_2(n+1) + data.dist(r_1_l(end)+1, r_2_r(1)+1);
                new_cost(2,1) = cum_dist_f_2(n) + cum_dist_b_1(m+1) + data.dist(r_2_l(end)+1, r_1_r(1)+1);
                % 2. 容量
                payload_1 = load_1_l+load_2_r;
                payload_2 = load_2_l+load_1_r;
                new_cost(1,2) = max([(payload_1-data.cap), 0]) * param_pen.alpha_0;
                new_cost(2,2) = max([(payload_2-data.cap), 0]) * param_pen.alpha_0;
                % 3. 时间
                pun_time = a_c_r_1(m) + data.st(r_1_l(end)+1) + data.dist(r_1_l(end)+1,r_2_r(1)+1) - z_c_r_2(n+1);
                pun_tw_r_1 = tw_f_r_1(m) + tw_b_r_2(n+1) + max([0, pun_time]);
                pun_time = a_c_r_2(n) + data.st(r_2_l(end)+1) + data.dist(r_2_l(end)+1,r_1_r(1)+1) - z_c_r_1(m+1);
                pun_tw_r_2 = tw_f_r_2(n) + tw_b_r_1(m+1) + max([0, pun_time]);
                new_cost(1,3) = pun_tw_r_1 * param_pen.beta_0;
                new_cost(2,3) = pun_tw_r_2 * param_pen.beta_0;
                
                % 计算减量成本 & 标记退化
                temp_decrz = old_sum_cost - sum(new_cost,'all');
                if temp_decrz < 0
                    deteriorate = true; % 找到的邻域还不如原来的
                else
                    deteriorate = false;
                end
                
                % 计算新的路径
                new_rs = sol_info.routes; % new_routes
                new_rs(i,:) = 0;
                new_rs(j,:) = 0;
                new_rs(i,1:length(new_r_1)) = new_r_1;
                new_rs(j,1:length(new_r_2)) = new_r_2;

                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                % 放入池子中
                % 先找到池子中成本最大的解对应的索引
                % 如果 当前解的成本 比 池子中最大成本的解 还大 那直接不要了
                % 如果小于 则接受 把最大成本的解替换掉
                temp_gen_cost = sum_ori_cost - old_sum_cost + sum(new_cost,'all');
                if temp_gen_cost < max_pool_cost
                    pool_routes(max_pool_ind,:,:) = new_rs; % 加入邻域池子
                    pool_del(max_pool_ind, :, :) = del_arc; % 每个邻域解对应删除的弧
                    pool_ind(max_pool_ind, :) = double([i,j]); % 每个邻域解对应变动索引
                    pool_deter(max_pool_ind) = deteriorate;
                    pool_gen_cost(max_pool_ind) = temp_gen_cost;
                    pool_dis(max_pool_ind) = sum(sol_info.cost(:,1)) - old_cost_1(1) - old_cost_2(1) + sum(new_cost(1:2,1));
                    pool_payload(max_pool_ind,:) = [payload_1, payload_2];

                    % 更新最大索引
                    [max_pool_cost, max_pool_ind] = max(pool_gen_cost);
                end

%                 % 退化则计算多样性成本
%                 if deteriorate
%                     % 更新频率
%                     temp_frequency = update_frequency(frequency, new_rs);
% 
%                     % 计算距离
%                     total_distance = sum(sol_info.cost(:,1)) - old_cost_1(1) - old_cost_2(1) + sum(new_cost(1:2,1));
% 
%                     % 更新frequency
%                     cost_div = calculate_diversity(new_rs, div, total_distance, cus_num, v_num, temp_frequency);
%                 else
%                     cost_div = 0;
%                 end
%                 
%                  % 计算 广义 + 多样性成本
%                 temp_gen_div_cost = sum_ori_cost + cost_div - old_sum_cost + sum(new_cost,'all');
%             
%                 % 更新
%                 if temp_gen_div_cost <= best_total_cost
%                     best_total_cost = temp_gen_div_cost; % 更新最佳成本
% 
%                     best_neighbor.routes = new_rs; % 路径
%                     best_neighbor.cost = sol_info.cost;
% 
%                     change_route_ind = double([i,j]); % 变动的路径
%                     
%                     best_neighbor.cost(change_route_ind,:) = new_cost; % 最佳成本
% 
%                     best_neighbor.payload = sol_info.payload;
%                     best_neighbor.payload(change_route_ind) = [payload_1, payload_2];
%                     
%                     best_del = del_arc; % 记录删除的弧
%                 end
            end
        end
    end
end
%% 从池子中计算多样性成本，返回相应的参数
% 先清除没有填进去的位置
empty_flag = pool_gen_cost == inf;

% 计算广义成本+多样性成本
pool_real_size = length(pool_gen_cost);
pool_div_gen_cost = zeros(pool_real_size,1);
for i = 1:param_pen.pool_size
    if ~empty_flag(i)
        if pool_deter(i)
            % 退化解记录多样性成本
            new_rs =pool_routes(i,:,:);
            temp_frequency = update_frequency(frequency, new_rs); % 更新频率
            pool_div_gen_cost(i) =  ...
                pool_gen_cost(i) + calculate_diversity(new_rs, div, pool_dis(i), cus_num, v_num, temp_frequency);
        else
            % 非退化直接记录成本
            pool_div_gen_cost(i) = pool_gen_cost(i);
        end
    else
        pool_div_gen_cost(i:end) = inf;
        break
    end
end

% 返回成本最小的解
[best_total_cost, ind] = min(pool_div_gen_cost);
best_neighbor = sol_info;
best_neighbor.routes = squeeze(pool_routes(ind, : ,:));
best_del = squeeze(pool_del(ind, : ,:));
best_ind = pool_ind(ind,:);
best_neighbor.payload(best_ind) = pool_payload(ind,:);

end


