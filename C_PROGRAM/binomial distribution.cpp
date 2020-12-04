// Binomial distribution
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long fact(int y);
int main()
{
	long int i,n,x;
	float p,q,k;
	double x0,px,d;
	FILE*data=NULL;
	data=fopen("binomial1.txt","w");
	printf("Enter the value of trials \n");
	scanf("%d",&n);
	printf("Enter the probability of success(must be less than 1) \n");
	scanf("%f",&p);
	q = 1-p;
	printf("q = %f \n",q);
	x0 = n*p;
	printf("Mean of Binomial distribution is: %f \n",x0);
	d = sqrt(n*p*q);
	printf("Standard deviation of Binomial distribution is: %f \n",d);
	fprintf(data,"mean of binomial distribution = %f \n",x0);
	fprintf(data,"standard deviation = %f \n",d);
	for(i=0;i<=(2*x0);i++)
	{
		x=rand()%n;
		k=(fact(n)/(fact(x)*fact(n-x)));
		px=(k*pow(p,x)*pow(q,(n-x)));
		printf("x = %d \t px = %f \n",x,px);
		fprintf(data,"%d \t %f \n",x,px);
	}
	fclose(data);
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
