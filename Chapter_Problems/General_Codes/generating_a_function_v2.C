
/*
 * Name - Ishwar Singh
 * Date - 26.11.2020
 * Aim  - To solve problem 1 of previous year question paper.
 *
 */ 

/*  C++ Directives  */
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<math.h>
#include<iomanip>
#include<cfloat>
#include<TH1.h>

/* Function   */
double f(double x){
    if(x>=0 && x<=sqrt(M_PI/2.0)){
        return(2.0*x*cos(pow(x,2)))  ;
    }
    else{
        return (0.0);
    }
}

/* Function to calculate random numbers between 0 and 1 */
double rand1(){
    return((double)rand()/RAND_MAX);
}

/* Function to calculate random numbers in a given range */
double myrand(double low, double high){
    return(low+(high-low)*rand1());
}

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



/*  Main function starts here */
int generating_a_function_v2(){
//    double  a   = -sqrt(M_PI/2.0)  ;
//    double  b   = 2.0*sqrt(M_PI/2.0)  ;
    double  a   = 0.0 ;
    double  b   = sqrt(M_PI/2.0)  ;
    
    double  x         ;
    double  y         ;
    int N = 20        ;

    TH1 *hist = new TH1F("hist", "Distribution",  N,  a,  b);

    for(int j=1;  j<=1000;  j++){
        y = myrand(0,sqrt(M_PI/2.0));
//        x = myrand(0,sqrt(M_PI/2.0));
//        std::cout <<  x <<  "\t"  <<  y <<  std::endl;
        
        for(int i=1;  i<=1000; i++){
            x = 0.0 + i*10E-3*sqrt(M_PI/2.0);
            if(y  <=  f(x) ){
                hist  ->  Fill(x);
            }
            //std::cout <<  y << "\t" <<  simpsons_(0,x,1000)  << std::endl;
        }
    }
    
    hist  ->  DrawNormalized();
    return 0;
}
