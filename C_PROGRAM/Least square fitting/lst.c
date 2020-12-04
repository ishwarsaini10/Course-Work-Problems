// Algorithm 5.1 (Least-Squares Line).
// To  construct the least-squares line  y = Ax + B  that fits the
// N  data points (x_1,y_1),...,(x_N,Y_N).

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*  Main program for algorithm 5.1  */

    int main()

{
    int K;                     /* loop counter                   */
    int N;                     /* INPUT: Number of points        */
    double A, B;               /* Slope and Y-intersection       */
    double X[20];              /* x-coordinates of points        */
    double Y[20];              /* y-coordinates of points        */
    double Xmean;              /* Average value for x coord.     */
    double Ymean;              /* Average value for y coord.     */
    double xm,xsq,del;               /* Sum of X coordinate values     */
    double SumXY;              /* Sum of product X*Y             */

    
    printf("Please enter number N of data points:\n");
    printf("EXAMPLE: N = 5, so type: 5\n");
    scanf("%d",&N);
    

    printf("The number of data points  N =  %d\n", N);
    printf("----------------------------------------------\n");

        printf("INPUT of data points :\n");
        printf("Example : x = -2 and y = 1, so type : -2 1\n");
        printf(" \n");

    for(K = 1; K <= N; K++)
    {
        printf("data point number %d please.\n",K);
        scanf("%lf %lf", &X[K-1],&Y[K-1]);
    }

    Xmean = 0.0;
   xm=0.0000;
    /* calculate X-mean value */

    for(K = 1; K <= N; K++) 
	{
	Xmean = Xmean + X[K-1];
    
    xsq=X[K-1]*X[K-1];
    xm=xm+xsq;
}


    Ymean = 0.0;

    /* calculate Y-mean value */

    for(K = 1; K <= N; K++) 
	{
	Ymean = Ymean + Y[K-1];
    
}

    //SumX = 0.0;

    /* Sum (x_k - Xmean) squared */
  SumXY = 0.0;
    for(K = 1; K <= N; K++) 
	{
	SumXY = SumXY + X[K-1]*Y[K-1];
}

        del=N*xm-pow(Xmean,2);
    
    A =(xm*Ymean-Xmean*SumXY)/del;         /* Compute the slope          */
    B = (N*SumXY-Xmean*Ymean)/del;  /* Compute the y-intersection */


    printf("----------------------------------------------\n");
    printf(" Least-square line y = Ax + B\n");
    printf(" The coefficients are :\n");
    printf(" A = %lf and B = %lf .\n", A, B);
    printf("----------------------------------------------\n");

}   /* End of main programm */

