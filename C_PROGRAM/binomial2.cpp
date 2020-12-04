// Binomial distribution with sorting
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long fact(int y);
int main()
{
	int i,j,x[50],n,temp1;
	float p,q,k;
	double x0,px[50],temp2,d;
	FILE*data1=NULL;
	data1=fopen("binomial2.txt","w");
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
	fprintf(data1,"mean of binomial distribution = %f \n",x0);
	fprintf(data1,"standard deviation = %f \n",d);
	printf("\n Before Sorting \n");
	fprintf(data1,"Before Sorting \n");
	for(i=0;i<=(2*x0);i++)
	{
		x[i]=rand()%n;
		printf("i = %d \t",i);
		k=(fact(n)/(fact(x[i])*fact(n-x[i])));
		px[i]=k*pow(p,x[i])*pow(q,(n-x[i]));
		printf("x = %d \t px = %f \n",x[i],px[i]);
		fprintf(data1,"\t %d \t %f \n",x[i],px[i]);
	}
	for(i=0;i<=(2*x0);i++)
	{
		for(j=i+1;j<=(2*x0);j++)
		{
			if(x[j]<x[i])
			{
				temp1=x[j];
				x[j]=x[i];
				x[i]=temp1;
				temp2=px[j];
				px[j]=px[i];
				px[i]=temp2;
			}
		}
	}
	printf("\n \n After Sorting \n");
	fprintf(data1,"\n\n After sorting \n");
	for(i=0;i<=(2*x0);i++)
	{
		printf("i = %d \t",i);
		printf(" x = %d \t px = %f \n",x[i],px[i]);
		fprintf(data1," %d \t %f \n",x[i],px[i]);
	}
	fclose(data1);
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
