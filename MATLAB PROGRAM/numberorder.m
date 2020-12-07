% program to arrange number in ascending and decending order
n=input('enter the number of element : ');
disp('enter the element one by one');
file=[];
for i=1:n
    a=input(['enter the ',num2str(i),' element : ']);
    file=[file;a];
end
for i=1:n
    for j=i+1:n
        if file(i)>file(j)
            temp=file(i);
            file(i)=file(j);
            file(j)=temp;
        end
    end     
end
disp('numbers in ascending order : ');
disp(file);
disp('numbers in descending oreder : ');
disp(file(n:-1:1));


