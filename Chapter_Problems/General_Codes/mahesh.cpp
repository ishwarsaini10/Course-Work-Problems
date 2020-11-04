
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<math.h>
#include<iomanip>

int main(){
    int n = 30          ;
    float a[n]       ; // Array to store a of A.txt
    float b[n]      ; // Array to store a of B.txt
    float m          ; //  Stores the value of m for A
    float m2         ; //  Stores the value of m for B
    float std   ;     //  Stores the value of standard devaition for A
    float std2   ;    //  Stores the value of standard devaition for B
    float s1 = 0.0    ;
    float s2 = 0.0    ;
    std::ifstream  my_file ;
    std::ifstream  my_file2;
    my_file.open("A.txt");      //  Opens A.txt
    my_file2.open("B.txt");     //  Opens B.txt 

    for(int i=0;  i<n; i++){
        my_file >>  a[i];    //  Extracts a from A.txt
        my_file2 >>  b[i];  //  Extracts a from B.txt
        s1+=a[i];
        s2+=b[i];
    }
    m  = s1/n   ; // m of A.txt
    m2  = s2/n   ; //  m of B.txt
    s1   = 0.0     ;
    s2   = 0.0     ;
    for(int i=0;  i<n;  i++){
        s1+=pow((a[i]-m),2)                            ;
        s2+=pow((b[i]-m),2)                            ;
    }

    std = sqrt(s1/(n-1))  ;  //  std of A.txt
    std2 = sqrt(s2/(n-1))  ;  //  std of B.txt

    std::cout<<  "Mean A  =   " <<  m    <<  std::endl ;
    std::cout<<  "Uncertainity   for A=   " <<  std   <<  std::endl ;
    std::cout<<  "Mean B  =   " <<  m2   <<  std::endl ;
    std::cout<<  "Uncertainity   for B=   " <<  std2  <<  std::endl ;

    return 0;  
}

