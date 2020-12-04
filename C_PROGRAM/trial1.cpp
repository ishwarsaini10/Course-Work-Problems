#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long fact(int y);
int main()
{
	int i,x,n;
	float k;
	printf("Enter the value of n: \n");
	scanf("%d",&n);
	for(i=0;i<=20;i++)
	{
		x=rand()%n;
		k=(fact(n)/(fact(x)*fact(n-x)));
		printf("x = %d \t k = %f \n",x,k);
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
