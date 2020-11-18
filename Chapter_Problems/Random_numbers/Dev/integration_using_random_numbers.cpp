
/*
 * Name - Ishwar Singh
 * Date - 17.11.2020
 * Aim  - To calculate integration of a function using RN.
 *
 */

#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>  
#include<time.h>
#include<cfloat>

/* Function to calculate random numbers between 0 and 1 */
double rand1(){
    return((double)rand()/RAND_MAX);
}

/* Function to calculate random numbers in a given range */
double myrand(double low, double high){
    return(low+(high-low)*rand1());
}

double f(double x){
    return(pow(x,1.5));
}

/* Code to calculate Integration using Simpson's rule */
  
// Function for approximate integral 
double simpsons_(double ll, double ul, int n) 
{ 
    // Calculating the value of h 
    double h = (ul - ll) / n; 
  
    // Array for storing value of x and f(x) 
    double x[n], fx[n]; 
  
    // Calculating values of x and f(x) 
    for (int i = 0; i <= n; i++) { 
        x[i] = ll + i * h; 
        fx[i] = f(x[i]); 
    } 
  
    // Calculating result 
    double res = 0; 
    for (int i = 0; i <= n; i++) { 
        if (i == 0 || i == n) 
            res += fx[i]; 
        else if (i % 2 != 0) 
            res += 4 * fx[i]; 
        else
            res += 2 * fx[i]; 
    } 
    res = res * (h / 3); 
    return res; 
} 

int main(){
    double x    ;
    double y    ;
    double z    ;
    double pi   ;
    double a  = 1   ;
    double b  = 2   ;
    double int_mon   ;
    double temp   ;
    int   i     ;
    int   n     ;

    srand(time(0));
    for(int j=10; j<=10E6;  j*=10){
        double temp  = 0.0 ;
        for(int i=1;  i<=j; i++){
            x = myrand(a,b) ;
            y = f(x)        ;
            temp = temp + y ;
        }   
        int_mon = temp/j * (b-a);
        std::cout <<  j <<  "\t"  <<  int_mon  <<  std::endl;
    }
    std::cout <<  "Simpson = "  <<  simpsons_(a,b,1000) <<  std::endl;
    return 0;
}
