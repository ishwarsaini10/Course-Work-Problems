#include<stdio.h>
#include<math.h>
#define rand_max_32 ((1u<<31)-1)
main()
{
int seed,a,c,i,jlo,jhi,M,N=150000;
float ran,r[N],A=1.0,B=3.00,y,I,sumgx,x,gx;
float e,sum2,t1,t2,t3,t4,t5,t6,p1;
sum2=0.0000000000000;
sumgx=0.00000000000;
FILE*fp=NULL;
fp=fopen("ran.txt","w");
jlo=0;
jhi=1;
i=0;
printf("enter seed\n");
scanf("%d",&seed);
a=1103515245;
c=12345;
do
{
seed=(a*seed+c)%(rand_max_32);
ran=jlo+fabs((jhi-jlo)*(seed))/(rand_max_32);
r[i]=ran;
//printf("r[i]=%f i=%d\n",r[i],i);
fprintf(fp,"\%f %d\n",r[i],i);

i++;
}
while(i<N);
/*integration*/
sumgx=0.0;
//gx=sin(x);
for(i=0;i<N;i++)
{x=A+(B-A)*r[i];
y=cos(x);
e=y*y;
sumgx=sumgx+y;
sum2=sum2+e;
}
I=sumgx*(B-A)/(float)(N);

printf("%f\n",I);

t1=sum2/(float)(N);
t2=sumgx/(float)(N);
p1=pow(t2,2);
t3=(t1-p1);
t4=t3/(float)(N);
t5=sqrt(t4);
t6=(B-A)*t5;
printf("error is=%f\n",t6);



}


