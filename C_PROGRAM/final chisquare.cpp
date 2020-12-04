// chi square test

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i;
	double n,c,N,d;
	double Ok[20],Pk[20],Ek[20];
	double t,sumt=0,Rchisquare;
	printf("****welcome to chisquare test*****\n");
	printf("Enter total no. of data points(N)\n");
	scanf("%lf",&N);
	printf("Enter total no. of bins(n)\n");
	scanf("%lf",&n);
	printf("Enter no. of constraints(c)\n");
	scanf("%lf",&c);
	d = n-c;
	printf("degree of freedom in your system is : %lf\n",d);
	printf("Enter observed values of data points(Ok)\n");
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&Ok[i]);
	}
	printf("The entered values of Ok are as follows\n");
	for(i=1;i<=n;i++)
	{
		printf("Ok = %lf\n",Ok[i]);
	}
	printf("Enter probability of each bin\n");
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&Pk[i]);
	}
	printf("the entered values of probability of kth bin are as follows\n");
	for(i=1;i<=n;i++)
	{
		printf("Pk = %lf\n",Pk[i]);
	}
	printf("The expected value(Ek) of data points are as follows\n");
	for(i=1;i<=n;i++)
	{
		Ek[i]=N*Pk[i];
		printf("Ek = %lf\n",Ek[i]);
	}
	for(i=1;i<=n;i++)
	{
		t = (pow(Ok[i]-Ek[i],2)/Ek[i]);
		sumt = sumt+t;  
	}
	Rchisquare = sumt/(double)d;
	printf("value of reduced chisquare is = %lf\n",Rchisquare);
	if(Rchisquare<=1)
	{
		printf("\nHypothesis is correct!\n observed values are in a good agreement with expected values \n");
	}
	else
	{
		printf("\n Hypothesis is wrong!\n");
	}
	getch();
}
