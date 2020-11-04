

/*
 * Name     - Ishwar Singh
 * Purpose  - Solve problem number QC 5.2 of J.R. Taylor
 * Email    - isingh@fnal.gov 
 * Date     - 23.10.2020 
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


int QC5_2(){
    int Xmin  = 20  ;
    int Xmax  = 50  ;
    int binw  = 10  ;
    int Nbins = (Xmax-Xmin)/binw  ;
    int n     = 20  ;
    float x[n]      ;
    float   w = 1   ;
    float w2        ;
    float sum = 0.0 ;

    TH1  *hist = new TH1F("hist", "QC 5.2",  Nbins, Xmin, Xmax);

    for(int i=0;  i<n; i++){
        std::cout <<  "Enter Data:  " <<  std::endl;
        std::cin  >>  x[i] ;
        hist  ->  Fill(x[i],w) ;
    }
        

    int n1  = hist  ->  GetNbinsX();
    std::cout <<  n1  <<  std::endl;

    for(int j=1;  j<=n1;  j++){
        sum+=hist->GetBinContent(j);
    }

    TH1 *hist2  = new TH1F("hist2", "Ans", Nbins, Xmin, Xmax);

    for(int i=1; i<=n; i++){
        w2  = (hist  ->  GetBinContent(i))/sum;
        hist2 ->  Fill(x[i-1], w2);
    }


//    hist  ->  Draw("HIST");
    hist2  ->  Draw("HIST");

    return(0)       ;
}












  



