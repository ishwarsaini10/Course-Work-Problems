#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>  
#include<time.h>

double rand1(){
    return((double)rand()/RAND_MAX);
}
double myrand(double low, double high){
    return(low+(high-low)*rand1());
}


int main(){
    for(int i=1;i<=10;i++){
        std::cout <<  rand1() <<  "\t"  <<  myrand(5,15)  <<  std::endl;
    }   
    return 0;
}
