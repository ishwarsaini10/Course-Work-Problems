% to perform least square fitting with equal uncertainity

fid=fopen('lineardata.txt');
a=fscanf(fid,'%f ',[2,inf]);
fclose(fid);

size=size(a);
n=size(1,2);                 % number of data points

sumx=0;
sumy=0;                      %initiating null value
sumxx=0;
sumxy=0;

for j=1:n
    sumx=sumx + a(1,j);
    sumy=sumy + a(2,j);              %terms required in formula
    sumxx=sumxx + a(1,j)*a(1,j);
    sumxy=sumxy + a(1,j)*a(2,j);
end

delta= n*sumxx - (sumx*sumx);

constant=(sumxx*sumy-sumx*sumxy)/delta;
slope=(n*sumxy-sumx*sumy)/delta;

for j=1:n
    b(1,j)= a(1,j);                          %data generating after fitting
    b(2,j)= constant+slope*b(1,j);
end

%uncertainty in y
sumyd=0;
for j=1:n
    sumyd=(a(2,j)-constant-slope*b(1,j))^2;
end
sigmay=sqrt(sumyd/(n-2));

%uncertainity in constant and slope
sigmaa=sigmay*sqrt(sumxx/delta);
sigmab=sigmay*sqrt(n/delta);

plot(b(1,:),b(2,:));
