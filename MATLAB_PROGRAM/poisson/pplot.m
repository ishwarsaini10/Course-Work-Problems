% poission distribution
n=input('trails input : ');
nr=input('under which number poisson data to be generated : ');
% ma=randi([0 nr],1,n);
r=rand(1,n)*nr;
ma=poissrnd(r);
dim=size(ma);
s=dim(1,2);

mean=(sum(ma))/s;

for v=1:n+1
    a=exp(-mean);
    b=mean^v;
    c=factorial(v);
    mb(1,v)=v-1;
    mb(2,v)=(a*b)/c;
end

plot(mb(1,:),mb(2,:));


