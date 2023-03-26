function param = param_setting()
%PARAM_SETTING 算法参数设置
% 算法参数设置包含了算法所有参数控制

param.vns.eta_feas = int16(500);    % VNS搜索可行解的迭代次数
param.vns.eta_dist = int16(500);    % VNS改进可行解的迭代次数
param.vns.delta_sa = 0.25;          % 模拟退火初始温度参数
param.vns.kappa = int8([2,1; 2,2; 2,3; 2,4; 2,5;
                        3,1; 3,2; 3,3; 3,4; 3,5;
                        4,1; 4,2; 4,3; 4,4; 4,5]); % VNS扰动模式cyclic参数

param.pen.alpha_0   = 10;   % 初始容量惩罚
param.pen.beta_0    = 10;   % 初始时间惩罚
param.pen.alpha_min = 0.5;  % 容量惩罚最小值
param.pen.beta_min  = 0.5;  % 时间惩罚最小值
param.pen.alpha_max = 5000; % 容量惩罚最大值
param.pen.beta_max  = 5000; % 时间惩罚最大值
param.pen.delta     = 1.2;  % 惩罚更新参数
param.pen.eta_pen   = 2;    % 连续惩罚更新迭代
param.pen.pool_size  = 200;   % 禁忌搜索每种算子保存的解的数量

param.ts.theta_min  = int16(15);    % 禁忌列表最小长度
param.ts.theta_max  = int16(30);    % 禁忌列表最大长度
param.ts.lambda_div = 1;            % 多样性参数
param.ts.eta_tabu   = 100;   % 禁忌搜索次数


param.init.epsilon_1 = 0.5; % 插入启发式c1准则第一参数
param.init.epsilon_2 = 0.5; % 插入启发式c1准则第二参数
param.init.lota      = 1;   % 插入启发式c1准则第三参数
param.init.nu        = 1;   % 插入启发式c2准则参数
param.init.alpha     = 1;   % 广义成本容量惩罚
param.init.beta      = 5;   % 广义成本时间惩罚

end

