
/*
 * Name     - Ishwar Singh
 * Purpose  - Solve problem number 5.14 of J.R. Taylor
 * Email    - isingh@fnal.gov 
 * Date     - 22.10.2020 
 *
 */

/*  C++ Directives  */
#include<iostream>
#include<math.h>
#include<stdio.h>


/*  ROOT Directives */
#include<TH1.h>
#include<TCanvas.h>
#include<TMath.h>
#include<TTree.h>
#include<TBranch.h>
#include<TGraph.h>
#include<TFile.h>
#include "/home/ishwarsingh/MyIncludes/Customize_hist.h"

//#include "/home/ishwarsingh/Phd_Documents/Course_work/Chapter_Problems/Chapter5/measurements.h"
float gaussian(float x, float X, float sigma){
    float return_value  = (1/(sigma*(TMath::Sqrt(2*TMath::Pi()))))*(TMath::Exp(-(TMath::Power((x-X),2))/(2.0*(TMath::Power(sigma,2)))));
    return(return_value);
}

int Problem_5_14(){

    int n = 50    ;
    float x[n] ;
    float y[n] ;
    float X = 0   ;
    float sigma = 1.0 ;
    
    float gaussian(float, float, float);

    for(int i = 0; i<=2*n  ; i++){
        x[i]  = i;
        y[i]  = gaussian(i-n, X, sigma);
        std::cout <<  x[i]  << "\t" <<  y[i]  <<  std::endl; 
    }
    
    
    return(0);

} 
    










