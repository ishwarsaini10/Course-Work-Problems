% binomial distribution
n=input('enter the no. of trials : ');
p=input('enter the probability of favourable outcome : ');
q=1-p;                            % probability of unfavourable outcome

mb(1:2,n)=0;
for i=1:n+1
    a=factorial(n);
    b=p^(i-1);
    c=q^(n-i+1);
    d=factorial(i-1);             %binomial formula
    e=factorial(n-i+1);
    mb(1,i)=i-1;
    mb(2,i)=(a*b*c)/(d*e);
end

plot(mb(1,:),mb(2,:));

mean=n*p;
sigma=sqrt(n*p*q);                %mean and deviation

disp(['mean is  ',num2str(mean)]);
disp(['deviation is  ',num2str(sigma)]);
%this ia new comment
