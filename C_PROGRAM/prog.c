#include<stdio.h>
#include<math.h>
main()
{
 int i,j,k,m,n, sum=0, sum1=0, sum2=0, sum3=0, C[10][10], S[10][10], Y[10][10], R[10][10], P[10][10], T[10][10],V[10][10], X[10][10],Q[10][10], Z[10][10];
 float  det=0, det1=0;
 printf("Enter the no. of rows and columns of C matrix \n");
 scanf("%d %d", &m , &n);
 printf("Enter elements of C matrix\n");
 for(i=0; i<m; i++)
 {
  for( j=0; j<n; j++)
    {
     scanf("%d", &C[i][j]);
    }
  }
 for(i=0; i<m; i++)
   {
    for(j=0; j<n; j++)
      {
      S[j][i]= C[i][j];
      }
    }
printf(" Transpose of C is S i.e. \n");
  for(i=0; i<n ; i++)
    {
     for(j=0; j<m ; j++)
       {
     printf("%d\t", S[i][j]);
       }
     printf("\n");
    }
 printf("Enter elements of V matrix\n");
    for(i=0; i<3; i++)
      {
       for(j=0; j<3; j++)
         {
          scanf("%d", &V[i][j]);
         }
       }
    for(i=0; i<3; i++)
      {
        det = det + ( V[0][i]* (V[1][(i+1)%3]*V[2][(i+2)%3]- V[1][(i+2)%3]* V[2][(i+1)%3]));
      }
    printf("\n Inverse of V is X i.e. \n"); 
   for(i=0; i<3 ; i++)
     {
      for(j=0; j<3; j++) 
        {
         X[i][j]= (((V[(i+1)%3][(j+1)%3]* V[(i+2)%3][(j+2)%3]) - (V[(i+1)%3][(j+2)%3]*V[(i+2)%3][(j+1)%3]))/ det);
         printf("%d\t", X[i][j]);
        }
       printf("\n");
      }
   if(m!=3)
    {
     printf("Matrix multiplication is not possible\n");
    }
   else
     {
      for(i=0; i<n; i++)
      for(j=0; j<3; j++)
         P[i][j]=0;
      for(i=0; i<n; i++)
        {
        for(j=0; j<3; j++)
          {
           sum=0;
           for(k=0; k<m; k++)
            sum = sum + S[i][k] * X[k][j];
            P[i][j]=sum;
          }
        }
      }
   printf("The Matrix P=SX is \n");
   for(i=0; i<n; i++)
     {
      for(j=0; j<3 ; j++)
        {
         printf("%d\t", P[i][j]);
        }
     printf("\n");
      }
   for(i=0; i<n ; i++)
   for(j=0; j<n ; j++)
      T[i][j]=0;
   for(i=0; i<n; i++)
     {
      for(j=0; j<n; j++)
        {
         sum1=0;
         for(k=0; k<3; k++)
         sum1 = sum1 + P[i][k] * C[k][j];
         T[i][j]=sum1;
        }
      }
    printf("The Matrix T=PC is  \n");
   for(i=0; i<n; i++)
     {
      for(j=0; j<n ; j++)
        {
         printf("%d\t", T[i][j]);
        }
    printf("\n");
      }
  for(i=0; i<n; i++)
   {
     det1 = det1 + ( T[0][i]* (T[1][(i+1)%n]*T[2][(i+2)%n]- T[1][(i+2)%n]* T[2][(i+1)%n]));
   }
  printf("\n Inverse of T is Q i.e. \n"); 
   for(i=0; i<n ; i++)
     {
      for(j=0; j<n; j++) 
        {
         Q[i][j]= (((T[(i+1)%n][(j+1)%n]* T[(i+2)%n][(j+2)%n]) - (V[(i+1)%n][(j+2)%n]*V[(i+2)%n][(j+1)%n]))/ det1);
         printf("%d\t", Q[i][j]);
        }
       printf("\n");
     }

  printf("Enter elements of Y matrix \n");
  for(i=0; i<m; i++)
    {
     for(j=0; j<1; j++)
       {
       scanf("%d", &Y[i][j]);
       }
    }
  for(i=0; i<n; i++)
  for(j=0; j<1; j++)
    R[i][j]=0;
  for(i=0; i<n; i++)
    {
    for(j=0; j<1; j++)
      {
       sum2=0;
      for(k=0; k<3; k++)
      sum2 = sum2 + P[i][k] * Y[k][j];
      R[i][j]=sum2;
      }
    }
  printf("The Matrix R=PY is  \n");
  for(i=0; i<n; i++)
     {
      for(j=0; j<1 ; j++)
        {
         printf("%d\t", R[i][j]);
        }
      printf("\n");
     }  
 for(i=0; i<n; i++)
 for(j=0; j<1; j++)
    Z[i][j]=0;
  for(i=0; i<n; i++)
    {
    for(j=0; j<1; j++)
      {
       sum3=0;
      for(k=0; k<n; k++)
       sum3 = sum3 + Q[i][k] * R[k][j];
       Z[i][j]=sum3;
       }
     }
  printf("The Matrix Z=QR is  \n");
  for(i=0; i<n; i++)
     {
      for(j=0; j<1 ; j++)
        {
         printf("%d\t", Z[i][j]);
        }
      printf("\n");
      }   
 return 0;
 }


   



