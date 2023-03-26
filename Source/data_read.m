function data = data_read(file_path)
%DATAPREAD 读取文件路径下的所罗门格式数据
%   输入文件的路径file_path 可以是相对路径也可以是绝对路径
%   输出data结构体，包含字段：
%       坐标: coord
%       需求: dmd
%     时间窗: tw
%    服务时长: st
%    距离矩阵: dmd
%       容量: cap
%     车辆数: vnum
%     可行弧: arc

try
    load([file_path(1:end-3),'mat'])
catch
    warning('未找到最优解.mat文件')
    best_known = [];
end

try
    d = load(file_path); % data
catch
    error('找不到文件, 请检查路径file_path')
end

% 数据切片
data.coord  = d(:,2:3);     % 坐标
data.dmd    = d(:,4);       % 需求
data.tw     = d(:,5:6);     % 时间窗
data.st     = d(:,7);       % 服务时长
data.dist   = zeros(size(d,1));  % 距离矩阵

data.cap    = 200;          % 容量
data.vnum   = int8(14);     % 车辆数

if any(data.tw < 0)
    error('任何时间窗不允许小于0')
end


% 距离矩阵计算
for i = 1:length(data.dmd)
    for j = i+1:length(data.dmd)
        data.dist(i,j) = sqrt((data.coord(i,1)-data.coord(j,1))^2 + ...
                              (data.coord(i,2)-data.coord(j,2))^2);
    end
end
data.dist   = data.dist + data.dist'; % 欧氏距离
data.arc    = feasible_arc(data, best_known); % 可行弧计算
end

function feasible_arc = feasible_arc(data, best_known)
global know_solution
%PREPROCESS 预处理消除不可行弧
node_num = size(data.dmd,1);    % 点数
feasible_arc = true(node_num);  % 可行弧

dmd = data.dmd;
st = data.st;
dist = data.dist;
cap = data.cap;
tw = data.tw;

for cus_1 = 0:node_num-1
    for cus_2 = 0:node_num-1
        
        if cus_2 == cus_1 ... % 自身到自身
        || dmd(cus_1+1) + dmd(cus_2+1) > cap ...  % 需求大于容量
        || tw(cus_1+1,1) + st(cus_1+1) + dist(cus_1+1,cus_2+1) > tw(cus_2+1,2) ... % 最早到cus1却不能在指定时间到cus2
        || tw(cus_1+1,1) + st(cus_1+1) + dist(cus_1+1,cus_2+1)  ... %  最早到cus1访问cus2后不能回到DC
                         + st(cus_2+1) + dist(cus_2+1,1) > tw(1,2)
            feasible_arc(cus_1+1,cus_2+1) = false;
        end
    end
end
feasible_arc(1,1) = true; % 从仓库到仓库必须是可行的，否则不能减少车辆数


% 检查有无不能被服务的客户
if any(feasible_arc(1,2:end)==0)
    ind = find(feasible_arc(1,2:end)==0);
    feasible_arc(1,2:end) = true;
    for i = 1:length(ind)
        error('Customer %d can not be served by this depot.', int16(ind(i)))
    end
end

% 最优解查验
dist_accu = 0;
if ~isempty(best_known)
    [v_num, cus_num] = size(best_known);
    b_k = [zeros(v_num,1), best_known, zeros(v_num,1)];
    cus_num =  cus_num + 1;
    for i = 1:v_num
        for j = 1:cus_num
            if j>1 && b_k(i,j) == 0
                break
            elseif feasible_arc(b_k(i,j)+1, b_k(i,j+1)+1)==0
                sprintf('veh NO.: %d, from (%d): to (%d)', int16(i), int16(b_k(i,j)), int16(b_k(i,j+1)))
                error('feasible arc wrong')
            else
                dist_accu = dist_accu + dist(b_k(i,j)+1, b_k(i,j+1)+1);
            end
        end
    end
    disp('Preprocessed. Check that:')
    fprintf('The best-known solution to this dataset is %.2f.\n', dist_accu)
end
know_solution = dist_accu;
end



