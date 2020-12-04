 /*
 (Newton Interpolation Polynomial).

 To construct and evaluate the Newton Polynomial of degree <= N
 that passes through  (x_k,y_k) = (x_k, f(x_k))  for k = 0,1,....,N:

 P(x)  =  d_(0,0) + d_(1,1)*(x - x_0) + d_(2,2)*(x - x_0)*(x - x_1)
      
                  + ... + d_(N,N)*(x - x_0)*(x -x1)...(x - x_(N-1))

 where 

                                   d_(k,j-1) - d(k-1,j-1)
 d_(k,0)  =  y_k  and  d_(k,j) =  ------------------------ .
                                         x_k - x_(k-j)

*/   

#include<math.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX 20

int main(void)
{

int N;                         /* Degree of P(x)                   */
int K, J;                      /* Loop counters                    */
double X[MAX], Y[MAX];         /* INPUT : Abscissas of the points  */
                               /* INPUT : Ordinates of the points  */
double Sum;                    
double D[MAX][MAX];            /* Array                            */
double XD;                     /* Independent variable             */
           
       

    do
    {    
      printf("Please enter degree of P[x] (Not > 20)\n");
      scanf("%d", &N);
    } while(N > MAX);
       printf("Degree of P[x] as entered is : %d\n", N);
     

    for( J = 0; J <= N; J++) 
    {
     printf("Please enter : x_%d\n",J);
     scanf("%lf, %lf", &X[J]);
     
    }
    for(J=0;J<=N;J++)
    {
    	printf("Please enter : y_%d\n",J);
    	scanf("%lf",&Y[J]);
	}


    for( K = 0; K <= N; K++) D[K][0] = Y[K];

    for( J = 1; J <= N; J++) 
    {
        for( K = J; K <= N; K++) 
        {
            D[K][J] = ( D[K][J-1] - D[K-1][J-1] ) / ( X[K] - X[K-J] );
        }
    }
     
     printf("Please enter the independent variable X :\n");
     scanf("%lf", &XD);

     Sum = D[N][N];
     for( K = N-1; K >= 0; K--) Sum =Sum*(XD-X[K])+D[K][K];

     printf("The value of the Newton Polynomial P[%lf] is %lf:\n", XD, Sum);

     printf("-----------------------------------------------------\n");
     printf(" No.    x_No.        y_No.\n");
     for(K = 0; K <= N; K++) printf("%d  %lf  %lf\n",K, X[K], Y[K]);
    

}

