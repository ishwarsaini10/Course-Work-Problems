/*
 * Name     - Ishwar  Singh
 * Email    - isingh@fnal.gov
 * Purpose  - To find the mean and standard deviation of the data with different stdev.
 * Date     - 31.10.202
 
C++ Directives */

#include<iostream>
#include<math.h>
#include<stdio.h>

int main(){
    float x[4]    = {1.4, 1.2,  1.0,  1.3}                  ;
    float sig[4]  = {0.5, 0.2,  0.25, 0.2}                  ;
    float sum1    = 0.0                                     ;
    float sum2    = 0.0                                     ;
    float mean                                              ;
    float stdev                                             ;

    for(int i=0;  i<4;  i++){
        sum1+=x[i]/(pow(sig[i],2))                          ;
        sum2+=1.0/(pow(sig[i],2))                           ;
    }

    mean  = sum1/sum2                                       ;
    stdev = sqrt(1.0/sum2)                                  ;
    std::cout <<  "Mean = "       <<  mean    <<  std::endl ;
    std::cout <<  "Deviation  = " <<  stdev   <<  std::endl ;   
    return 0                                                ;

}
    



