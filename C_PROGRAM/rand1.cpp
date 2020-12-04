// random numbers b/w 0 and 1
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i;
	double x;
	for(i=0;i<=10;i++)
	{
		x=(double)rand()/(double)RAND_MAX;
		printf("x = %f \n",x);
	}
	getch();
}
