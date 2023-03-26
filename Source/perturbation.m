function [pert_sol_info, arcs] = perturbation(sol_info, data, structure)
% 扰动过程 Cyclic交叉

% nb_structure的第一个参数决定了参与交换的路线数量
%               第二个参数决定了每个路线交换的客户的最大个数
% sol_info 字段如下 各个字段含义见generate_solution.m
% pert_sol_info 字段与sol_info相同
% sol_info.tw_backward,
% sol_info.routes,
% sol_info.cost,
% sol_info.payload,
% sol_info.a_r_time,
% sol_info.a_c_time,
% sol_info.z_r_time,
% sol_info.z_c_time,
% sol_info.tw_forward

% 初始化
change_num = structure(1); % 更改的线路数
change_len = structure(2); % 线路中可更改最常的片段
arcs = int16(zeros(change_num*4,2)); % 更改的弧
vnum = size(sol_info.routes,1); % 使用的车辆数
try
    r_ind = randperm(vnum, structure(1)); % 被选择的车辆索引
catch
    error('The number of paths in the neighborhood structure is too large: %d.', structure(1))
end

% 分离随机路径 以及每个路径中片段的起点和终点
route_cell = cell(1,change_num);   % 每个路径
start_point = zeros(change_num,1); % 每个路径的起点
end_point = zeros(change_num,1);   % 每个路径的终点
for i = 1:change_num
    ind = r_ind(i); % 索引
    route = sol_info.routes(ind,:); % 取一辆车的路径
    route([false,route(2:end-1)==0,false]) = []; % 去除多余的0
    route_cell{i} = route; % 用cell 存住路径
    
    r_len = length(route);
    start_point(i) = ceil(rand * (r_len-2)); % 随机起点 至少一个客户末尾是仓库 减2
    rand_len = ceil(rand * double(change_len));     % 随机长度
    end_point(i) = min([start_point(i) + rand_len, r_len-1]); % 终点
end
if any(start_point >= end_point)
    error('bug in selecting point')
end

% 交换
count = 1; % 计数器
payload = zeros(change_num,1); % 装载量
temp_sec = route_cell{1}(start_point(1)+1:end_point(1)); % 第一条路径的片段
for i = 1:change_num
    route = route_cell{i}; % 选取一个路径
    route_sec_1 = route(1:start_point(i)); % 路径第一段
    route_sec_2  = route(end_point(i)+1:end); % 路径第三段

    arcs(count,:)   = [route_sec_1(end), route(start_point(i)+1)]; % 删除的弧
    arcs(count+1,:) = [route(end_point(i)), route_sec_2(1)];
    count = count + 2;

    if i ~= change_num
        insert_sec = route_cell{i+1}(start_point(i+1)+1:end_point(i+1)); % 待插入的片段
        route_cell{i} = [route_sec_1, insert_sec, route_sec_2]; % 放回路径
        arcs(count,:)   = [route_sec_1(end), insert_sec(1)];
        arcs(count+1,:) = [insert_sec(end), route_sec_2(1)];
        count = count + 2;
    else
        route_cell{i} = [route_sec_1, temp_sec, route_sec_2]; % 放回路径
        arcs(count,:)   = [route_sec_1(end), temp_sec(1)];
        arcs(count+1,:) = [temp_sec(end), route_sec_2(1)];
        count = count + 2;
    end
    
    payload(i) = sum(data.dmd(route_cell{i}+1));
end


% 计算时间相关的变量
% cell转mat并补0
temp_routes = int16(zeros(change_num, size(sol_info.routes,2))); % 临时路径
for i = 1:change_num
    temp_routes(i,1:length(route_cell{i})) = route_cell{i};
end
[a_r_time, a_c_time, z_r_time, z_c_time, tw_forward, tw_backward] = ...
    calculate_time(temp_routes, data, 1:size(temp_routes,1));


% 赋值传出
% 初始化 获得路径 时间 容量
pert_sol_info.routes = sol_info.routes; % 路径
pert_sol_info.a_r_time = sol_info.a_r_time;  % 时间
pert_sol_info.a_c_time = sol_info.a_c_time; 
pert_sol_info.z_r_time = sol_info.z_r_time; 
pert_sol_info.z_c_time = sol_info.z_c_time; 
pert_sol_info.tw_forward  = sol_info.tw_forward; 
pert_sol_info.tw_backward = sol_info.tw_backward;
pert_sol_info.payload     = sol_info.payload;  % 装载量

pert_sol_info.routes(r_ind,:) = temp_routes; % 更新路径
pert_sol_info.a_r_time(r_ind,:) = a_r_time;  % 更新时间
pert_sol_info.a_c_time(r_ind,:) = a_c_time; 
pert_sol_info.z_r_time(r_ind,:) = z_r_time;
pert_sol_info.z_c_time(r_ind,:) = z_c_time; 
pert_sol_info.tw_forward(r_ind,:) = tw_forward; 
pert_sol_info.tw_backward(r_ind,:) = tw_backward; 
pert_sol_info.payload(r_ind,:) = payload;  % 装载量


% % payload测试
% employ_num = size(pert_sol_info.routes, 1);
% temp = zeros(employ_num,1);
% for mm = 1:employ_num
%     % 计算容量惩罚
%     route = pert_sol_info.routes(mm,:);
%     route([false, route(2:end-1)==0 ,false]) = [];
%     temp(mm) = sum(data.dmd(route+1));
% end
% disp('pert')
% pert_sol_info.payload - temp
% if any(abs(pert_sol_info.payload - temp) > 0)
%     warning('?')
% end
end

