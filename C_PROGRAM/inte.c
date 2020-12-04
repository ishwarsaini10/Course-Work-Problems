#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()

{
	double func,a,b,n,h;
	n=10;
FILE *fp;
	fp=fopen("g.txt","w");
	a=0.0000;
	b=(3.14/2.0);
	h=((b-a)/n);
	for(a=0.00;a<=b;a=a+h)
	{
		func=sin(a);
		fprintf(fp,"%lf\t %lf\n",a,func);
	}
	fclose(fp);
	
}
