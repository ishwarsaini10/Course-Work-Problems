// program for linear correlation coefficient(r)
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double sumx,sumy,sumx2,sumy2,sumxy,sumres2;
	double m,n,p,q,r;
	printf("*****program for Linear correlation coefficient*****\n");
	printf("Enter the total no. of observations\n");
	scanf("%lf",&n);
	printf("Enter the sum(x)\n");
	scanf("%lf",&sumx);
	printf("Enter the sum(y)\n");
	scanf("%lf",&sumy);
	printf("Enter the sum(x2)\n");
	scanf("%lf",&sumx2);
	printf("Enter the sum(y2)\n");
	scanf("%lf",&sumy2);
	printf("Enter the sum(xy)\n");
	scanf("%lf",&sumxy);
	m = n*sumxy;
	n = sumx*sumy;
	p = ((n*sumx2)-(sumx*sumx));
	q = ((n*sumy2)-(sumy*sumy));
	r = ((m-n)/(sqrt(p*q)));
	printf("value of correlation coefficient(r) is = %lf\n",r);
	getch();
}
