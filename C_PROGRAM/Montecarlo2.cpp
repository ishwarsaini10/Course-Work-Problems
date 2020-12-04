// monte carlo technique to find integral f(x)=1/x b/w 1 and 2
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
double montecarlo(int N)
{
	int undergraph = 0;
	int i;
	double x,y;
	for(i=0;i<=N;i++)
	{
		x = (double)rand()/RAND_MAX+1;
		y = (double)rand()/RAND_MAX;
		if(y<=1/x)
		undergraph++;
	}
	return (double)undergraph/N;
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
