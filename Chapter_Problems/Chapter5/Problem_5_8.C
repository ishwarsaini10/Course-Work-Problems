
/*
 * Name     - Ishwar Singh
 * Purpose  - Solve problem number 5.8 of J.R. Taylor
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

int Problem_5_8(){
  const int   Nbins     =   5     ;
  float       Xmin      =   0     ;   
  float       Xmax      =   50    ;
  float       dat[5]              ;
  float       sum       =   0.0   ;
  float       tau       =   14.4  ;
  float       z                   ;
  int         n         =   50    ;
  int         x         =   0     ;
  int         y         =   50    ;
  float       x1                  ;
  float       w                   ;


//****** My ROOT specific Code ******************************************************
//
  TCanvas *c        = new TCanvas(); 
  TH1F    *hist     = new TH1F("hist", "Problem 5.8", Nbins,  Xmin, Xmax) ;
  TH1F    *hist1    = new TH1F("hist1", "Problem 5.8(b)", Nbins,  Xmin, Xmax)       ;
//
//***********************************************************************************
  
//******************************************  Exercise 5.2    ***************************************

  Customize_canvas(c)                           ;       //  Customizing the Canvas
  Customize_TH1F(hist,  "t", "Number of decays");       //  Cutomizing the Histogram

  for(int i=0 ; i<Nbins;  i++){                         //  Loop to store data and summing the data
      std::cout <<  "Enter "  <<  i <<  "Data : " ;
      std::cin  >>  dat[i]                        ;
      sum+=dat[i]                                 ;
      std::cout <<  "\n"                          ;
  }
  

  for(int i=1;  i<=Nbins; i++){                         //  Loop to store data in histogram bins
      hist  ->  SetBinContent(i,  (dat[i-1]/sum));
  }

//***************************************************************************************************

//*************************************** Exercise 5.8        ***************************************

  for(int i =0; i<=n;  i++){                            //  This loop is for Exercise 5.8
      w     = (1/tau)*(TMath::Exp(-i/tau))  ;
      hist1 -> Fill(i,w)                    ;
  }

//***************************************************************************************************

  hist    -> Draw()             ;                       //  Plotting histogram
  hist1   -> Draw("HIST C SAME");
  return(0)                     ;
}
