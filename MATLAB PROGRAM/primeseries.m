%program to generate prime number
n=input('enter the term upto which prime no. to be generated : ');
if n<2
    disp('try again by enterning no greater than 1');
else
    prime=[];
    m=[];
    k=0;
    for i=2:n
        c=0;
        for j=1:i
            if rem(i,j)==0
                c=c+1;
            end
        end
        if c==2
            k=k+1;
            m=[m;k];
            prime=[prime;i];
        end
    end
end
disp(['total prime no. are ',num2str(k)]);

