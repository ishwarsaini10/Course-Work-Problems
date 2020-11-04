
/*
 * Name     - Ishwar Singh
 * Purpose  - Solve problem number 5.4 of J.R. Taylor
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
#include<TFile.h>
#include "/home/ishwarsingh/MyIncludes/Customize_hist.h"

//#include "/home/ishwarsingh/Phd_Documents/Course_work/Chapter_Problems/Chapter5/measurements.h"


int Problem_5_4(){
  const int   Nbins     =   5     ;
  float       Xmin      =   70.5  ;   
  float       Xmax      =   80.0  ;
  float       dat[10]             ;
  float       sum       =   0.0   ;
  
  TH1F *hist  = new TH1F("hist", "Problem 5.4", Nbins,  Xmin, Xmax);
  
  for(int i=0 ; i<10;std  i++){
      std::cout <<  "Enter "  <<  i <<  "Data : ";
      std::cin  >>  dat[i];
      sum+=dat[i]         ;
      std::cout <<  "\n"  ;
  }

  for(int i=1;  i<=Nbins; i++){
      //hist  ->  SetBinContent(i,  (dat[i-1]/sum));
      hist  ->  Fill()
  }

  hist  -> Draw();
  return(0);
} 
    










