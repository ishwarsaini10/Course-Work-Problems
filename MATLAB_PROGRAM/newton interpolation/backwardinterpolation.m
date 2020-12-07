fid=fopen('newtondata.txt');
oa=fscanf(fid,'%f %f',[2,inf]);
fclose(fid);

s=size(oa);
n=s(1,2);

for i=1:n-1
    for j=1:n-i
        oa(i+2,j)=oa(i+1,j+1)-oa(i+1,j);
    end
end

x=input('enter point at which we want to find value : ');
h=oa(1,2)-oa(1,1);
p= (x-oa(1,1))/h;

 s=size(oa);
 nr=s(1,1);
 b=0;
for i=1:nr-2
    a=1;
    for j=1:i
        a=a*(p-j+1);
    end
    a=a*(oa(i+2,1)/factorial(i));
    b=b+a
end
y=b+oa(2,1);
