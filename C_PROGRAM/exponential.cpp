// to find exponential of a number
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x;
	double y;
	printf("enter the number\n");
	scanf("%d",&x);
	y=exp(x);
	printf("x = %d \t exponential = %f \n",x,y);
	getch();
}
