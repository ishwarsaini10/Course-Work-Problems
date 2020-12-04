
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
#include<vector>

/*  ROOT Directives */
#include<Math/Interpolator.h>
#include<TMath.h>
double f(double x){
    return(sin(x))  ;
}

int interpolation_using_root(){
    std::ofstream myfile              ;
    std::ifstream myfile_2            ;
    std::ofstream myfile_3            ;
    myfile.open("input.txt")          ;
    myfile_2.open("input.txt")          ;
    myfile_3.open("output.txt")          ;
    double x                           ;
    std::vector<double> x_v         ;
    std::vector<double> y_v         ;
    for(int i=0;  i<=100;  i++){
        x = i*0.1*(TMath::Pi())       ;
        myfile  <<  x << "\t" <<  f(x)  <<  std::endl ;
    }
    
    for(double x_, y_ ; myfile_2  >>  x_  >>  y_  ;){
        x_v.push_back(x_) ;
        y_v.push_back(y_) ;
    }
    std::cout <<  x_v.size()  <<  std::endl ;
    for(int j=0;  j<x_v.size();j++){
        std::cout <<  x_v.at(j)  <<  "\t"  <<  y_v.at(j)  <<  std::endl ;
    }
    ROOT::Math::Interpolator *p = new ROOT::Math::Interpolator(x_v, y_v);

   for(int i=1; i<100;  i++){
       x = i*0.1*(TMath::Pi())       ;
       myfile_3 <<  x <<  "\t"  <<  p->Eval(x)  <<  std::endl;
   }
        
    
    return 0;
}
