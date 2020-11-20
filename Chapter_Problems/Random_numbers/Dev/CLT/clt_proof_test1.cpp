
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

int clt_proof_test1(){
    double a[100]     ;
    double sum  = 0.0 ;
    double average    ;
    TH1F *hist1  = new TH1F("hist1", "N=3",   30,1,10);
    TH1F *hist2  = new TH1F("hist2", "N=5",   30,1,10);
    TH1F *hist3  = new TH1F("hist3", "N=7",   30,1,10);
    TH1F *hist4  = new TH1F("hist4", "N=10",  30,1,10);
    TH1F *hist5  = new TH1F("hist5", "N=30",   30,1,10);
    TH1F *hist6  = new TH1F("hist6", "N=50",   30,1,10);
    TCanvas *c1 = new TCanvas("c1","multipads",1100,1000);
    gStyle->SetOptStat(0);
    c1  ->  Divide(3,3);
    srand(time(0))    ;
    for(int i=0; i<100;i++){
        a[i]  = myrand(1,10);
    }
    for(int k = 1;  k<=100; k++){
        sum = 0.0 ;
        for(int i=1;i<=3;i++){
            int j = (int) myrand(0,99)  ;
            sum = sum+a[j]              ;
            std::cout <<  j <<  "\t"  <<  a[j]  <<  std::endl;
        }
        average = sum/3.  ;
        std::cout <<  "Average = "  <<  average <<  std::endl;
        hist1  ->  Fill(average);
    }
    for(int k = 1;  k<=100; k++){
        sum = 0.0 ;
        for(int i=1;i<=5;i++){
            int j = (int) myrand(0,99)  ;
            sum = sum+a[j]              ;
            //std::cout <<  j <<  "\t"  <<  a[j]  <<  std::endl;
        }
        average = sum/5.  ;
        std::cout <<  "Average = "  <<  average <<  std::endl;
        hist2  ->  Fill(average);
    }
    for(int k = 1;  k<=100; k++){
        sum = 0.0 ;
        for(int i=1;i<=7;i++){
            int j = (int) myrand(0,99)  ;
            sum = sum+a[j]              ;
            //std::cout <<  j <<  "\t"  <<  a[j]  <<  std::endl;
        }
        average = sum/7.0  ;
        std::cout <<  "Average = "  <<  average <<  std::endl;
        hist3  ->  Fill(average);
    }
    for(int k = 1;  k<=100; k++){
        sum = 0.0 ;
        for(int i=1;i<=10;i++){
            int j = (int) myrand(0,99)  ;
            sum = sum+a[j]              ;
            //std::cout <<  j <<  "\t"  <<  a[j]  <<  std::endl;
        }
        average = sum/10.0  ;
        std::cout <<  "Average = "  <<  average <<  std::endl;
        hist4  ->  Fill(average);
    }
    for(int k = 1;  k<=100; k++){
        sum = 0.0 ;
        for(int i=1;i<=30;i++){
            int j = (int) myrand(0,99)  ;
            sum = sum+a[j]              ;
            //std::cout <<  j <<  "\t"  <<  a[j]  <<  std::endl;
        }
        average = sum/30.0  ;
        std::cout <<  "Average = "  <<  average <<  std::endl;
        hist5  ->  Fill(average);
    }
    for(int k = 1;  k<=100; k++){
        sum = 0.0 ;
        for(int i=1;i<=50;i++){
            int j = (int) myrand(0,99)  ;
            sum = sum+a[j]              ;
            //std::cout <<  j <<  "\t"  <<  a[j]  <<  std::endl;
        }
        average = sum/50.0  ;
        std::cout <<  "Average = "  <<  average <<  std::endl;
        hist6  ->  Fill(average);
    }
    c1  ->  cd(1) ;
    hist1  ->  Draw("HIST");
    c1  ->  cd(2) ;
    hist2  ->  Draw("HIST");

    c1  ->  cd(3) ;
    hist3  ->  Draw("HIST");
    c1  ->  cd(4) ;
    hist4  ->  Draw("HIST");
    c1  ->  cd(5) ;
    hist5  ->  Draw("HIST");
    c1  ->  cd(6) ;
    hist6  ->  Draw("HIST");
    return 0;
}
