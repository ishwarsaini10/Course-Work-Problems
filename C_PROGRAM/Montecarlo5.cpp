// monte carlo technique to find integral f(x)=x*x b/w 0 and 1
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
double montecarlo(int N)
{
	int undergraph = 0;
	int i;
	double x,y,sum=0.000000000,k;
	for(i=0;i<=N;i++)
	{
		x = (double)rand()/RAND_MAX;
		y = ((3)*(double)rand()/RAND_MAX)+1;
		if(y<=pow(x,2))
		sum=sum+(x*x);
	}
	k=(sum)/N;
	return k;
}
int main()
{
	int N;
	printf("Monte Carlo Method\n");
	printf("Enter the no. of pairs (x,y)\n");
	scanf("%d",&N);
	printf("The approximate value of integral is : %lf \n",montecarlo(N));
	getch();
}
