// monte carlo method to evaluate integral x2 b/w any range(a,b)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,N;
	double x,y,sumgx=0.00,sumgx2=0,a,b,k;
	double t1,t2,z,e,m;
	printf("****Monte Carlo Method****\n");
	printf("Enter the no. of trials\n");
	scanf("%d",&N);
	printf("Enter the lower limit\n");
	scanf("%lf",&a);
	printf("Enter the upper limit \n");
	scanf("%lf",&b);
	for(i=0;i<=N;i++)
	{
		x = a+(b-a)*(double)rand()/RAND_MAX;
		y = (x*x);
		sumgx = sumgx+y;
		z = y*y;
		sumgx2 = sumgx2+z;
	}
	k = ((sumgx*(b-a))/(double)N);
	t1 = sumgx/(double)N;
	t2 = sumgx2/(double)N;
	m = sqrt((t2-(pow(t1,2)))/(double)N);
	e = (b-a)*m;
	printf("The value of integral is : %lf\n",k);
	printf("The Error is given as : %lf\n",e);
	getch();
}
