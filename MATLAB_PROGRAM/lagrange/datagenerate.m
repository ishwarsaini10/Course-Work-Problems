%program for generating function
h=(5*3.14-0)/100;
t=0;
for i=1:101
    la(1,i)=t;
    la(2,i)=sin(t);
    t=t+h;
end
plot(la(1,:),la(2,:));