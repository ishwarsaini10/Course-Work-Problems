// Gaussian to exponential distribution
# include <stdio.h>
# include<conio.h>
# include <math.h>
# include <stdlib.h>
int main()
{
	int i,j,k,fx;
	double x,px,pi,z0,z1,u,y,kx;
	FILE*data5=NULL;
    data5=fopen("tutorial 4b.txt","w");
	pi = 4.0*atan(1.0);
	printf("Gaussian Distribution \n");
	fprintf(data5,"Gaussian Distribution \n");
	for(i=0;i<=100;i++)
	{
		x = (double)rand()/(double)RAND_MAX;
		px = exp(-pow(x,2)/2)/(sqrt(2*pi));
		printf("x = %f \t px = %f \n",x,px);
		fprintf(data5,"\n %f \t %f \n",x,px);
	}
	printf("Uniform Distribution \n");
	fprintf(data5," \n Uniform Distribution \n");
	for(j=0;j<=100;j++)
	{
		z0 = (double)rand()/(double)RAND_MAX;
		z1 = (double)rand()/(double)RAND_MAX;
		u = exp(-(pow(z0,2)+pow(z1,2))/2);
		fx = 1;
		printf("u = %f \t fx = %d \n",u,fx);
		fprintf(data5,"\n %f \t %d \n",u,fx);
	}
	printf("Exponential Distribution \n");
	fprintf(data5," \n Exponential Distribution \n");
	for(k=0;k<=100;k++)
	{
		y = (double)rand()/(double)RAND_MAX;
		kx = exp(-y);
		printf("y = %f \t kx = %f \n",y,kx);
		fprintf(data5,"\n %f \t %f \n",y,kx);
	}
	fclose(data5);
	getch();
}
