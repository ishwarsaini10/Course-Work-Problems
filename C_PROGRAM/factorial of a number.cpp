// To find factorial of a number//
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,n,fact=1;
	printf("Enter the integer \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Number = %d \t Factorial = %d \n",n,fact);
	getch();
}
