
/**********************************************************
 *  Name  - Ishwar Singh                                  *
 *  Aim   - To find the mean and stdev of the entered data*    
 *  Email - isingh@fnal.gov                               *        
 *  Date  - 31.10.2020                                    *                  
 **********************************************************  
*/

/*  C++ Directives  */

#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<cfloat>

int main(){
    int n                                                     ;
    std::cin  >>  "Enter the number of data points  = " >>  n ;
    float data[n]                                             ;
    float mean                                                ;
    float stdev                                               ;
    float sum = 0.0                                           ;

    for(int i=0;  i<n;  i++){
        if(i  ==  0){
            std::cout <<  "Enter first data : "               ;
            std::cin  >>  data[i]                             ;    
        }
        else{
            std::cout <<  "Enter next data  : " <<  std::endl ;
            std::cin  >>  data[i]                             ;    
        }
        sum+=data[i]                                          ;
    }
    std::cout <<  "Best Estimate is = " <<  sum               ;
}

