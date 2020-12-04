// test file
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i;
	double xmin,xmax,a,b,pi,x;
	pi = 4.0*atan(1.0);
	printf("enter the value of xmin\n");
	scanf("%lf",&xmin);
	printf("enter the value of xmax\n");
	scanf("%lf",&xmax);
	a = xmin*pi;
	b = xmax*pi;
	printf("\n a = %lf \t\t b = %lf\n",a,b);
	for(i=0;i<=100;i++)
	{
		x = a+((b-a)*(double)rand()/RAND_MAX);
		printf("x = %lf\n",x);
	}
	getch();
}
