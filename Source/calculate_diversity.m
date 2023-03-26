function div_cost = calculate_diversity(routes, div, total_distance, cus_num, v_num, frequency)
% 计算多样性成本

% 公式
% div_cost = div * total_distance * sqrt(cus_num * v_num) * sum(frequency)

div_cost_coeff = div * total_distance * sqrt(cus_num * double(v_num));

employ_num = size(routes,1);
sum_frequency = zeros(employ_num,1);
for i = 1:employ_num
    r = routes(i,:);
    r(r==0) = []; % 去掉仓库
    sum_frequency(i) = sum(frequency(i,r),"all");
end

div_cost = div_cost_coeff * sum(sum_frequency);

end

