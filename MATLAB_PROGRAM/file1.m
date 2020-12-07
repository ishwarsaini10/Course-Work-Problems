fid=fopen('data.txt');
a=fscanf(fid,'%f %f',[2,inf]);
fclose(fid);
plot(a(1,:),a(2,:));

