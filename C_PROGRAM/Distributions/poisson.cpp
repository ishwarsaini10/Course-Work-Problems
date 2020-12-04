// poisson distribution with sorting
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long fact(int y);
int main()
{
	int i,x[50],j,temp1;
	float k;
	double y,px[50],temp2;
	FILE*data2=NULL;
	data2=fopen("poisson1.txt","w");
	printf("enter the value of mean per unit\n");
	scanf("%f",&k);
	y=exp(-k);
	printf("\n Before Sorting \n");
	fprintf(data2,"Before Sorting \n");
	for(i=0;i<=10;i++)
	{
		x[i]=rand()%(int)(2*k);
		px[i]=((y*pow(k,x[i]))/fact(x[i]));
		printf(" x = %6.2d \t\t px = %6.2f \n",x[i],px[i]);
		fprintf(data2," %6.2d \t\t %6.2f \n",x[i],px[i]);
	}
		for(i=0;i<=10;i++)
	{
		for(j=i+1;j<=10;j++)
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
	fprintf(data2,"\n\n After sorting \n");
	for(i=0;i<=10;i++)
	{
		printf(" x = %6.2d \t\t px = %6.2f \n",x[i],px[i]);
		fprintf(data2," %6.2d \t\t %6.2f \n",x[i],px[i]);
	}
	fclose(data2);
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
