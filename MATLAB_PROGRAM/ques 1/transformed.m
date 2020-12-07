%transformed curve plot
% orinal equation plot
h=((3.14/2)-0)/100;
y=0;
for i=1:101
    nta(1,i)=y;
    nta(2,i)=cos(y)-2*y*sin(y);
    y=y+h;
end
plot(nta(1,:),nta(2,:));