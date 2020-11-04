
/*
 * Name     - Ishwar Singh
 * Purpose  - To make histogram of poisson distribution
 * Email    - isingh@fnal.gov 
 * Date     - 29.10.2020 
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

int histograms_of_poisson_distribution(){
    int Xmin      = 0                                           ;
    int Xmax      = 6                                           ;
    int Nbins     = 6                                           ;
    TCanvas *c1   = new TCanvas()                                   ;
    TH1F    *hist = new TH1F("hist", "Poisson", Nbins, Xmin, Xmax)  ;
    Customize_TH1F(hist,  "#nu",  "Probability")              ;
    Customize_canvas(c1)                                         ;     

    for(int i=1;  i<=Nbins; i++){
        hist  ->  SetBinContent(i, TMath::Poisson(i-1,0.5))     ;
    }

    hist  ->  Draw();
    return 0;
}
