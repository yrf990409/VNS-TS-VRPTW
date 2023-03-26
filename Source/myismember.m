function flag = myismember(a,b)
%MYISMEMBER 个人ismember
% a和b只能是两列

for i = 1:size(a,1)
    ind_left = b(:,1)==a(i,1);
    if any(b(ind_left,2) == a(i,2))
        flag = true;
        return
    end
end

flag = false;

end

