fid=fopen('langdata.txt');
oa=fscanf(fid,'%f %f',[2,inf]);
fclose(fid);

s=size(oa);
n=s(1,2);

x=input('enter point at which we want to find value : ');
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
