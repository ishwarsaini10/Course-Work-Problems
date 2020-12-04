// program for chauvenet criterion

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main()
{
	int i;                     /* loop counter                   */
    int N;                     /* INPUT: Number of points        */
    double X[20];              /* x-coordinates of points        */
    double Y[20];              /* y-coordinates of points        */
    double Xmean;              /* Average value for x coord.     */
    double ym,y1,ysum=0,y4,std;              
    double xm=0;               /* Sum of X coordinate values     */
    double xsus,t1,n,prob;              
    printf("Please enter number N of data points:\n");
    scanf("%d",&N);
    printf("enter the value of probability\n");
    scanf("%lf",&prob);
    printf("enter the suspect value\n");
    scanf("%lf",&xsus);
    printf("\n*****Input of Data points*****\n");
    printf("Enter the values\n");
    for(i=1;i<=N;i++)
    {
    	scanf("%lf",&X[i]);
	}
	printf("\n The entered values are as follows\n");
	for(i=1;i<=N;i++)
	{
		printf("%lf\n",X[i]);
	} 
	 /* calculate X-mean value */

    for(i=1;i<=N;i++) 
	{
	  xm = xm + X[i];
    }
    Xmean=xm/N;
    printf("The mean of given points is : %lf\n",Xmean);
	/* calculate standard deviation */
	for(i=1;i<=N;i++) 
	{
	  ym = (X[i]-Xmean);
	  y1=pow(ym,2);
	  ysum=ysum+y1;
    }
    y4=(ysum/N);
    std=sqrt(y4);
    printf("The standard deviation of given points is : %lf\n",std);
    t1=abs(xsus-Xmean)/std;
    n=N*prob;
    if(n<0.5)
    {
 	     printf("Suspected value can be rejected\n");
    }
    else
    {
 	     printf("suspected value cannot be accepted\n");
    }
   getch();
}  
    
    

