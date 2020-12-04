// program to convert Gaussian disribution into Exponential Distributon
# include <stdio.h>
# include<conio.h>
# include <math.h>
# include <stdlib.h>
int main()
{
	int i,j,fu;
	double u1,u2,z0,z1,r,theta,pz,pi,y,py,u;
	FILE*data6=NULL;
    data6=fopen("assignment-4(b).txt","w");
    pi = 4.0*atan (1.0) ;
    printf("\n Gausssian distribution \t \t \t Uniform Distribution \n");
    fprintf(data6,"\n Gaussian Distribution \t \t Uniform Distribution \n");
    for(i=1; i<=20; i++)
    {
    	u1 = (double)rand()/(double)RAND_MAX;
    	u2 = (double)rand()/(double)RAND_MAX;
    	r = sqrt(-2*log(u1));
    	theta = 2*pi*u2;
    	z0 = r*cos(theta);
    	z1 = r*sin(theta);
    	pz = (exp(-pow(z0,2)/2)/(sqrt(2*pi)));
    	u = exp(-(pow(z0,2)+pow(z1,2))/2);
    	fu = 1;
    	printf("\n z0 = %f\t pz = %f \t \t u = %f \t fu = %d\n",z0,pz,u,fu);
    	fprintf(data6,"\n %f\t %f \t \t %f \t %d\n",z0,pz,u,fu);
    }
    printf("\n Exponential Distribution \n");
    fprintf(data6,"\n Exponential Distribution \n");
    for(j=1;j<=20;j++)
    {
    	y = (double)rand()/(double)RAND_MAX;
    	py = exp(-y);
    	printf("\n y = %f \t py = %f \n",y,py);
    	fprintf(data6,"\n %f \t %f \n",y,py);
	}
	fclose(data6);
	getch();
	
}
