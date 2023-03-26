function [best_neighbor, best_total_cost, best_del, best_ind] = ts_intro_exchanging(sol_info, data, param_pen, tabu_list, frequency, div)
% 线路内部两个客户位置交换
% 将每个线路中每个客户的位置重新分配
% 与交换位置不同，重新分配并不改变其他客户的顺序
% 进行三个循环的嵌套，分别控制选择的路径，路径中的客户，重新插入的位置

%% 初始化申请内存
new_cost = zeros(1,3); % 记录变化之后的成本
cus_num = length(data.dmd)-1; % 顾客数量
v_num = data.vnum; % 车辆数
sum_ori_cost = sum(sol_info.cost,'all');  % 原始解sol_inf的成本

pool_routes = int16(zeros(param_pen.pool_size, size(sol_info.routes,1), size(sol_info.routes,2))); % 邻域池子
pool_del = int16(zeros(param_pen.pool_size, 4, 2)); % 每个邻域解对应删除的弧
pool_ind = zeros(param_pen.pool_size, 1); % 每个邻域解对应变动索引
pool_deter = false(param_pen.pool_size, 1); % 每个邻域解是否退化
pool_gen_cost = inf*ones(param_pen.pool_size, 1); % 每个邻域解的广义成本
pool_dis = zeros(param_pen.pool_size, 1); % 每个邻域解的总距离
max_pool_ind = 1;  % 初始池子中最大成本对应的索引
max_pool_cost = inf; % 初始池子中最大成本

%% 循环换位置并记录最优的前nb_length个邻域
for j = 1:data.vnum
    % 获取一辆车的路径 修正最晚到达时间 惩罚时间 成本
    % 路径
    old_route = sol_info.routes(j,:);
    del_ind_route = [false,old_route(2:end-1)==0,false];
    old_route(del_ind_route) = []; % 去掉不必要的0

    % 到达时间
    old_arrtime = sol_info.a_c_time(j,:); % 获取路径的到达时间
    if all(old_route==0)
        del_ind_time = [false,false,old_arrtime(3:end)==0];
    else
        del_ind_time = [false,old_arrtime(2:end)==0];
    end
    old_arrtime(del_ind_time) = []; % 去掉不必要的0

    % 惩罚时间
    old_puntime = sol_info.a_r_time(j,:); % 计算惩罚时间
    old_puntime(del_ind_time) = []; % 去掉不必要的0
    old_puntime = old_puntime - data.tw(old_route+1,2)'; % 实际到达时间减去右时间窗
    old_puntime(old_puntime<0) = 0;

    % 成本
    old_cost = sol_info.cost(j,:); 
    sum_old_cost = sum(old_cost);

    % 装载量
    old_payload = sol_info.payload(j); % 获取装载量

    % 封装一下
    route_info.old_arritime = old_arrtime;
    route_info.old_puntime = old_puntime;
    route_info.old_payload = old_payload;
    route_info.old_cost = old_cost;
    
    % 循环取出路径中的每个客户并重新安排至每个位置
    for m = 2:length(old_route)-1
        % route前后是0 因此索引2是第一个客户
        v_1 = old_route(m); 
        
        % 注意 n 只能在 m 后面: 1/3交换和3/1交换是等价的
        for n = m+1:length(old_route)-1
            % p 是重新分配后的索引
            v_2 = old_route(n); 
            
            % 弧关系
            if n-m == 1
                add_arc = [old_route(m-1), old_route(n);
                    old_route(n), old_route(m);
                    old_route(m), old_route(n+1);
                               0, 0]; % 增加的弧
                del_arc = [old_route(m-1), old_route(m);
                             old_route(m), old_route(m+1);
                             old_route(n), old_route(n+1);
                                        0, 0]; % 删除的弧
            else
                add_arc = [old_route(m-1), v_2;
                    v_2, old_route(m+1);
                    old_route(n-1), v_1;
                    v_1, old_route(n+1)]; % 增加的弧
                del_arc = [old_route(m-1), v_1;
                    v_1, old_route(m+1);
                    old_route(n-1), v_2;
                    v_2, old_route(n+1)]; % 删除的弧
            end
            
            if myismember(add_arc, tabu_list)
                continue % 禁忌
            end

            if data.arc(add_arc(1,1)+1, add_arc(1,2)+1)==0 || ...
                    data.arc(add_arc(2,1)+1, add_arc(2,2)+1)==0 || ...
                    data.arc(add_arc(3,1)+1, add_arc(3,2)+1)==0 || ...
                    data.arc(add_arc(4,1)+1, add_arc(4,2)+1)==0
                continue  % 不可行弧
            end

            % 生成新的路径
            % 把路径分成三份，第一份和第三份是不变动的，第二份是变动的
            partial_1 = old_route(1:m-1);
            partial_2 = old_route(m:n);
            partial_3 = old_route(n+1:end);
            s = partial_2(1); % start 
            e = partial_2(end); % end
            partial_2(1,[1,end]) = [e,s];
            new_route = [partial_1, partial_2, partial_3]; % 拼接成新路径
            
            % 计算新成本
            % 1.计算距离
            new_cost(1) = old_cost(1);
            new_cost(1) = new_cost(1) ...
            + data.dist(add_arc(1,1)+1, add_arc(1,2)+1) ...
            + data.dist(add_arc(2,1)+1, add_arc(2,2)+1) ...
            + data.dist(add_arc(3,1)+1, add_arc(3,2)+1) ...
            + data.dist(add_arc(4,1)+1, add_arc(4,2)+1) ...
            - data.dist(del_arc(1,1)+1, del_arc(1,2)+1) ...
            - data.dist(del_arc(2,1)+1, del_arc(2,2)+1) ...
            - data.dist(del_arc(3,1)+1, del_arc(3,2)+1) ...
            - data.dist(del_arc(4,1)+1, del_arc(4,2)+1);

            % 2. 惩罚容量
            new_cost(2) = old_cost(2);

            % 3. 时间惩罚
            new_arrtime = old_arrtime;
            new_puntime = old_puntime;
            for k = m:length(old_route)
                previous = new_route(k-1); % 前一个点
                current = new_route(k); % 当前点
                % 新的到达时间
                new_arrtime(k) = new_arrtime(k-1) + data.st(previous+1) + data.dist(previous+1,current+1);
                if new_arrtime(k) < data.tw(current+1,1) % 小于最早到达
                    new_arrtime(k) = data.tw(current+1,1);
                    new_puntime(k) = 0;
                elseif new_arrtime(k) > data.tw(current+1,2) % 大于最晚到达
                    new_puntime(k) = new_arrtime(k) - data.tw(current+1,2);
                    new_arrtime(k) = data.tw(current+1,2);
                else
                    new_puntime(k) = 0;
                end

                if k > n && new_arrtime(k)==old_arrtime(k)
                    break
                end
            end
            new_cost(3) = sum(new_puntime) * param_pen.beta_0;

            % 计算减量成本 & 标记退化
            temp_decrz = sum(old_cost(1:3)) - sum(new_cost(1:3));
            if temp_decrz < 0 
                deteriorate = true; % 找到的邻域还不如原来的
            else
                deteriorate = false;
            end

            % 计算新路径
            new_rs = sol_info.routes; % new_routes
            new_rs(j,:) = 0;
            new_rs(j,1:length(new_route)) = new_route;

            % 放入池子中
            % 先找到池子中成本最大的解对应的索引
            % 如果 当前解的成本 比 池子中最大成本的解 还大 那直接不要了
            % 如果小于 则接受 把最大成本的解替换掉
            temp_gen_cost = sum_ori_cost - sum_old_cost + sum(new_cost,'all');
            if temp_gen_cost < max_pool_cost
                pool_routes(max_pool_ind,:,:) = new_rs; % 加入邻域池子
                pool_del(max_pool_ind, :, :) = del_arc; % 每个邻域解对应删除的弧
                pool_ind(max_pool_ind, :) = double(j); % 每个邻域解对应变动索引
                pool_deter(max_pool_ind) = deteriorate;
                pool_gen_cost(max_pool_ind) = temp_gen_cost;
                pool_dis(max_pool_ind) = sum(sol_info.cost(:,1)) - old_cost(1) + new_cost(1);
                
                % 更新最大索引
                [max_pool_cost, max_pool_ind] = max(pool_gen_cost);
            end

%             % 计算多样性成本
%             if deteriorate
%                 % 更新频率
%                 temp_frequency = update_frequency(frequency, new_rs);
% 
%                 % 计算距离
%                 total_distance = sum(sol_info.cost(:,1)) - old_cost(1) + new_cost(1);
% 
%                 % 更新frequency
%                 cost_div = calculate_diversity(new_rs, div, total_distance, cus_num, v_num, temp_frequency);
%             else
%                 cost_div = 0;
%             end
% 
%             % 计算 广义 + 多样性成本
%             temp_gen_div_cost = sum_ori_cost + cost_div - sum_old_cost + sum(new_cost,'all');
% 
%             % 更新
%             if temp_gen_div_cost <= best_total_cost
%                 best_total_cost = temp_gen_div_cost; % 更新最佳成本
%                 best_neighbor.routes = new_rs; % 路径
%                 best_neighbor.cost = sol_info.cost;
%                 best_neighbor.cost(j,:) = new_cost; % 最佳成本
%                 change_route_ind = double(j); % 变动的路径
%                 best_del = del_arc; % 记录删除的弧
% 
%             end
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



end
