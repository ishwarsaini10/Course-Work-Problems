// monte carlo method to evaluate integral cosx b/w any range(a,b)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,N;
	double x,y,sumgx=0.00,a,b,k;
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
		y = cos(x);
		sumgx = sumgx+y;
	}
	k = ((sumgx*(b-a))/(double)N);
	printf("The value of integral is : %lf\n",k);
	getch();
}
