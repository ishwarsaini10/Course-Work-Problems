#include<TRandom.h>
#include<TCanvas.h>
#include<TH1F.h>

void pission_dist(){
    float val;
    TH1 *hist  = new TH1F("hist", "Poisson", 20, 0, 20);
    TRandom *R  = new TRandom(time(0)); 
    for(int i=1;i<=1000;i++){
        val = (float)R->Gaus();
//        std::cout << (float)R->Poisson(8.4) <<  std::endl; 
        hist  ->  Fill(val);
    }
    hist  ->  Draw("HIST");
    return 0;
}
