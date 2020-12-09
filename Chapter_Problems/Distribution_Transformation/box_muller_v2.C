
// program to convert uniform distribution into gaussian using box-muller transformation
# include <stdio.h>
# include <math.h>
# include <stdlib.h>

/* ROOT includes */
#include<TH1.h>


int box_muller_v2()
{
	int i,c;
	double x,u1,u2,z,r,theta,pz,pi;
	FILE*data4=NULL;
    data4=fopen("boxmuller.txt","w");
    pi = 4.0*atan (1.0) ;
    int N = 100  ;
    double Xmin = -5.0;
    double  Xmax  = 5.0 ;
    TH1 *hist = new TH1F("hist","Box Muller", N, Xmin, Xmax);
    TH1 *hist1 = new TH1F("hist1","Box Muller", N, 0., 1.);
    for(i=0;i<=100;i++)
    {
  	    x = (double)rand()/(double)RAND_MAX;
  	    fprintf(data4,"\t %f \n",x);
    }
    for(c=1; c<=10000; c++)
    {
    	u1 = (double)rand()/(double)RAND_MAX;
    	u2 = (double)rand()/(double)RAND_MAX;
    	r = sqrt(-2*log(u1));
    	theta = 2*pi*u2;
    	z = r*cos(theta);
    	pz = (exp(-pow(z,2)/2)/(sqrt(2*pi)));
    	fprintf(data4,"\n %f \t %f \n",z,pz);
        hist  ->  Fill(z) ;
        hist1 ->  Fill(u1);
	}
    hist1  ->  Draw("HIST");
    TCanvas *c2 = new TCanvas();
    hist  ->  Draw("HIST");
	fclose(data4);
    return 0;
	
}
