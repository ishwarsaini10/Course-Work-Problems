#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

double rand1(){
    return((double)rand()/RAND_MAX);
}
double myrand(double low, double high){
    return(low+(high-low)*rand1());
}


int main(){
    for(int i=1;i<=10;i++){
        printf("%g\t%g\n", rand1(), myrand(0,1));
    }
    return 0;
}
