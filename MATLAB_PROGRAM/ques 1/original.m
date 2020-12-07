% orinal equation plot
h=(sqrt((3.14/2))-0)/100;
x=0;
for i=1:101
    ta(1,i)=x;
    ta(2,i)=2*x*cos(x*x);
    x=x+h;
end
plot(ta(1,:),ta(2,:));