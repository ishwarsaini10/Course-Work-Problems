// To find factorial of a number using function declaration
#include<stdio.h>
#include<conio.h>
#include<math.h>
long fact(int y);
int main()
{
	long int n,x;
	printf("Enter the integer \n");
	scanf("%d",&n);
	x=fact(n);
	printf("Number = %d \t factorial = %d \n",n,x);
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
