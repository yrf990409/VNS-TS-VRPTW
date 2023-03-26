function flags = jdg_feasible(sol_info, data)
%判断一个路径方案是否是可行解
% 可行为true 不可行为false
% 两项指标 第一个是时间 第二个是容量

% 初始
flags = false(1,2);

% 时间
if any(any(sol_info.tw_forward > 0))
    flags(1) = false;
else
    flags(1) = true;
end

% 容量
if any(sol_info.payload > data.cap)
    flags(2) = false;
else
    flags(2) = true;
end

end

