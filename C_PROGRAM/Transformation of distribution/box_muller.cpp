// program to convert uniform distribution into gaussian using box-muller transformation
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
int main()
{
	int i,c;
	double x,u1,u2,z,r,theta,pz,pi;
	FILE*data4=NULL;
    data4=fopen("boxmuller.txt","w");
    pi = 4.0*atan (1.0) ;
    for(i=0;i<=100;i++)
    {
  	    x = (double)rand()/(double)RAND_MAX;
  	    printf(" x = %f \n",x);
  	    fprintf(data4,"\t %f \n",x);
    }
    for(c=1; c<=100; c++)
    {
    	u1 = (double)rand()/(double)RAND_MAX;
    	u2 = (double)rand()/(double)RAND_MAX;
    	r = sqrt(-2*log(u1));
    	theta = 2*pi*u2;
    	z = r*cos(theta);
    	pz = (exp(-pow(z,2)/2)/(sqrt(2*pi)));
    	printf("\n z = %f \t pz = %f \n",z,pz);
    	fprintf(data4,"\n %f \t %f \n",z,pz);
	}
	fclose(data4);
    return 0;
	
}
