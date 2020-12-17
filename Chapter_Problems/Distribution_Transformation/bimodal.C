
// program to convert uniform distribution into gaussian using box-muller transformation
# include <stdio.h>
# include <math.h>
# include <stdlib.h>

/* ROOT includes */
#include<TH1.h>
#include<TRandom.h>

int  bimodal(){
    TH1 *hist1  = new TH1F("hist1", "abc",100,-5,20);
    TH1 *hist2  = new TH1F("hist2", "abc",100,-5,20);
    TH1 *hist  = new TH1F("hist", "abc",1000,-5,20);
    TH1 *check_hist  = new TH1F("chist", "Check",1000,-5,20);
//    TH1 *hist = new TH1F();
    TRandom r;

    for(int i=0;i<1000;i++){
        hist1 ->  Fill(r.Gaus(5,1));
        hist2 ->  Fill(r.Gaus(12,1));
    }
    TList *list = new TList;
    list  ->  Add(hist1);
    list  ->  Add(hist2);
    
    hist  ->  Merge(list);
    hist->Draw();
    int n = hist->GetNbinsX();

    for(int i = 0; i<n; i++){
        check_hist  ->  Fill(hist->GetEntries());
    }
//    check_hist  ->  Draw();


    return 0;
}
