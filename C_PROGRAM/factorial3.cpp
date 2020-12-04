// To find factorial of a number using function declaration
#include<stdio.h>
#include<conio.h>
#include<math.h>
long fact(int y);
int main()
{
	long int x;
	int i;
	for(i=1;i<=5;i++)
	{
		x=fact(i);
		printf("i = %d \t Factorial = %d \n",i,x);
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
