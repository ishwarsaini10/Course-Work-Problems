#include<math.h>
#include<iostream>
#include<fstream>
#include<cfloat>
#include<iomanip>

unsigned nCk( unsigned n, unsigned k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int factorial(int n) 
{ 
    // single line to find factorial 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
}

float my_gaussian(float x, float X, float sigma){
    float return_value  = (1.0/(sigma*sqrt(2.0*M_PI)))*exp(-(pow(x-X,2))/(2.0*pow(sigma,2)));
    return(return_value);
}

float my_binomial(int r, int n, float p){
    return(nCk(n,r)*pow(p,r)*pow((1-p),(n-r)));
}

float my_poisson(float mu, int nu){
    float return_value  = exp(-mu)*(pow(mu,nu)/factorial(nu));
    return return_value;
}

int main(){
    float my_gaussian(float, float, float);
/*
    float a = my_gaussian(23.0, 18.0, 3.0);
    float b = my_binomial(0, 3, 1.0/6.0)  ;
    float c = my_poisson(3,3)             ;
    std::cout <<  a <<  std::endl;
    std::cout <<  b <<  std::endl;
    std::cout <<  c <<  std::endl;
 */   
//    float x     = -2*X    ;
    float X     = 10    ;
    float x     = -2*X    ;
    float sigma = 1.0     ;
    signed  int   i       ;
    
    std::ofstream  my_file ;
    my_file.open("gauss.dat") ;
/*    
    do{
        my_file <<  x <<  "\t"  <<  my_gaussian(x,X,sigma)  <<  std::endl;
        x+=0.1*i*X  ;
        i++       ;
    }while(i<=20) ;
*/
    if(X  ==  0.0)
    {
      for(i=-100;  i<100;  i++){
        x = 5*i*0.01*sigma;
        my_file <<  x <<  "\t"  <<  my_gaussian(x,X,sigma)  <<  std::endl;
      }
    }
    else
    {
      for(i=-100;  i<100;  i++){
        x = 2*i*0.01*X;
        my_file <<  x <<  "\t"  <<  my_gaussian(x,X,sigma)  <<  std::endl;
      } 
    }

    float value;
    float mu  = 0.5 ;
    for(int k=0;  k<=6; k++){
        std::cout <<  std::setprecision(4) <<  mu  <<  "\t"  <<  k <<  "\t"  <<  my_poisson(mu, k)*100 <<  std::endl ;
    }

    return 0;
}

