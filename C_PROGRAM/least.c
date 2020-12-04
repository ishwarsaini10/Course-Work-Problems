#include<stdio.h>
#include<math.h>
main()
{
 int i,j,k,m,n,l,c,d, sum4=0, sum1=0, sum2=0, sum3=0;
 float C[10][10], S[10][10], Y[10][10], R[10][10], P[10][10], T[10][10],U[10][10],V[10][10], X[10][10],Q[10][10], Z[10][10],ratio,ratio1,a;
 printf("Enter the no. of rows and columns of C matrix \n");
 scanf("%d %d", &m , &n);
 printf("Enter elements of C matrix\n");
 for(i=0; i<m; i++)
 {
  for( j=0; j<n; j++)
    {
     scanf("%f", &C[i][j]);
    }
  }
/* for c transpose =s */
 for(i=0; i<=m; i++)
   {
    for(j=0; j<=n; j++)
      {
      S[j][i]= C[i][j];
      }
    }

/* for v and v inverse=T */

printf("Enter order of error matrix: ");

    scanf("%d", &k);

    printf("Enter the matrix: \n");

    for(i = 0; i < k; i++){

        for(j = 0; j < k; j++){

            scanf("%f", &V[i][j]);
         }

    }
       for(i = 0; i < k; i++){

        for(j = 0; j < k; j++){

            T[i][j]= V[i][j];
         }

    }

    for(i = 0; i < k; i++){

        for(j = k; j < 2*k; j++){

            if(i==(j-k))

                T[i][j] = 1.0;

            else

                 T[i][j] = 0.0;

        }

    }

    for(i = 0; i < k; i++){

        for(j = 0; j < k; j++){

            if(i!=j){

                ratio = T[j][i]/T[i][i];

                for(l = 0; l < 2*k; l++){

                    T[j][l] -= ratio * T[i][l];

                }

            }

        }

    }

    for(i = 0; i < n; i++){

        a = T[i][i];

        for(j = 0; j < 2*k; j++){

            T[i][j] /= a;

        }

    }

   
 
/* for finding c'v-1=R*/
if (m != k)
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
    for (i = 0; i < n; i++) {
      for (j = 0; j < k; j++) {
        for (l = 0; l < k; l++) {
          sum1 = sum1 + S[i][l]*V[l][j];
        }
 
         R[i][j] = sum1;
        sum1 = 0;
      }
    }
 }
   
 
  /* for finding c'v-1c or RC=U */

for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        for (l = 0; l < m; l++) {
          sum2 = sum2 + S[i][l]*V[l][j];
        }

 
         U[i][j] = sum2;
        sum2 = 0;
      }
    }
 
    
/* U-1=X*/

for(i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            X[i][j]= U[i][j];
         }

    }

    for(i = 0; i <= n; i++){

        for(j = n; j <= 2*n; j++){

            if(i==(j-n))

                X[i][j] = 1.0;

            else

                 X[i][j] = 0.0;

        }

    }

    for(i = 0; i <= n; i++){

        for(j = 0; j <= n; j++){

            if(i!=j){

                ratio1 = X[j][i]/X[i][i];

                for(l = 0; l < 2*n; l++){

                    X[j][l] -= ratio1 * X[i][l];

                }

            }

        }

    }

    for(i = 0; i <= n; i++){

        a = T[i][i];

        for(j = 0; j < 2*n; j++){

            X[i][j] /= a;

        }

    }

    
/* Y and c'V-1Yor RY=Z */
   
printf("Enter elements of Y matrix \n");
  for(i=0; i<k; i++)
    {
     for(j=0; j<1; j++)
       {
       scanf("%f", &Y[i][j]);
       }
    }
 
    for (i = 0; i < n; i++) {
      for (j = 0; j < 1; j++) {
        for (l = 0; l < k; l++) {
          sum3 = sum3 + R[i][l]*Y[l][j];
        }
 
        Z[i][j] = sum3;
        sum3 = 0;
      }
    }
 
 
  /* XZ=Q */

    for (i = 0; i < n; i++) {
      for (j = 0; j < 1; j++) {
        for (l = 0; l < n; l++) {
          sum4 = sum4 + X[i][l]*Z[l][j];
        }
 
        Q[i][j] = sum4;
        sum4 = 0;
      }
    }
 
    printf("desired parameters are:-\n");
 
    for (i = 0; i < n; i++) 
     {
      for (j = 0; j < 1; j++)
      {
        printf("%f\t", Q[c][d]);
      }  
      printf("\n");
     }
 
  return 0;
}

