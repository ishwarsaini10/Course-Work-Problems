/*
 * Name - Ishwar Singh
 * Date - 25.11.2020
 * Aim  - To fit a straight line
 *
 */ 

/*  C++ Directives  */
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<math.h>
#include<iomanip>

/*  Main function starts here */
int main(){
    const int n = 5           ; /*  Number of data points               */
    double  x[n]              ; /*  Array to store x values             */
    double  y[n]              ; /*  Array to store y values             */
    double  x_squared[n]      ; /*  Array to store square of x          */
    double  xy[n]             ; /*  Array to store product of x and y   */
    double  sx    = 0.0       ; /*  sum of x value                      */              
    double  sy    = 0.0       ; /*  sum of y value                      */              
    double  sx2   = 0.0       ; /*  sum of x sqaured value              */              
    double  sxy   = 0.0       ; /*  sum of xy value                     */              
    double  den               ; /*  Denominator                         */
    double  a                 ; /*  Parameter a value                   */
    double  b                 ; /*  Parameter b value                   */
    std::ifstream myfile      ; /*  Input file                          */
    myfile.open("data.txt")   ; /*  Opens file containing data          */

    for(int i=0; i<n; i++){   /*  Loop to store data in corresponding arrays  */
        myfile  >>  x[i]  >>  y[i]  ;
        x_squared[i]  = pow(x[i],2) ;
        xy[i]         = x[i]*y[i]   ;
        sx+=x[i]                    ;
        sy+=y[i]                    ;
        sx2+=x_squared[i]           ;
        sxy+=xy[i]                  ;
        std::cout <<  i+1 << "\t" << x[i]  << "\t"  <<  y[i]  <<  "\t"  <<  x_squared[i]  <<  "\t"  <<  xy[i] <<  std::endl;  
    }
    std::cout <<  "Sum  = " << "\t"  <<  sx  <<  "\t"  <<  sy  <<  "\t"  <<  sx2 <<  "\t"  <<  sxy <<  std::endl;
    den = n*sx2 - pow(sx,2) ;
    a   = (sx2*sy - sx*sxy)/den ;
    b   = (n*sxy - sx*sy)/den   ;
    std::cout <<  "a = "  <<  a <<  std::endl;
    std::cout <<  "b = "  <<  b <<  std::endl;


    return 0;

}
