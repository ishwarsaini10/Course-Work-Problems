#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,l;
    float A[50][50],c,x[50],m[50],a[50],b[50],y[50],z[50],h[50],u,v,q,s,sum=0.0;
    printf("\nEnter the no. of points: ");
    scanf("%d",&n);
    printf("\nEnter the points for interpolation:\n\n");
    for(i=1; i<=n; i++)
    {
     printf("x[%d]& y[%d] \n", i-1,i-1);
     
    scanf("\n%f",&y[i]);
       scanf("\n%f",&z[i]);
    }
    for(i=2; i<=n; i++)
    {
     h[i]=y[i]-y[i-1];
    }
   
     
    for(i=2; i<=n-1; i++)
    {   
            A[i][i-1]=h[i];
            A[i][i]=2*(h[i]+h[i+1]) ;
            A[i][i+1]=h[i+1];
            A[i][n+1]=6*(((z[i+1]-z[i])/h[i+1])-((z[i]-z[i-1])/h[i]));
        
    }
 
    for(i=2; i<=n-1; i++)
    {  

    for(j=1; j<i-1; j++)
    { 
A[i][j]=0;
}
}
for(i=2; i<=n-1; i++)
    {  

    for(j=i+2; j<n; j++)
    { 
      A[i][j]=0;
     }
     }
 A[1][1]=1;
 A[n][n]=1;
 A[1][n+1]=0;
 A[n][n+1]=0;
   for(i=2; i<=n-1; i++)
    {
    A[1][i]=0;
    A[n][i]=0;
      }
    for(j=1; j<=n; j++) /* loop for the generation of upper triangular matrix*/
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    x[n]=A[n][n+1]/A[n][n];
    /* this loop is for backward substitution*/
    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+A[i][j]*x[j];
        }
        x[i]=(A[i][n+1]-sum)/A[i][i];
    }
 for(i=2; i<=n; i++) 
{
a[i]=(z[i-1]-(h[i]*h[i]*x[i-1]/6))/h[i];
b[i]=(z[i]-(h[i]*h[i]*x[i]/6))/h[i];
}

    printf("\nEnter the value of x\n");
    scanf("\n%f",&s);
    for(i=2; i<=n; i++)
    {
if(s>=y[i-1] && s<=y[i])
{
u=y[i]-s;
v=s-y[i-1];
q=((pow(u,3)*x[i-1]+pow(v,3)*x[i])/(6*h[i]))+a[i]*u+b[i]*v;
}
     }   
     printf("\n value of f(%f)=%f\n",s,q);

    return 0;
}


