#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x1,x2,y,dx,pi;
	int x,n=20;
    pi = 4.0*atan(1.0);
	printf("supply the value of x1 and x2 in units of pi");
	scanf("%f %f\n",&x1,&x2);
	x1 = x1*pi;
	x2 = x2*pi;
	dx = (x2-x1)/(float)(n);
	for(x=x1;x<=x2;x+=dx)
	{
	y=sin(x);
	printf("%6.2f %6.2f\n",x,y);
	}
	getch();
}
