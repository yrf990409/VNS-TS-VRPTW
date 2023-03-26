function [a_r_time, a_c_time, z_r_time, z_c_time, tw_forward, tw_backward] = calculate_time(routes, data, route_ind)
% 计算路径的各种时间，支持多条路径
% 返回参数：
% a_r_time      double  n*m 实际最晚到达时间 real
% a_c_time      double  n*m 修正最晚到达时间 correct
% z_r_time      double  n*m 实际最早出发时间 real
% z_c_time      double  n*m 修正最早出发时间 correct
% tw_forward    double  n*m 累计向前惩罚量
% tw_backward   double  n*m 累计向后惩罚量

% 初始化
empty_time = zeros(size(routes));  % 各种空的时间 待填充
a_r_time = empty_time;  % 实际最晚到达时间 real
a_c_time = empty_time;  % 修正最晚到达时间 correct
z_r_time = empty_time;  % 实际最早出发时间
z_c_time = empty_time;  % 修正最早出发时间
tw_forward = empty_time;    % 累计向前惩罚量
tw_backward = empty_time;   % 累计向后惩罚量

for k = 1:length(route_ind)
    ind = route_ind(k);
    r = routes(ind,:);
    r([false, r(2:end-1)==0 ,false]) = []; % r仅保留前后DC和中间的客户 清除多余0
    
    r_time = zeros(size(r)); % 空时间窗
    a_r = r_time;
    a_c = r_time;
    z_r = r_time;
    z_c = r_time;

    for j = 1:length(r)
        % 计算实际最晚到达时间和修正最晚到达时间
        if j == 1
            a_r(j) = data.tw(1,1);
            a_c(j) = data.tw(1,1);
        else
            previous = r(j-1);
            current = r(j);

            a_r(j) = a_c(j-1) + data.st(previous+1) + data.dist(previous+1,current+1);
            if a_r(j) <= data.tw(current+1,2)
                a_c(j) = max([a_r(j),data.tw(current+1,1)]);
            else
                a_c(j) = data.tw(current+1,2);
            end
        end
    end

    for j = length(r):-1:1
        % 计算实际最早到达时间和修正最早到达时间
        if j == length(r)
            z_r(j) = data.tw(1,2);
            z_c(j) = data.tw(1,2);
        else
            later = r(j+1);
            current = r(j);

            z_r(j) = z_c(j+1) - data.dist(current+1,later+1) - data.st(current+1);
            
            if z_r(j) >= data.tw(current+1,1)
                z_c(j) = min([z_r(j), data.tw(current+1,2)]);
            else
                z_c(j) = data.tw(current+1,1);
            end
        end
    end
    
    a_r_time(ind,1:length(a_r))= a_r;
    a_c_time(ind,1:length(a_r)) = a_c;
    z_r_time(ind,1:length(a_r)) = z_r;
    z_c_time(ind,1:length(a_r)) = z_c;
    
    temp = a_r_time(ind,1:length(a_r)) - data.tw(r+1,2)';
    temp(temp<0) = 0;
    count = 0;
    for j = 1:length(temp)
        count = count + temp(j);
        tw_forward(ind,j) = count;
    end
    
    temp = data.tw(r+1,1)' - z_r_time(ind,1:length(a_r));
    temp(temp<0) = 0;
    count = 0;
    for j = length(temp):-1:1
        count = count + temp(j);
        tw_backward(ind,j) = count;
    end
end

% 切片返回
a_r_time = a_r_time(route_ind,:);
a_c_time = a_c_time(route_ind,:);
z_r_time = z_r_time(route_ind,:);
z_c_time = z_c_time(route_ind,:);
tw_forward = tw_forward(route_ind,:);
tw_backward = tw_backward(route_ind,:);
end
