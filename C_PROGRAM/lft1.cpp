// program for weighted linear fitting of 1-d data
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,c,dof;
	double sumwx,sumwy,sumw,sumwx2,sumwxy,denom;
	double a,b;
	printf("*****program for weighted linear curve fitting*****\n");
	printf("Enter the total no. of observations\n");
	scanf("%d",&n);
	printf("Enter the no. of parameters to be found\n");
	scanf("%d",&c);
	dof = n-c;
	printf("degree of freedom is = %d\n",dof);
	printf("Enter the sum(wx)\n");
	scanf("%f",&sumwx);
	printf("Enter the sum(wy)\n");
	scanf("%f",&sumwy);
	printf("Enter the sum(w)\n");
	scanf("%f",&sumw);
	printf("Enter the sum(wx2)\n");
	scanf("%f",&sumwx2);
	printf("Enter the sum(wxy)\n");
	scanf("%f",&sumwxy);
	denom = ((sumw*sumwx2)-(pow(sumwx,2)));
	a = ((sumwx2*sumwy)-(sumwx*sumwxy))/denom;
	b = ((sumw*sumwxy)-(sumwx*sumwy))/denom;
	printf("\n a = %f \t\t b = %f\n",a,b);
	printf("the required line is Y = %3.3f + %3.3fX",a,b);
	getch();
}
