% to perform a guassian curve fitting
fid=fopen('guassfit.txt');
oma=fscanf(fid,'%f',[1,inf]);  % reading data
fclose(fid);

os=size(oma);
on=os(1,2);

k=input('enter the no. of bin to be created : ');
large=max(oma);
small=min(oma);                        %creating bins
h=(large-small)/k;

ma(1:2,k)=0;
x=small;
for i=1:k
    y=x+h;
    count=0;
    for j=1:on
        if x<=oma(1,j)
            if oma(1,j)<y
               count=count+1;
            end
        end
    end
    ma(1,i)=(x+y)/2;
    ma(2,i)=count;
    x=y;
end

plot(ma(1,:),ma(2,:));           % ploting original data after bins

s=size(ma);
n=s(1,2);

sumx=0;
for i=1:n                        %mean value calculation
    sumx=sumx+ma(1,i);
end
xbar=sumx/n;

sumd=0;
for i=1:n                        % standard deviation
    sumd=sumd+(ma(1,i)-xbar)^2;  
end

sigma=sqrt(sumd/(n-1));               

deno=1/(sigma*sqrt(2*3.1416));
pdeno=2*sigma*sigma;
for i=1:n
    mb(1,i)=ma(1,i);                          %calculation of new y
    g=-1*(ma(1,i)-xbar)*(ma(1,i)-xbar);       
    mb(2,i)=deno*exp(g/pdeno);
end

plot(mb(1,:),mb(2,:));           % ploting fitted data
