// to find frequency of random numbers
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i,j,n,x[i],count=0;
	float p[i];
	printf("how many random numbers you want to generate? \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		x[i]=rand()%n;
		printf("x = %d \n",x[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(x[i]==x[j])
			{
				count++;
				p[i]=0;
			}
		}
		printf("p = %f\n",p[i]);
	}
	getch();
}
