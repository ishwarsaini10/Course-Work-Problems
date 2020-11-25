
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
#include<fstream>

/* Function to calculate random numbers between 0 and 1 */
double rand1(){
    return((double)rand()/RAND_MAX);
}

/* Function to calculate random numbers in a given range */
double myrand(double low, double high){
    return(low+(high-low)*rand1());
}

int main(){
    std::ifstream myfile ;
    myfile.open("test1.txt");
    float a;
    float b;
    for(int i=1;  i<=10;  i++){
        myfile  >> a  >>  b;
        std::cout <<  a <<  "\t"  <<  b <<  std::endl; 
    }
    return 0;

}
