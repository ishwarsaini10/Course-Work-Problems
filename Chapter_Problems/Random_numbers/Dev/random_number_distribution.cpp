
/*
 * Name - Ishwar Singh
 * Date - 19.11.2020
 * Aim  - To plot the distribution of random numbers.
 *
 */

#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>  
#include<time.h>
#include<cfloat>

#include<TH1.h>
#include<TCanvas.h>
/* Function to calculate random numbers between 0 and 1 */
double rand1(){
    return((double)rand()/RAND_MAX);
}

/* Function to calculate random numbers in a given range */
double myrand(double low, double high){
    return(low+(high-low)*rand1());
}

int random_number_distribution(){
    double a  ;
    TRandom *R    = new TRandom();
    TH1F *hist1   = new TH1F("hist1", "Random Number Distribution", 1000,-10,10);
    TCanvas *c1   = new TCanvas("c1","multipads",1100,1000);
    gStyle->SetOptStat(0);
    srand(time(0))    ;

    for(int i=1;  i<10000;  i++){
        a = R ->  Gaus(0,1);
        hist1 ->  Fill(a);
    }
    hist1  ->  Draw();
    hist1  ->  SetFillColor(kOrange);
    return 0;
}
        
