fid=fopen('langdata.txt');
oa=fscanf(fid,'%f %f',[2,inf]);
fclose(fid);

s=size(oa);
n=s(1,2);

h=oa(1,2)-oa(1,1);

nd=(18.84-15.7)/h;

x=oa(1,n);
for m=1:nd
    x=x+h;
    b=0;
    for j=1:n
        a=1;
        for k=1:n
            if (j~=k)
            a=a*((x-oa(1,k))/(oa(1,j)-oa(1,k)));
            end
        end
        b=b+oa(2,j)*a;
    end
    na(1,m)=x;
    na(2,m)=b;
end
ma=[oa,na];
plot(ma(1,:),ma(2,:));
