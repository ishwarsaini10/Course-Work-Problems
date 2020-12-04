// monte carlo integration for y=F(x)=sin(x) b/w any range(a,b)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
double montecarlo(double N)
{
	int i,undergraph=0;
	double x,y,a,b,k,sumgx=0;
	for(i=0;i<=N;i++)
	{
		x = a+((b-a)*(double)rand()/RAND_MAX);
		y = sin(x);
		sumgx = sumgx + y;
	}
	k = sumgx*(b-a)/N;
	return k;
}
int main()
{
	double N;
	double a,b;
	printf("****Monte Carlo Method****\n");
	printf("Enter the no. of trials\n");
	scanf("%lf",&N);
	printf("Enter the lower limit\n");
	scanf("%lf",&a);
	printf("Enter the upper limit \n");
	scanf("%lf",&b);
	printf("The approximate value of integral is : %lf \n",montecarlo(N));
	getch();
}
