
/*
 * Name - Ishwar Singh
 * Date - 05.12.2020
 * Aim  - Lagrange form interpolation method.
 *
 */ 
#include<stdio.h>
#include<math.h>
#include<cfloat>
#include<iostream>
#include<fstream>
float f(float y){
	return(sin(y));
}
int main()
{
	float x[100],y[100],a,s=1,t=1,k=0;
	int n=50,i,j,d=1;
	float z	;
	std::ofstream myfile              ;
	std::ofstream myfile1              ;
	myfile.open("input1.txt");
	myfile1.open("output1.txt");
	for(i=0;i<n;i++)
	{
		x[i]=i*0.1*M_PI;
		y[i]=f(x[i]);
		myfile << x[i]	<<	"\t"	<<	y[i]	<<	"\n";
	}
	printf("\n\n the table you entered is as follows: \n");
	for(i=0;i<n;i++)
	{
		printf("%0.3f \t %0.3f \n",x[i],y[i]);
	} 
	for(int l=0;l<50;l++){
		a = l*0.1*M_PI;
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
		myfile1 << a  <<  "\t" << f(a) << "\t"  << k <<  "\t" <<  abs(f(a)-k) << "\n";
	}
	return 0;
}

