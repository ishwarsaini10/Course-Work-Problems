%program to find the large element 
n=input('enter the number of element : ');
disp('enter the element one by one');
file=[];
for i=1:n
    a=input(['enter the ',num2str(i),' element : ']);
    file=[file;a];
end
disp(max(file));