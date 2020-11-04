/*
 * Name     - Ishwar Singh
 * Purpose  - Solve problem number 5.31 of J.R. Taylor
 * Email    - isingh@fnal.gov 
 * Date     - 21.10.2020 
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

#include "/home/ishwarsingh/Phd_Documents/Course_work/Chapter_Problems/Chapter5/measurements.h"


int Problem_5_31  ()  {
    const int Nbins = 40;
    int Xmin  = 0       ;
    int Xmax  = 10      ;
    float dat[Nbins]    ;
    TFile *f  = new TFile("Problem_5_31.root", "RECREATE" )  ;
    TCanvas *can  = new TCanvas ("can",  "Bera Nahi Ibe"  )  ;
    TH1     *hist = new TH1F    ("hist", "Measurements", Nbins, Xmin, Xmax   )  ;


    for(int i=0; i<Nbins;  i++){
        std::cout <<  "Data [ " <<  i <<  " ] = " <<  std::endl;
        std::cin >>  dat[i];
       hist ->  SetBinContent(i+1, dat[i]);
    } 

    hist  ->  Draw();

    measurements m1(63,76,86,72);
    measurements m2(58,62,72,79);
    measurements m3(74,72,79,65);
    measurements m4(78,88,77,66);
    measurements m5(70,65,60,70);
    measurements m6(74,81,70,74);
    measurements m7(75,79,65,84);
    measurements m8(82,77,69,76);
    measurements m9(68,66,73,80);
    measurements m10(69,76,77,69);

    TTree *tr = new TTree("tr", "Data of Problem_5_31");

    tr  ->  Branch("Experiment1", &m1, "Measurement1/F:Measurement2/F:Measurement3/F:Measurement4/F");
    tr  ->  Branch("Experiment2", &m2, "Measurement1/F:Measurement2/F:Measurement3/F:Measurement4/F");
    tr  ->  Branch("Experiment3", &m3, "Measurement1/F:Measurement2/F:Measurement3/F:Measurement4/F");
    tr  ->  Branch("Experiment4", &m4, "Measurement1/F:Measurement2/F:Measurement3/F:Measurement4/F");
    tr  ->  Branch("Experiment5", &m5, "Measurement1/F:Measurement2/F:Measurement3/F:Measurement4/F");
    tr  ->  Branch("Experiment6", &m6, "Measurement1/F:Measurement2/F:Measurement3/F:Measurement4/F");
    tr  ->  Branch("Experiment7", &m7, "Measurement1/F:Measurement2/F:Measurement3/F:Measurement4/F");
    tr  ->  Branch("Experiment8", &m8, "Measurement1/F:Measurement2/F:Measurement3/F:Measurement4/F");
    tr  ->  Branch("Experiment9", &m9, "Measurement1/F:Measurement2/F:Measurement3/F:Measurement4/F");
    tr  ->  Branch("Experiment10", &m10, "Measurement1/F:Measurement2/F:Measurement3/F:Measurement4/F");

    tr  ->  Fill()  ;
    f   ->  Write() ;
    return(0);
}
