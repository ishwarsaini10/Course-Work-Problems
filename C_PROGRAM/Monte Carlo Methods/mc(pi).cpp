// calculation of value of pi using montecarlo
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
double montecarlo(int N)
{
	int undergraph = 0;
	int i;
	double x,y,k;
	for(i=0;i<=N;i++)
	{
		x = (double)rand()/RAND_MAX;
		y = (double)rand()/RAND_MAX;
		if((pow(x,2)+pow(y,2))<=1)
		undergraph++;
	}
	k = (4*undergraph)/(double)N;
	return k;
}
int main()
{
	int N;
	printf("****Monte Carlo Method****\n");
	printf("Enter the no. of pairs(x,y)\n");
	scanf("%d",&N);
	printf("The Approximate value of Pi is : %lf\n",montecarlo(N));
	getch();
}
