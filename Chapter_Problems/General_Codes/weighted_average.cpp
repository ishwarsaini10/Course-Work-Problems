
/*
 * Name     - Ishwar  Singh
 * Email    - isingh@fnal.gov
 * Purpose  - To find the mean and standard deviation of the data with different stdev.
 * Date     - 07.12.2020
 
C++ Directives */

#include<iostream>
#include<fstream>
#include<math.h>
#include<stdio.h>

int main(){
    const int n   = 3 ;
    std::ifstream myfile  ;
    myfile.open("data_file.txt")  ;
    float x[n]   ; 
    float sig[n] ;
    float sum1    = 0.0                                     ;
    float sum2    = 0.0                                     ;
    float mean                                              ;
    float stdev                                             ;

    for(int i=0;i<n;i++){
        myfile  >>  x[i]  >>  sig[i]  ;
    }

    for(int i=0;  i<n;  i++){
        sum1+=x[i]/(pow(sig[i],2))                          ;
        sum2+=1.0/(pow(sig[i],2))                           ;
    }

    mean  = sum1/sum2                                       ;
    stdev = sqrt(1.0/sum2)                                  ;
    std::cout <<  "Mean = "       <<  mean    <<  std::endl ;
    std::cout <<  "Deviation  = " <<  stdev   <<  std::endl ;   
    return 0                                                ;

}
