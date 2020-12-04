#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
double print(int count)
{
int i;
long double num;
for(i=0;i<count;i++)
{
num=(double)rand()/(double)RAND_MAX;
}
return num;
}
int main()
{
  int n,a,b,j;
  long double arr[1000];
   double f;
   printf("enter the value of random numbers you want to generate\n");
   scanf("%d",&n);
   a=0.000;
   b=1.00000;
   for(j=0;j<n;j++)
   {
     f=(1.0000/(b-a));
     arr[j]=print(n);
     printf("%LF\t\t %lf\n",arr[j],f);
   }


// BOX MULLER TRANSFORM


long double r1,r2,r3,r4,r5,r6,z[1000];

int k;
for(k=0;k<n-1;k++)
{
r1=log(arr[k]);
r2=(-2.0*r1);
r3=sqrt(r2);
r4=(6.28*arr[k+1]);
r5=cos(r4);
z[k]=(r3*r5);

}


int l,t;
long double sum1,sum,mean,var,std,h,y;
sum=0.000000000000;
sum1=0.00000000000;

for(l=0;l<n-1;l++)
{

sum=sum+z[l];
}
mean=(sum/(n-1.0000));
for(t=0;t<n-1;t++)
{
h=(z[t]-mean);
y=pow(h,2);
sum1=sum1+y;
}
var=(sum1/(n-2.00));
std=sqrt(var);
printf("mean=%LF\t\t std=%LF",mean,std);


// gaussian distribution
long double e1,e2,e3,e4,e5,e6,gd[1000];
int v;
FILE *fp;
fp=fopen("gd.txt","w");
for(v=0;v<n-1;v++)
{
e1=(0.39905822/std);
e2=(z[v]-mean);
e3=pow(e2,2);
e4=(e3/(2.0*var));
e5=(-1.0*e4);
e6=exp(e5);
gd[v]=(e1*e6);
fprintf(fp,"%LF\t\t\t %LF\n",z[v],gd[v]);
}

fclose(fp);
getch();
}
















































