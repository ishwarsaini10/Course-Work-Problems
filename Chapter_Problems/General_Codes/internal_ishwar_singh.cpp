
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<math.h>
#include<iomanip>

int main(){
    int n = 30          ;
    float data[n]       ; // Array to store data of A.txt
    float data2[n]      ; // Array to store data of B.txt
    float mean          ; //  Stores the value of mean for A
    float mean2         ; //  Stores the value of mean for B
    float stdev   ;     //  Stores the value of standard devaition for A
    float stdev2   ;    //  Stores the value of standard devaition for B
    float sum = 0.0    ;
    float sum2 = 0.0    ;
    std::ifstream  my_file ;
    std::ifstream  my_file2;
    my_file.open("A.txt");      //  Opens A.txt
    my_file2.open("B.txt");     //  Opens B.txt 

    for(int i=0;  i<n; i++){
        my_file >>  data[i];    //  Extracts data from A.txt
        my_file2 >>  data2[i];  //  Extracts data from B.txt
        sum+=data[i];
        sum2+=data2[i];
    }
    mean  = sum/n   ; // Mean of A.txt
    mean2  = sum2/n   ; //  Mean of B.txt
    sum   = 0.0     ;
    sum2   = 0.0     ;
    for(int i=0;  i<n;  i++){
        sum+=pow((data[i]-mean),2)                            ;
        sum2+=pow((data2[i]-mean),2)                            ;
    }

    stdev = sqrt(sum/(n-1))  ;  //  std of A.txt
    stdev2 = sqrt(sum2/(n-1))  ;  //  std of B.txt

    std::cout<< std::setprecision(2) <<  "Best Estimate for A  =   " <<  mean    <<  std::endl ;
    std::cout<< std::setprecision(2) <<  "Uncertainity   for A=   " <<  stdev   <<  std::endl ;
    std::cout<< std::setprecision(2) <<  "Best Estimate for B  =   " <<  mean2   <<  std::endl ;
    std::cout<< std::setprecision(2) <<  "Uncertainity   for B=   " <<  stdev2  <<  std::endl ;

    return 0;  
}

