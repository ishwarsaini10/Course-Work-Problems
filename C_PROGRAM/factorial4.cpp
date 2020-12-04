// To find factorial of a number using function declaration
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long fact(int y);
int main()
{
	long int y;
	int i,x;
	for(i=1;i<=5;i++)
	{
		x=rand()%5;
		y=fact(x);
		printf("x = %d \t Factorial = %d \n",x,y);
	}
	getch();
}
long fact(int y)
{
	int i;
	long f=1;
	for(i=1;i<=y;i++)
	{
		f=f*i;
	}
	return(f);
}
