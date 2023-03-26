function frequency = update_frequency(frequency,new_routes)
% 频率更新函数
% 给定旧的频率和新的路线 计算新的频率
employed_num = size(new_routes,1);
for i = 1:employed_num
    r = new_routes(i,:);
    r(r==0) = []; % 去掉仓库和0
    frequency(i,r) = frequency(i,r) + 1;
end
end

