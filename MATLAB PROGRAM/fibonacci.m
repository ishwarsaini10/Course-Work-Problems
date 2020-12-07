%program will create fibonacci series upto the no.of term entered by user
n=input('enter the no. of terms : ');
fab=[0,1];
for i=3:n
    fab(i)=fab(i-1)+fab(i-2);
end
disp(fab)
