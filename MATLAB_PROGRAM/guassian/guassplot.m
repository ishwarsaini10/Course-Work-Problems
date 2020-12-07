%to generate and plot random no.
p=input('enter the term around which no. to be generated : ');
n=input('enter the total no. to be generated : ');
k=input('enter the no. of bin to be created : ');

ma = p + randn(1,n);                  %number stored in matrix a

large=max(ma);
small=min(ma);                        %creating bins
h=(large-small)/k;

mb(1:2,k)=0;
x=small;
for i=1:k
    y=x+h;
    count=0;
    for j=1:n
        if x<=ma(1,j)
            if ma(1,j)<y
               count=count+1;
            end
        end
    end
    mb(1,i)=(x+y)/2;
    mb(2,i)=count;
    x=y;
end

plot(mb(1,:),mb(2,:));