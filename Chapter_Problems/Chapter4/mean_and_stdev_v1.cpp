
/**********************************************************
 *  Name  - Ishwar Singh                                  *
 *  Aim   - To solve problem 4.28 of J.R. Taylor          *    
 *  Email - isingh@fnal.gov                               *        
 *                                                        *
 **********************************************************  
*/

/*  C++ Directives  */
#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<cfloat>

/*  Main Function to calculate Mean, Standard Deviation of the data enetered*/
/*  and some other parts of the problem */
int main(){
    const int n   = 5                                       ;
    float l[n]    = {51.2, 59.7,  68.2, 79.7, 88.3        } ;
    float T[n]    = {1.448, 1.566,  1.669,  1.804,  1.896 } ;
    float g[n]                                              ;
    float sum     = 0.0                                     ;
    float mean                                              ;
    float stdev                                             ;
    float sdom                                              ;
    float g_true  = 979.6                                   ; 


    /*  Calculate g and sum all values of g to get its mean */
    
    for(int i =0; i<n;  i++){
        g[i]  = (4.0*pow(M_PI,2)*l[i])/pow(T[i],2)        ;
        std::cout <<  l[i]  <<  "\t"  <<  T[i]  <<  "\t"  <<  g[i]  <<  std::endl;
        sum+=g[i];
    }

    /*  Mean of all g values  */    
    
    mean  = sum/5 ;                               
    sum   = 0.0   ;

    /* Calculates the squared sum of deviations */

    for(int i=0;  i<n;  i++){
        sum+=pow((g[i]-mean),2);
    }

    stdev = sqrt(sum/(n-1));  //  Standard Deviation
    sdom  = stdev/(sqrt(n));  //  Standard deviation of the Mean

    float error = abs(g_true - mean)  ;
    
    std::cout <<  "\nThe answer is :  " <<  mean  <<  "\t pm"  << sdom <<  std::endl;

    std::cout <<  "\n Discrepancy = \t" <<  abs(g_true-mean)  <<  std::endl         ;  
    
    std::cout <<  "\n Order of Discrepancy  = \t" <<  abs(g_true-mean)/sdom  <<  std::endl ;

    std::cout <<  "\n Relative Error is = \t" <<  (error/g_true)*100  <<  std::endl ;  
    float eps_total = (error/g_true)*100  ;
    std::cout <<  "\n Relative Random Error is = \t" <<  (sdom/mean)*100  <<  std::endl ;  
    float eps_random  = (sdom/mean)*100 ;
    float eps_system  = sqrt(pow(eps_total,2)-pow(eps_random,2));

    std::cout <<  "\n Relative Systematic Error is = \t" <<  eps_system  <<  std::endl ;  
    return 0;
}//end of the main function
