
#include<math.h>
#include<iostream>
#include<fstream>
#include<cfloat>

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

class Gauss {

    public :  
        
        Gauss(float a, float b)             ;
        float Value (float x)               ;
        float   X                           ;
        float   sigma                       ; 
};

Gauss::Gauss(float a, float b){ 
        X     = a ;
        sigma = b ;
} 

float Gauss::Value(float x){
    float   return_value  = (1.0/(sigma*sqrt(2.0*M_PI)))*exp(-(pow(x-X,2))/(2.0*pow(sigma,2))); 
    std::cout <<  "X  = " <<  X <<  "\t"  <<  "sigma  = " <<  sigma <<  std::endl ;
    return  return_value ;
}

int main(){
    Gauss g(18.0,3.0);
    float a = g.Value(23.0);
    std::cout <<  a <<  std::endl;
    return 0;
}
