function [neighbor, arc_del, route_ind] = generate_ts_neighbor(sol_info, data, param_pen, tabu_list, frequency, div)
% 生成邻域解
% 采用五种方法，探索sol_info的全部邻域
% 每次得到一个邻域解，则将这个邻域解和已知最好的邻域进行对比
% 最终返回最佳的一个邻域，无论这个邻域是否比sol_info要好

% best_neighbor = struct();
% best_total_cost = inf;
% best_del = [];
% change_route_ind = [];

% 线路内部客户重新分配位置
num_methods = 5;
nb_cell = cell(num_methods,1);
del_cell = cell(num_methods,1);
ind_cell = cell(num_methods,1);
rec_cost = zeros(1,num_methods);

for i = 1:num_methods
    nb_cell{i} = sol_info;
    del_cell{i} = int16([]);
    ind_cell{i} = [];
end

parfor i = 1:num_methods % 5种方法
    % 在每个case下赋值，防止编译C不通过
    if i == 1
        
        % 线路内部的客户重新分配位置
        [best_neighbor, best_total_cost, best_del, change_route_ind] = ...
            ts_intro_relocating(sol_info, data, param_pen, tabu_list, frequency, div);
        nb_cell{i} = best_neighbor;
        del_cell{i} = best_del;
        ind_cell{i} = change_route_ind;
        rec_cost(i) = best_total_cost;
        
        
    elseif i == 2
        % 线路之间的客户重新分配位置
        
        [best_neighbor, best_total_cost, best_del, change_route_ind] = ...
            ts_inter_relocating(sol_info, data, param_pen, tabu_list, frequency, div);
        nb_cell{i} = best_neighbor;
        del_cell{i} = best_del;
        ind_cell{i} = change_route_ind;
        rec_cost(i) = best_total_cost;
        
    elseif i == 3
        % 线路内部交换客户位置
        
        [best_neighbor, best_total_cost, best_del, change_route_ind] = ...
            ts_intro_exchanging(sol_info, data, param_pen, tabu_list, frequency, div);
        nb_cell{i} = best_neighbor;
        del_cell{i} = best_del;
        ind_cell{i} = change_route_ind;
        rec_cost(i) = best_total_cost;
        
    elseif i == 4
        % 线路之间交换客户的位置
        
        [best_neighbor, best_total_cost, best_del, change_route_ind] = ...
            ts_inter_exchanging(sol_info, data, param_pen, tabu_list, frequency, div);
        nb_cell{i} = best_neighbor;
        del_cell{i} = best_del;
        ind_cell{i} = change_route_ind;
        rec_cost(i) = best_total_cost;
        
    elseif i == 5
        
        % 线路之间 2-opt*
        [best_neighbor, best_total_cost, best_del, change_route_ind] = ...
            ts_two_optimization(sol_info, data, param_pen, tabu_list, frequency, div);
        nb_cell{i} = best_neighbor;
        del_cell{i} = best_del;
        ind_cell{i} = change_route_ind;
        rec_cost(i) = best_total_cost;
        
    end
end

[~, min_ind] = min(rec_cost);

neighbor = nb_cell{min_ind};
arc_del = del_cell{min_ind};
route_ind = ind_cell{min_ind};


% % 测试
% employ_num = size(sol_info.routes, 1);
% temp = zeros(employ_num,1);
% for mm = 1:employ_num
%     % 计算容量惩罚
%     route = neighbor.routes(mm,:);
%     route([false, route(2:end-1)==0 ,false]) = [];
%     temp(mm) = sum(data.dmd(route+1));
% end
% neighbor.payload - temp
% if any(abs(neighbor.payload - temp) > 0)
%     warning('?')
% end
end