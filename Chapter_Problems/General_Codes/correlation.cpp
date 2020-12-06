
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<math.h>
#include<iomanip>

int main(){
    int n = 10          ;
    float x[n]       ; // Array to store data of A.txt
    float y[n]       ; // Array to store data of A.txt
    float mean_x        ; //  Stores the value of mean for A
    float mean_y        ; //  Stores the value of mean for B
    float sum1  = 0.0   ;
    float sum2  = 0.0   ;
    float std_x         ;
    float std_y         ;
    float std_xy  = 0.0        ;
    std::ifstream  my_file ;
    my_file.open("data_for_correlation.txt");      //  Opens A.txt

    for(int i=0;  i<n; i++){
        my_file >>  x[i]  >>  y[i]  ;    //  Extracts data from A.txt
        sum1+=x[i];
        sum2+=y[i];
    }
    mean_x  = sum1/n   ; // Mean of A.txt
    mean_y  = sum2/n   ; //  Mean of B.txt
    for(int i=0;  i<n;  i++){
        std_xy+=(x[i]-mean_x)*(y[i]-mean_y) ;
        std_x+=pow((x[i]-mean_x),2)         ;
        std_y+=pow((y[i]-mean_y),2)         ;
    }

    float r = std_xy/(sqrt(std_x*std_y))    ;
    std::cout <<  "Correlation Coefficient  = " <<  r <<  std::endl;


    return 0;  
}

