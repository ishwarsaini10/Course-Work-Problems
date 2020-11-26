
/*
 * Name - Ishwar Singh
 * Date - 25.11.2020
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



/*  Main function starts here */
int previous_year_q1(){
    double  a   = -sqrt(M_PI/2.0)  ;
    double  b   = 2.0*sqrt(M_PI/2.0)  ;
//    double  a   = 0.0 ;
//    double  b   = 2.0*sqrt(M_PI/2.0)  ;
    double  x         ;
    int N = 50        ;

    TH1 *hist = new TH1F("hist", "Distribution",  N,  a,  b);

    for(int i=1;  i<=10000; i++){
        x = myrand(0.0, sqrt(M_PI/2.0));
        hist  ->  Fill(f(x));
        std::cout <<  i <<  "\t"  <<  x <<  std::endl;
    }
    hist  ->  Draw();
    return 0;
}

