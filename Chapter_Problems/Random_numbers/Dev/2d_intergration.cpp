

/*
 * Name - Ishwar Singh
 * Date - 17.11.2020
 * Aim  - To compute a two dimensinal integration of a function using RN.
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

double f(double x, double y){
    return(x*pow(y,2));
}

int main(){
    double x_1  = 0       ;
    double y_1  = 0       ;
    double x_2  = 2       ;
    double y_2  = 1       ;
    double x       ;
    double y       ;
    double int_mon        ;
    double sum  = 0.0     ;
    double  old_val = 0.0 ;
    int   i = 1           ;
    int   n               ;
    double  diff          ;
    double  accu  = 10E-6 ;

    srand(time(0));

    do{
        i+=1;
        x = myrand(x_1,x_2);
        y = myrand(y_1,y_2);
        sum = sum + f(x,y)  ;
        int_mon = (sum/i)*(x_2 - x_1)*(y_2 - y_1) ;
        diff  = fabs(int_mon - old_val)           ;
        old_val = int_mon ;
    }while(diff>accu);
    std::cout <<  i <<  "\t"  <<  int_mon <<  std::endl;
    return 0;
}
