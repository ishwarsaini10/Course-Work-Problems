%sum of series co+c1x+c2x^2+c3x^3+...
function funcone(m,x)
c=[1,1./(1:m)];                   % dot is used to devide with each m
a=[1,x.^(1:m)];                     %dot is used to assign power with each m
disp(sum(c.*a))
end
