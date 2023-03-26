% VNS-TS求解VRPTW

clc
clear
close all

%% 读取数据
% 所罗门数据下载后去除信息，保留数据后再使用
disp('读取数据...')
file_path = '../Data/SolomonBenchMark/'; % 相对路径
file_name = 'c101.txt';               % 文件名
data = data_read([file_path, file_name]); % 文件读取与参数设置
disp(['文件路径:', file_path, file_name])
disp('-------------------------------------------------------------------')
clear file_path file_name

%% 参数设置
global know_solution
know_solution = 828.95;
param = param_setting(); % 算法参数设置

%% VNS_TS
tic
solution = vns_ts(data, param); % 变邻域-禁忌搜索
toc