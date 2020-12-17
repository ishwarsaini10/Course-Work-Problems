

/*
 * Name - Ishwar Singh
 * Date - 19.11.2020
 * Aim  - To prove the central limit theorem using Random Numbers.
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
double clt(int n, double temp[]){
    double sum = 0.0 ;
    double average ;
    for(int i=1;i<=n;i++){
        int j = (int) myrand(0,99)  ;
        sum = sum+temp[j]              ;
        //std::cout <<  j <<  "\t"  <<  temp[j]  <<  std::endl;
    }
    average = sum/n  ;
    return average;
}


int clt_general(){
    double a[10000]     ;
    double sum  = 0.0 ;
    double average    ;
     int n=10000;
    TH1F *hist1  = new TH1F("hist1", "Data1",   30,0,1);
    TH1F *hist2  = new TH1F("hist2", "N=20",   30,0,1);
    TH1F *hist3  = new TH1F("hist3", "N=50",   30,0,1);
    std::ifstream myfile;
   myfile.open("Data12.txt"); 
    TH1F *hist6  = new TH1F("hist6", "N=50",   30,1,10);
    TCanvas *c1 = new TCanvas("c1","multipads",1100,1000);
    gStyle->SetOptStat(0);
    srand(time(0))    ;
  
    for(int i=0; i<n;i++){
        myfile>>a[i];
        //std::cout <<  a[i]  <<  std::endl;
        hist1 ->  Fill(a[i]);
    }
    
    for(int k = 1;  k<=n; k++){
       hist2  ->  Fill(clt(20, a));
    }
    for(int k = 1;  k<=n; k++){
       hist3  ->  Fill(clt(50, a));
    }
    hist1  ->  Draw("HIST");
    TCanvas *c2=new TCanvas();
    hist2  ->  Draw("HIST");

    TCanvas *c3=new TCanvas();
    hist3  ->  Draw("HIST");
    return 0;
}
