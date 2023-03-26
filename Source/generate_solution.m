function sol_info = generate_solution(data, param)
%GENERATE_SOLUTION 生成初始解

[sol_info, v_unvisited] = solomon_insert(data, param.init); % solomon插入
sol_info = greedy_insert(sol_info, v_unvisited, data, param.pen); % 贪婪插入

end


function [sol_info, v_unvisited] = solomon_insert(data, param_init)
%改进的Solomon I1插入启发式，仅做可行插入
% 该函数生成一个可行的但缺少客户的初始解
% 事实上，在大多数情况下，所罗门插入启发式可以生成可行解，前提是不限制车辆的数目。
% 该函数中，车辆数目是有限制的，因此允许不可行。

% 输入: (n)是客户数
% "data"    	    字段	            struct	1*1	            释义
%    	            coord	        double	(n+1)*2     	坐标
%   	            dmd	            double	(n+1)*1     	需求
%   	            tw	            double	(n+1)*1     	时间窗
% 	                st	            double	(n+1)*1     	服务时长
%   	            dist	        double	(n+1)*(n+1) 	距离
%    	            cap	            double	1*1         	容积
%   	            vnum	        int8	1*1         	车辆数
%                   arc             logic   (n+1)*(n+1) 	可行弧 
% 
% "param_init"	    字段	            struct	1*1	释义
%           	    epsilon_1	    double	1*1	插入启发式c1准则第一参数
%           	    epsilon_2	    double	1*1	插入启发式c1准则第二参数
%           	    lota  	        double	1*1	插入启发式c1准则第三参数
%           	    nu    	        double	1*1	插入启发式c2准则参数
%            	    alpha  	        double	1*1	广义成本容量惩罚
%           	    beta  	        double	1*1	广义成本时间惩罚
 
% 输出：
% "sol_info"        字段                	    struct	1*1	释义
%                   routes                  int16   n*m 路线 路线矩阵空位用0补齐
%                   a_r_time                double  n*m 实际最晚到达时间 real
%                   a_c_time                double  n*m 修正最晚到达时间 correct
%                   z_r_time                double  n*m 实际最早出发时间 real
%                   z_c_time                double  n*m 修正最早出发时间 correct
%                   tw_forward              double  n*m 累计向前惩罚量
%                   tw_backward             double  n*m 累计向后惩罚量
%                   cost                    double  n*4 四项成本
%                   payload                 double  n*1 每个路线的装载量
% 
% "v_unvisited"                             int16   1*n 未插入的客户

% 伪代码
% S ← ∅
% V_unrouted ← V 
% while m(S) < m and V_unrouted != ∅ do
%       v_seed ← farthestFromDepot(V_unrouted)
%       V_unrouted ← Vunrouted \{v_seed} 
%       r ← ﹝v_0, v_seed, v_n+1﹞
%       repeat
%           for all v in V_unrouted do
%               p*(v) ← bestPosition(c-1, v,r) 
%           end for 
%           v* ← bestCustomer(c_2, p*,r) 
%           r ← insertCustomer(r, v*, p*) 
%           V_unrouted ← Vunrouted\{v*}
%       until no feasible insertion into r possible 
%       S ← addRoute(S, r)
% end while
% if V_unrouted != ∅ then 
%   S ← insertCustomers(S, V_unrouted, f_gen) 
% end if
% return S

% 参考文献
% Schneider, M. (2016). "The vehicle-routing problem with time windows and 
% driver-specific times." European Journal of Operational Research 250(1):101-119.
% Solomon, M. M. (1987). Algorithms for the vehicle routing and scheduling problems
% with time window constraints. Operations Research, 35(2), 254–265.

% 版本
% 001, Jan-01-2023, 创建文件
% 002, Jan-10-2023, 修改sol_info字段
% 003, Jan-11-2023, 修正仓库的左时间窗只能是0的问题


%% 初始化参数
cus_num = length(data.st)-1;                % 顾客的数量
routes = int16(zeros(data.vnum,cus_num+2)); % 声明一个路线集合（车数 * 客户数+2）
v_unvisited = int16(1:cus_num);             % 未分配的客户
route_count = int16(1);                     % 路线计数
rec_arrtime = zeros(data.vnum,cus_num+2);   % 记录每个点的到达时间
rec_payload = zeros(data.vnum,1);           % 记录每辆车的载荷

%% 循环插入
while route_count <= data.vnum && ~isempty(v_unvisited)
    % 选取最远的客户作为种子
    % 即便是最远的客户，也一定是一个可行的客户
    % 因为该客户如果不能被第一个服务，那么该客户无论如何都不能被服务
    % 在Preprocess.m已强制所有的客户可以被服务
    % v_seed ← farthestFromDepot(V_unrouted)
    [~,seed_ind] = max(data.dist(1,v_unvisited+1));
    v_seed = v_unvisited(seed_ind); % 最远的种子客户

    % 加入路径
    % r ← ﹝v_0, v_seed, v_n+1﹞
    route = zeros(1,cus_num+2);  % 申请足够内存避免反复拓展长度
    route(2) = v_seed;% 路线初始化等于﹝v_0, v_seed, v_n+1﹞

    rec_payload(route_count) = data.dmd(v_seed+1); % 记录装载量

    % 初始化当前路径中客户的到达时间
    % [仓库的左时间窗, 种子的到达时间, 到达仓库的时间, 补0]
    arri_seed = max([data.tw(v_seed+1,1), data.tw(1,1) + data.st(1) + data.dist(1,v_seed+1)]);
    back_dc = arri_seed + data.st(v_seed+1) + data.dist(v_seed+1,1);
    route_arrtime = [data.tw(1,1), arri_seed, back_dc, zeros(1,cus_num-1)]; 

    % 在unrouted中删除该客户
    % V_unrouted ← Vunrouted \{v_seed}
    v_unvisited(seed_ind) = []; % 清除
    
    % 重复插入 直至r中不再有可行的插入路径
    while 1 % repeat

        % v* ← bestCustomer(c_2, p*,r)
        % r ← insertCustomer(r, v*, p*)
        % V_unrouted p* Vunrouted\{v*}
        
        unvi_num = length(v_unvisited); % 未访问的客户的个数
        p = int16(zeros(unvi_num,1));   % 记录每个客户的最佳插入位置
        c_1 = zeros(unvi_num,1);        % 记录c_1值
        c_2 = zeros(unvi_num,1);        % 记录c_2值
        temp_route = route;             % route复制以用来插入
        del_ind = [false,temp_route(2:end-1)==0,false]; % 删除多余0的索引
        temp_route(del_ind) = []; % 清理多余的0
        % 记录客户的最佳插入后的达到时间（行全0则说明该客户不存在可行插入）
        arrtime_insert = zeros(unvi_num,cus_num+2); 

        % 计算每个客户的最佳插入位置
        % for all v in V_unrouted do
        % p*(v) ← bestPosition(c_1, v,r)
        % end for
        temp_arrtime = route_arrtime;
        temp_arrtime([false,temp_arrtime(2:end)==0]) = [];
        for v_ind = 1:unvi_num
            v = v_unvisited(v_ind); % 一个未分配的客户
            d_0v = data.dist(1,v+1); % 该客户和仓库的距离
            % 计算该客戶的最佳位置、c_1值、新的到达时间
            [p_v, c_1_v, arrtime_vatp] = best_position(v, temp_route, data, param_init, rec_payload(route_count), temp_arrtime);
            p(v_ind) = p_v; % p记录客户v的最佳插入位置
            c_1(v_ind) = c_1_v; % c_1记录对应值
            arrtime_insert(v_ind,1:length(arrtime_vatp)) = arrtime_vatp; % 记录客户的最佳插入后的达到时间
            
            % 计算c_2
            % c2(x, y, z) = ν · d0y − c1(x, y, z)
            if p_v ~= 0
                c_2(v_ind) = param_init.nu * d_0v - c_1_v; % 计算c_2
            else
                c_2(v_ind) = -inf; 
            end

        end
        
        % 取最佳客户及其位置
        if any(p>=1) % 存在可行的插入
            % 求使得c_2最大的客户和对应的位置
            [~,best_ind] = max(c_2); 
            best_v = v_unvisited(best_ind(1)); % 最佳客户
            best_p = p(best_ind(1)); % 最佳位置
            
            % 更新路径
            temp_insert = [temp_route(1:best_p), best_v, temp_route(best_p+1:end)];
            route(1:length(temp_insert)) = temp_insert;
            % 更新时间
            route_arrtime = arrtime_insert(best_ind,:);
            % 更新容量
            rec_payload(route_count) = rec_payload(route_count) + data.dmd(best_v+1);
            
            v_unvisited(best_ind(1)) = []; % 删除已插入的客户
        else
            % 开启一个新路径
            routes(route_count,:) = route; % 记录客户顺序
            rec_arrtime(route_count,1:length(route_arrtime)) = route_arrtime;
            route_count = route_count + 1;
            break 
        end
    end
end

% 封装solution相关信息并补充缺失
% "sol_info"        字段                	struct	1*1	释义
%                   routes                  int16   n*m 路线 路线矩阵空位用0补齐
%                   a_r_time                double  n*m 实际最晚到达时间 real
%                   a_c_time                double  n*m 修正最晚到达时间 correct
%                   z_r_time                double  n*m 实际最早出发时间 real
%                   z_c_time                double  n*m 修正最早出发时间 correct
%                   tw_forward              double  n*m 累计向前惩罚量
%                   tw_backward             double  n*m 累计向后惩罚量
%                   cost                    double  n*4 四项成本
%                   payload                 double  n*1 每个路线的装载量

sol_info.routes = routes;                           % 路线, 车数*(客户数+2)
sol_info.cost = zeros(size(routes,1),3);            % 每辆车的成本
sol_info.payload = rec_payload;                     % 每辆车的装载量

empty_time = zeros(size(routes));                   % 空的时间
a_r_time = empty_time;
a_c_time = empty_time;
z_r_time = empty_time;
z_c_time = empty_time;
tw_forward = empty_time;
tw_backward = empty_time;

for i = 1:size(routes,1)                            
    route = routes(i,:);
    route([false, route(2:end-1)==0 ,false]) = [];
    dist_sub = [route(1:end-1);route(2:end)] + 1;
    dist_ind = sub2ind(size(data.dist), dist_sub(1,:), dist_sub(2,:));
    sol_info.cost(i,1) = sum(data.dist(dist_ind));  % 每辆车的距离 cost(1)
    
    r_time = zeros(size(route)); % 空时间窗
    a_r = r_time;
    a_c = r_time;
    z_r = r_time;
    z_c = r_time;

    for j = 1:length(route)
        % 计算实际最晚到达时间和修正最晚到达时间
        if j == 1
            a_r(j) = data.tw(1,1);
            a_c(j) = data.tw(1,1);
        else
            previous = route(j-1);
            current = route(j);

            a_r(j) = a_c(j-1) + data.st(previous+1) + data.dist(previous+1,current+1);
            if a_r(j) < data.tw(current+1,1)
                a_c(j) = data.tw(current+1,1);
            elseif a_r(j) >= data.tw(current+1,1) && a_r(j) <= data.tw(current+1,2)
                a_c(j) = a_r(j);
            else
                error('Time infeasible in solomon')
            end
        end
    end

    for j = length(route):-1:1
        % 计算实际最早到达时间和修正最早到达时间
        if j == length(route)
            z_r(j) = data.tw(1,2);
            z_c(j) = data.tw(1,2);
        else
            later = route(j+1);
            current = route(j);

            z_r(j) = z_c(j+1) - data.dist(current+1,later+1) - data.st(current+1);
            
            if z_r(j) >= data.tw(current+1,1)
                z_c(j) = min([z_r(j), data.tw(current+1,2)]);
            else
                z_c(j) = data.tw(current+1,1);
            end
        end
    end
    
    a_r_time(i,1:length(a_r))= a_r;
    a_c_time(i,1:length(a_r)) = a_c;
    z_r_time(i,1:length(a_r)) = z_r;
    z_c_time(i,1:length(a_r)) = z_c;
    
    temp = a_r_time(i,1:length(a_r)) - data.tw(route+1,2)';
    temp(temp<0) = 0;
    count = 0;
    for j = 1:length(temp)
        count = count + temp(j);
        tw_forward(i,j) = count;
    end
    
    temp = data.tw(route+1,1)' - z_r_time(i,1:length(a_r));
    temp(temp<0) = 0;
    count = 0;
    for j = length(temp):-1:1
        count = count + temp(j);
        tw_backward(i,j) = count;
    end
end

sol_info.a_r_time = a_r_time;
sol_info.a_c_time = a_c_time;
sol_info.z_r_time = z_r_time;
sol_info.z_c_time = z_c_time;
sol_info.tw_forward = tw_forward;
sol_info.tw_backward = tw_backward;
end


function [best_p_v, c_1_p, best_arrtime] = best_position(v, route, data, param_init, rec_payload, rec_arrtime)
%BESTPOSITION 计算客户在路径中最佳的插入位置
% 计算的是所罗门插入启发式的c_1准则
% 只能在可行的位置插入，
% route 以0开始，以0结尾
% route = [ 0 , 1 , 2 , 3 , 4, 0 ]
%             ↑此为位置1; max_position_count = length(route)-1

% 输入:
% "v"                   int16   1*1             客户点
% "route"               int16   1*n             一个路径，必须以0开头，以0结尾
% "data"    	字段	struct	1*1	            释义
%    	  data.coord	double	(n+1)*2     	坐标
%   	    data.dmd	double	(n+1)*1     	需求
%   	     data.tw	double	(n+1)*1     	时间窗
% 	         data.st	double	(n+1)*1     	服务时长
%   	   data.dist	double	(n+1)*(n+1) 	距离
%    	    data.cap	double	1*1         	容积
%   	   data.vnum	int8	1*1         	车辆数
%           data.arc    logic   (n+1)*(n+1) 	可行弧 (n)是客户数
% 
% "param_init"	字段	            struct	1*1	释义
%           	param_init.epsilon_1	double	1*1	插入启发式c1准则第一参数
%           	param_init.epsilon_2	double	1*1	插入启发式c1准则第二参数
%           	param_init.lota  	double	1*1	插入启发式c1准则第三参数
%           	param_init.nu    	double	1*1	插入启发式c2准则参数
%            	param_init.alpha  	double	1*1	广义成本容量惩罚
%           	param_init.beta  	double	1*1	广义成本时间惩罚
% 
% "param_init"       double      1*1
% "rec_arrtime"     double      1*1
% 
% 输出:
% "best_p_v"    int16   1*1     最佳插入位置
% "c_1_p"       double  1*1     插入后c_1准则的值

% 初始化
position_num = length(route)-1;    % 可插入的位置数
rec_c_1_p = zeros(1,position_num); % 记录该位置的c_1值
insert_arrtime = zeros(position_num, position_num+2);


% 验证route的正确性
if route(1)~=0 || route(end)~=0
    error(" Parameter 'route' must start at or end at 0")
elseif sum(route==0) ~= 2
    error(" Parameter 'route' must start at or end at 0")
end

% 遍历v的插入位置，以计算最优的位置
for p = 1:position_num
    % 弧可行性
    if data.arc(route(p)+1,v+1)==0 || data.arc(v+1,route(p+1)+1)==0
        rec_c_1_p(p) = inf;
        continue 
    end
    
    % 容量可行性
    if rec_payload + data.dmd(v+1) > data.cap
        rec_c_1_p(p) = inf;
        continue
    end
    
    % 时间可行性
    [t_feasbl, new_rec_arrive] = time_feas(route, v, p, data, rec_arrtime);
    if t_feasbl
        % 三项可行
        % 计算 c_12
        time_old = rec_arrtime(p+1);
        time_new = new_rec_arrive(p+2);
        c_12 = time_new - time_old;

        % 计算 c_11
        c_11 = data.dist(route(p)+1,v+1) + data.dist(v+1,route(p+1)+1) ...
                        - param_init.lota * data.dist(route(p)+1,route(p+1)+1);
        
        % 计算 c_1
        c_1 = param_init.epsilon_1*c_11 + param_init.epsilon_2*c_12;
        rec_c_1_p(p) = c_1;

        insert_arrtime(p,:) = new_rec_arrive;
    else
        rec_c_1_p(p) = inf;
        continue
    end
end

% 取v在route中的最佳插入位置
[min_c_1,min_ind] = min(rec_c_1_p,[],2);
if rec_c_1_p(min_ind) == inf
    c_1_p = inf;
    best_p_v = 0;
    best_arrtime = [];
else
    best_p_v = min_ind;
    c_1_p = min_c_1;
    best_arrtime = insert_arrtime(best_p_v,:);
end
end


function [t_feasbl, new_arrive] = time_feas(route, v, p, data, old_arrive)
% 判断时间可行性
% t_feasbl 返回真假值 true表示可行
% new_arrive 返回插入p之后新的到达时间

new_route = [route(1:p), v, route(p+1:end)]; % 新route
new_arrive = zeros(1,length(route)+1);
new_arrive(1:p) = old_arrive(1:p);
for i = p+1:length(new_route)   % 只计算p之后的时间即可
    current = new_route(i);
    previous = new_route(i-1);
    
    % 到达时间递推
    % 到达时间等于 max{当前点的最早时间窗，上一个点的到达+服务+上一个点到当前点的距离}
    current_arrive = max([data.tw(current+1,1), ...
          new_arrive(i-1)+data.st(previous+1)+data.dist(previous+1,current+1)]);

    if current_arrive > data.tw(current+1,2)
        t_feasbl = false;
        new_arrive = inf;
        return
    else
        new_arrive(i) = current_arrive;
    end
end
t_feasbl = true;
end


function sol_info = greedy_insert(sol_info, v_unvisited, data, pen)
%以最小的广义成本贪婪插入所有未分配的客户

% 整合广义成本参数
para_g_c.alpha = pen.alpha_0;
para_g_c.beta = pen.beta_0;

punish_time = zeros(size(sol_info.routes)); % 惩罚时长

while ~isempty(v_unvisited) % 有未分配的客户
    add_cost = inf; % 记录插入一个客户后成本的增量
    % 初始化一个优质解better_sol 申请空间
    better_sol = struct(); 
    better_sol.route_ind = int16(0); % 路线的索引号
    better_sol.v = int16(0);         % 插入的客户
    better_sol.route = int16(zeros(1,size(sol_info.routes,2))); % 插入后的路径
    better_sol.arritime = zeros(1,size(sol_info.routes,2)); % 到达时间
    better_sol.puntime = zeros(1,size(sol_info.routes,2));  % 惩罚时时间
    better_sol.cost = sol_info.cost(1,:);             % 成本
    better_sol.payload = sol_info.payload(1);       % 装载量

    %%  计算 每个客户 在 每个路径 中的 每个位置 插入的成本增量
    % 并不断获取最小的增量然后更新sol_info
    % 时间复杂度O(mn) m是客户的数量，n是可插入的位置
    % 虽然是三重嵌套但实际相当于未插入的客户数量*可插入的位置
    % 最多100个客户100个位置，O(n^2)
    for i = 1:length(v_unvisited)
        v = v_unvisited(i); % 取一个客户
        for j = 1:data.vnum
            route = sol_info.routes(j,:); % 取一辆车的路径
            del_ind_route = [false,route(2:end-1)==0,false];
            route(del_ind_route) = []; % 去掉不必要的0
            old_arrtime = sol_info.a_r_time(j,:); % 获取路径的到达时间
            if all(route==0)
                del_ind_time = [false,false,old_arrtime(3:end)==0]; % 时间删除多余的0
            else
                del_ind_time = [false,old_arrtime(2:end)==0];
            end

            old_arrtime(del_ind_time) = []; % 去掉不必要的0
            old_puntime = punish_time(j,:); % 获取路径的惩罚时间
            old_puntime(del_ind_time) = []; % 去掉不必要的0
            old_payload = sol_info.payload(j); % 获取装载量
            old_cost = sol_info.cost(j,:); % 获取成本
            
            % 整合路线信息
            route_info.old_arritime = old_arrtime;
            route_info.old_puntime = old_puntime;
            route_info.old_payload = old_payload;
            route_info.old_cost = old_cost;
            
            for p = 1:length(route)-1
                new_route = [route(1:p), v, route(p+1:end)];
                
                % 整合路线信息
                route_info.new_route = new_route;
                route_info.change_position = p;
               
                % 计算新路径的信息
                new_route_info = new_route_generate(route_info, data, para_g_c);

                
                % 获得new_route_info的成本增量
                temp_add = sum(new_route_info.new_cost - route_info.old_cost);
                if temp_add < add_cost
                    % 新的优质解
                    % 记录新的优质解
                    better_sol.route = new_route_info.new_route;
                    better_sol.arritime = new_route_info.new_arritime;
                    better_sol.puntime = new_route_info.new_puntime;
                    better_sol.cost = new_route_info.new_cost;
                    better_sol.payload = new_route_info.new_payload;
                    better_sol.route_ind = int16(j);
                    better_sol.v = v;  
                    % 更新最小指标
                    add_cost = temp_add;
                end
            end
        end
    end

    % 更新解
    ind = better_sol.route_ind;
    len = length(better_sol.route);
    sol_info.payload(ind) = better_sol.payload;
    sol_info.routes(ind,1:len) = better_sol.route;
    sol_info.a_r_time(ind,1:len) = better_sol.arritime;
    sol_info.cost(ind,:) = better_sol.cost;

    % 删除 客户 v
    v_unvisited(v_unvisited==better_sol.v) = [];
end

% 更新解
% sol_info.routes
% sol_info.cost
% sol_info.payload
% sol_info.a_r_time
% sol_info.a_c_time
% sol_info.z_r_time
% sol_info.z_c_time
% sol_info.tw_forward
% sol_info.tw_backward

[a_r_time, a_c_time, z_r_time, z_c_time, tw_forward, tw_backward] =...
    calculate_time(sol_info.routes, data, 1:size(sol_info.routes,1));

sol_info.a_r_time = a_r_time;
sol_info.a_c_time = a_c_time;
sol_info.z_r_time = z_r_time;
sol_info.z_c_time = z_c_time;
sol_info.tw_forward = tw_forward;
sol_info.tw_backward = tw_backward;

end


function new_route_info = new_route_generate(route_info, data, para_g_c)
% 生成一个新的路径信息

% route_info.old_payload,
% route_info.new_route,
% route_info.change_position,
% route_info.old_arritime,
% route_info.old_puntime
% route_info.old_cost

% para_g_c.alpha,
% para_g_c.beta,
% para_g_c.lambda


if sum(route_info.new_route==0)~=2 ||...
        route_info.new_route(1)~=0 ||...
        route_info.new_route(end)~=0
    error('Route must start and end at 0')
end

p = route_info.change_position; % 获取p
new_route = route_info.new_route; % 获取新的route

% 计算p之后客户的到达时间和惩罚时间
new_arritime = [route_info.old_arritime(1:p), 0, route_info.old_arritime(p+1:end)];
new_puntime = [route_info.old_puntime(1:p), 0, route_info.old_puntime(p+1:end)];
% 前p个的时间是已知的，不用变动
for i = p+1:length(new_arritime)
    previous = new_route(i-1);
    current = new_route(i);
    actual_arri = new_arritime(i-1) + data.st(previous+1) + data.dist(previous+1,current+1);
    if actual_arri < data.tw(current+1,1)
        new_arritime(i) = data.tw(current+1,1);
    elseif actual_arri > data.tw(current+1,2)
        new_arritime(i) = data.tw(current+1,2);
        new_puntime(i) = actual_arri - data.tw(current+1,2);
    else
        new_arritime(i) = actual_arri;
    end

    if new_arritime(i)==route_info.old_arritime(i-1)
        break
    end
end

% 计算距离
previous = new_route(p);
current = new_route(p+1);
later = new_route(p+2);
new_dist = route_info.old_cost(1) - data.dist(previous+1,later+1) + ...
    data.dist(previous+1,current+1) + data.dist(current+1,later+1);


% 计算容量
new_payload = route_info.old_payload + data.dmd(current+1);

% 计算广义成本
new_cost = zeros(1,3);
new_cost(1) = new_dist;
if new_payload > data.cap
    pen_cap = (new_payload - data.cap) * para_g_c.alpha;
else
    pen_cap = 0;
end
new_cost(2) = pen_cap;
new_cost(3) = sum(new_puntime) * para_g_c.beta;

% 封装
new_route_info.new_route = new_route;
new_route_info.new_arritime = new_arritime;
new_route_info.new_puntime = new_puntime;
new_route_info.new_cost = new_cost;
new_route_info.new_payload = new_payload;

end
