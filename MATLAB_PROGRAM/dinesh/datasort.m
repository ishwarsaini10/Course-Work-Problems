fid=fopen('zno-ar-si.txt');
oa=fscanf(fid,'%f',[2,inf]);  % reading data
fclose(fid);
j=0;
for i=1:45:22393
    j=j+1;
    a(1,j)=oa(1,i);
    a(2,j)=oa(2,i);
end