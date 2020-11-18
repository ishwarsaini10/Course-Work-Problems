/*
 * Name - Ishwar Singh
 * Date - 17.11.2020
 * Aim  - To find the value of Pi using Random Numebrs
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


int main(){
    double x    ;
    double y    ;
    double z    ;
    double pi   ;
    int count   ;
    int   i     ;
    int   n     ;

    srand(time(0));
    for(int j=10; j<=10E6;  j*=10){
        count=0;
        for(int i=1;  i<=j; i++){
            x = rand1();
            y = rand1();
            z = pow(x,2)  + pow(y,2);
            if(z<=1){
                count++;
            }
        }
        pi  = (double) count/j*4;
        std::cout <<  j <<  "\t"  <<  pi  <<  "\t"  <<  abs(pi-M_PI) <<  std::endl;
    }


    return 0;
}
