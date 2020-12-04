// Program for lagrange Interpolation
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x[100],y[100],a,s=1,t=1,k=0;
	int n,i,j,d=1;
	printf("Enter the no. of terms of table: \n");
	scanf("%d",&n);
	printf("Enter  the respective values of variable x and y: \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
		scanf("%f",&y[i]);
	}
	printf("\n\n the table you entered is as follows: \n");
	for(i=0;i<n;i++)
	{
		printf("%0.3f \t %0.3f \n",x[i],y[i]);
	} 
	while(d==1)
	{
		printf("\n Enter the value of x to find the respective value of y \n");
		scanf("%f",&a);
		for(i=0;i<n;i++)
		{
			s=1;
			t=1;
			for(j=0;j<n;j++)
			{
				if(j!=i)
				{
					s = s*(a-x[j]);
					t = t*(x[i]-x[j]);
				}
			}
			k = k+((s/t)*y[i]);
		}
		printf("\n\n The respective value of variable y is: %f\n",k);
		printf("\n Do you want to continue?\n\n press 1 to continue and any other key to exit\n");
		scanf("%d",&d);
	}
	getch();
}
