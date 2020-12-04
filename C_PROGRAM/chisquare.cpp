// program for linear fitting and chisquare test
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double n,c,dof;
	double sumx,sumy,sumx2,sumxy,sumres2,denom;
	double a,b,sigma_a,sigma_b,sigma_y,chisquare;
	printf("*****program for weighted linear curve fitting*****\n");
	printf("Enter the total no. of observations\n");
	scanf("%lf",&n);
	printf("Enter the no. of parameters to be found\n");
	scanf("%lf",&c);
	dof = n-c;
	printf("degree of freedom is = %lf\n",dof);
	printf("Enter the sum(x)\n");
	scanf("%lf",&sumx);
	printf("Enter the sum(y)\n");
	scanf("%lf",&sumy);
	printf("Enter the sum(x2)\n");
	scanf("%lf",&sumx2);
	printf("Enter the sum(xy)\n");
	scanf("%lf",&sumxy);
	printf("Enter the sum(res2)\n");
	scanf("%lf",&sumres2);
	denom = ((n*sumx2)-(pow(sumx,2)));
	a = (((sumx2*sumy)-(sumx*sumxy))/denom);
	b = (((n*sumxy)-(sumx*sumy))/denom);
	sigma_y = sqrt(sumres2/n);
	sigma_a=(sigma_y*sqrt(sumx2/denom));
	sigma_b=(sigma_y*sqrt(n/denom));
	printf("\n a = %3.3lf + %3.3lf\n",a,sigma_a);
	printf("\n b = %3.3lf + %3.3lf \n",b,sigma_b);
	printf("\nthe required line is Y = %3.3lf + %3.3lfX\n",a,b);
	chisquare = (sumres2/pow(sigma_y,2));
	printf("\nthe value of chisquare = %lf\n",chisquare);
	printf("\n hypothesis is correct!!\n\n The Experimental data is linearly fitted\n");
	getch();
}
