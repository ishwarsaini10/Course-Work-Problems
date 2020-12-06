/********** Lagrange's interpolation ***************/

#include<iostream>
#include<math.h>
#include<fstream>
#include<stdio.h>
int main()
{
    int n,i,j;
    float mult,sum=0,x[10],f[10],a;
    std::ifstream myfile;
    myfile.open("input1.txt");
    std::cout<<"Enter no of sample points ? ";
    std::cin>>n;
    //std::cout<<"Enter all values of x and corresponding funtional value: "<<std::endl;
    for(i=0;i<n;i++)
        myfile>>x[i]>>f[i];
        
    std::cout<<"\nEnter your x for calculation : ";
    std::cin>>a;

    for(i=0;i<=n-1;i++)
    {
    mult=1;
        for(j=0;j<=n-1;j++)
        {
            if(j!=i)
            mult*=(a-x[j])/(x[i]-x[j]);
        }
        sum+=mult*f[i];
    }
    std::cout<<"\nThe estimated value of f(x) = "<<sum;
    return 0;
}

