% to find the coefficient of linear regression

fid=fopen('lineardata.txt');
a=fscanf(fid,'%f ',[2,inf]);
fclose(fid);

size=size(a);
n=size(1,2);                 % number of data points

sumx=0;
sumy=0;                      %initiating null value
for j=1:n
    sumx=sumx + a(1,j);
    sumy=sumy + a(2,j);              
end

xbar=sumx/n;
ybar=sumy/n;

sumnum=0;
sumdeno1=0;
sumdeno2=0;
for j=1:n
   sumnum=sumnum + (a(1,j)-xbar)*(a(2,j)-ybar);
   sumdeno1=sumdeno1 + (a(1,j)-xbar)*(a(1,j)-xbar);
   sumdeno2=sumdeno2 + (a(2,j)-ybar)*(a(2,j)-ybar);
end

r=sumnum/(sqrt(sumdeno1*sumdeno2));
disp(r);