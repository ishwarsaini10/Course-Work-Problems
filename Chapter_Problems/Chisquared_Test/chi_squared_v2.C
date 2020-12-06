
/*
 * Name - Ishwar Singh
 * Date - 02.12.2020
 * Aim  - Calculate Chi-squared value.
 *
 */ 

/*  C++ Directives  */
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<math.h>
#include<iomanip>
#include<cfloat>


/*  ROOT Directives */
#include<TH1.h>

int chi_squared_test(){
    const int n = 6                 ;
    double  O[n]                    ; /*  Array to store Observed Numbers in Bin  */
    double  E[n]                    ; /*  Array to store Expected Numbers in Bin  */
    std::ifstream myfile            ; /*  Reading data from the file              */
    std::ifstream myfile            ; /*  Reading data from the file              */
    myfile.open("data_file.txt")    ;
    double  s1  = 0.0               ; /*  Stores sum                              */

    for(int i=0;  i<n;  i++){
        myfile  >>  O[i]  >>  E[i]  ;
        s1+=pow((O[i]-E[i]),2)/E[i] ; /*  Calculated Chi-Sqare  */
    }
    std::cout <<  "Chi-Squared Value  = " <<  s1  <<  std::endl ;
    return 0;
}
