
// Program for lagrange Interpolation
#include<stdio.h>
//#include<conio.h>
#include<math.h>
#include<iostream>
#include<fstream>
#include<cfloat>
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
	myfile.open("q4_original.txt");
	myfile1.open("q4_interpolated.txt");
	for(i=0;i<n;i++)
	{
		x[i]=0.1*i*M_PI;
		y[i]=f(x[i]);
		myfile << x[i]	<<	"\t"	<<	y[i]	<<	"\n";
	}
	printf("\n\n the table you entered is as follows: \n");
	for(i=0;i<n;i++)
	{
		printf("%0.3f \t %0.3f \n",x[i],y[i]);
	} 
	for(int l=1;l<=6;l++){
		a = l*M_PI;
        k=0.0;
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
                    std::cout <<  a <<  "\t"  <<  j <<  "\t"  <<  i <<  "\t"  <<  s <<  "\t"  <<  t <<  std::endl;
				}
			}
			k = k+((s/t)*y[i]);
		}
		myfile1 << a	<<	"\t"	<<	k	<<	"\n";
	}
	return 0;
}
