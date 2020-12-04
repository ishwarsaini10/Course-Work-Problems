// to tabulate sine values
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	float x,x1,x2,dx,pi,y;
	int n;
	FILE*data7=NULL;
    data7=fopen("tut-5.txt","w");
	pi = 4.0*atan(1.0);
	printf("Enter value of n\n");
	scanf("%d",&n);
	printf("Enter the limits \n");
	scanf("%f %f",&x1,&x2);
	x1 = x1*pi;
	x2 = x2*pi;
	dx = (x2-x1)/(float)(n);
	for(x=x1;x<=x2;x+=dx)
	{
		y = sin(x);
		printf("x = %f \t \t y = %f\n",x,y);
		fprintf(data7,"%f\t\t%f\n",x,y);
	}
	fclose(data7);
	getch();
}
