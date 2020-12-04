// program for linear fitting
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,c,dof;
	double sumx,sumy,sumx2,sumxy,denom;
	double a,b;
	printf("*****program for weighted linear curve fitting*****\n");
	printf("Enter the total no. of observations\n");
	scanf("%d",&n);
	printf("Enter the no. of parameters to be found\n");
	scanf("%d",&c);
	dof = n-c;
	printf("degree of freedom is = %d\n",dof);
	printf("Enter the sum(x)\n");
	scanf("%lf",&sumx);
	printf("Enter the sum(y)\n");
	scanf("%lf",&sumy);
	printf("Enter the sum(x2)\n");
	scanf("%lf",&sumx2);
	printf("Enter the sum(xy)\n");
	scanf("%lf",&sumxy);
	denom = ((n*sumx2)-(pow(sumx,2)));
	a = (((sumx2*sumy)-(sumx*sumxy))/denom);
	b = (((n*sumxy)-(sumx*sumy))/denom);
	printf("\n a = %lf \t\t b = %lf\n",a,b);
	printf("the required line is Y = %3.3lf + %3.3lfX",a,b);
	getch();
}
