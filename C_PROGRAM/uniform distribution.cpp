// uniform distribution
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i;
	double a,b,x0,sd,y,diff,x[i],fx[i];
	printf("Enter value of a and b \n");
	scanf("%d %d",&a,&b);
	x0=(a+b)/2;
	sd=sqrt(pow((b-a),2)/12);
	diff =(double)b-a;
	printf("diff = %f \n",diff);
	y = (1/diff);
	printf(" y = %f \n",y);
	printf("mean = %f \t standard deviation = %f \n",x0,sd);
	for(i=0;i<=10;i++)
	{
		x[i] = ((double)rand()/(double)RAND_MAX);
		if(x[i]>=a && x[i]<=b)
		{
			fx[i]=y;
		}
		else
		{
			fx[i]=0;
		}
		printf("x = %d \t \t \t fx = %f \n",x[i],fx[i]);
	}
	getch();
}
