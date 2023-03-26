function best_sol_info = vns_ts(data, param)
%VNS_TS VNS-TS算法
% VNS-TS算法包含三个主要步骤：初始解生成、变邻域扰动、禁忌搜索

global know_solution 
%% 初始解生成
sol_info = generate_solution(data, param);
[sol_info,data] = deal_initial_sol(sol_info,data);




%% 初始化全局最优
% 统一惩罚系数universal penalty
best_sol_info = sol_info;
% cost_best_sol = calculate_cost(best_sol_info, uni_pen, data);   % 计算best_sol_info的成本 最优解
% sum_best = sum(cost_best_sol,"all"); % 全局最优解的成本


%% 搜索优化
feas_flag = jdg_feasible(sol_info, data); % 判断可行性
if any(feas_flag == 0)
    feas_phase = true;       % 当前解不可行 进入寻找可行解的阶段
else
    feas_phase = false;     % 当前解可行 进入优化阶段
end

i = 0; % 计数器
k = 1; % 邻域模式
tabu_list = int16(ones(param.ts.theta_max,2)); % 禁忌列表


while feas_phase || (~feas_phase && i <= param.vns.eta_dist)
    uni_pen.alpha_0 = rand*(param.pen.alpha_max - param.pen.alpha_min) + param.pen.alpha_min;
    uni_pen.beta_0 = rand*(param.pen.beta_max - param.pen.beta_min) + param.pen.beta_min;
    
    % 扰动当前解sol_info 得到扰动解 pert_sol_info
    [pert_sol_info, tabu_arcs] = perturbation(sol_info, data, param.vns.kappa(k,:));

    % TS根据pert_sol_info搜索得到增强解inten_sol_info
    temp_tabu = [tabu_arcs; tabu_list];
    tabu_list = temp_tabu(1:param.ts.theta_max,:);

    pert_sol_info.cost = calculate_cost(pert_sol_info, param.pen, data); % 重新计算扰动解的成本
    [inten_sol_info, param.pen, tabu_list] = intensification_mex(pert_sol_info, data, param.pen, param.ts, tabu_list); % 增强过程(ts)
    
    uni_pen.alpha_0 = param.pen.alpha_0;
    uni_pen.beta_0 = param.pen.beta_0;

    % 得到的增强解inten_sol_info的惩罚系数param.pen和未扰动的解pert_sol_info、sol_info的系数是不一样的
    cost_inten_sol = calculate_cost(inten_sol_info, uni_pen, data);  % 计算inten_sol_info的成本 强化解
    cost_sol = calculate_cost(sol_info, uni_pen, data);        % 计算sol_info的成本 原始解
    cost_best_sol = calculate_cost(best_sol_info, uni_pen, data);   % 计算best_sol_info的成本 最优解

    sum_sol = sum(cost_sol, 'all');     % 本次迭代原始解的总成本
    sum_inten = sum(cost_inten_sol,"all"); % 本次迭代强化解的成本
    sum_best = sum(cost_best_sol,"all"); % 全局最优解的成本

    if sum_inten == sum_sol % 强化过程把扰动过程给复原了
       k = mod(k, size(param.vns.kappa,1)) + 1;
    end
    

    % 更新退火温度
    % 如果 i = 0； 则初始化温度， 否则更新温度
    if feas_phase
        if i == 0
            temperature = -( 1/param.vns.delta_sa * sum_sol - sum_sol)/ log(0.5); % 初始化温度
            temp_dcrz = temperature / double(param.vns.eta_feas * 0.8); % 温度线性下降量
        elseif 0 < i && i <= param.vns.eta_feas * 0.8
            temperature = temperature - temp_dcrz;  % 温度线性下降
        else
            temperature = 0.0001;
        end

    else
        if i == 0
            temperature = -( 1/param.vns.delta_sa * sum_sol - sum_sol)/ log(0.5); % 初始化温度
            temp_dcrz = temperature / double(param.vns.eta_dist * 0.8); % 温度线性下降量
        elseif 0 < i && i < param.vns.eta_dist * 0.8
            temperature = temperature - temp_dcrz;  % 温度线性下降
        else
            temperature = 0.0001;
        end
    end

    % 接受解准则
    if sum_inten < sum_sol % 强化解优于原始解
        sol_info = inten_sol_info; % 强化解做下一次的原始解
    else 
        % 强化后的解 还不如 原始解
        % 模拟退火准则
        if rand <= exp(-(sum_inten - sum_sol) / temperature)
            sol_info = inten_sol_info;
        else
            k = mod(k, size(param.vns.kappa,1)) + 1;
        end
    end
    
    % 更新全局最优解
    % 全局最优解并不参与任何计算，只负责记录最好的成本
    if sum_inten < sum_best
        best_sol_info = inten_sol_info;
    end

    % 判断最优解的可行状态
    if feas_phase % 在搜索可行解的阶段
        feas_flags = jdg_feasible(best_sol_info, data);
        if any(feas_flags == 0) % feas_flags 传出两个参数 时间 容量 可行为true 
            % 有任意一项为假，则还是不可行
            if i == param.vns.eta_feas
                % 增加一辆车
                new_data = data;
                new_data.vnum = data.vnum + 1;
                sol_info = generate_solution(new_data, param);
                i = -1;
            end
        else
            % 此时获得了可行解
            feas_phase = false;
            disp('-------------寻找可行解阶段停止------------------')
            i  = -1;
        end
    end
    
    % 打印
    if feas_phase
        fprintf('寻找可行解: %.2f, %.2f, %.2f, kappa = %d, i = %d  ', sum(cost_best_sol(:,1)), sum(cost_best_sol(:,2)), sum(cost_best_sol(:,3)), k, i)
        toc
%         fprintf('\n')
    else
        fprintf('可行解改进: %.2f, %.2f, %.2f, kappa = %d, i = %d  ', sum(cost_best_sol(:,1)), sum(cost_best_sol(:,2)), sum(cost_best_sol(:,3)), k, i)
        toc
%         fprintf('\n')
    end
    
    % 已知最优解的情况下可以提前退出
    if sum_best <= round(know_solution,2)
        return
    end

    % 更新计数器
    i = i + 1;
end

if temperature < 0 
    warning('temperature fail bug')
end


end


