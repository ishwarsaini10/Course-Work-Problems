/* Computer program to convert uniform distribution into gaussian distribution using CLT*/
# include <stdio.h>
# include<conio.h>
# include <math.h>
# include <stdlib.h>
int main()
 {
  double x1,x2,x3,x4,z;
  int i,c, count1, count2, count3, count4, count5, count6, count7, count8,count9,count10;
  count1=0, count2=0, count3=0, count4=0, count5=0, count6=0, count7=0, count8=0,count9=0,count10=0;
  double x,px;
  FILE*data3=NULL;
  data3=fopen("tut4.txt","w");
  for(i=0;i<=100;i++)
    {
  	    x = (double)rand()/(double)RAND_MAX;
  	    printf(" x = %f \n",x);
  	    fprintf(data3,"\t %f \n",x);
    }

  for(c=1; c<=10000; c++)
    {
       x1=(double)rand()/(double)RAND_MAX;
       x2= (double)rand()/(double)RAND_MAX;
       x3=(double)rand()/(double)RAND_MAX;
       x4= (double)rand()/(double)RAND_MAX;

       z=(x1+x2+x3+x4)/4;

       if (z>=0 && z<0.1)
           {
             count1++;
           }
       if (z>=0.1 && z<0.2)
          {
             count2++;
          }
       if  (z>=0.2 && z<0.3)
          {
             count3++;
          }
       if (z>=0.3 && z<0.4)
          {
             count4++;
          }
       if (z>=0.4 && z<0.5)
          {
             count5++;
          }
       if (z>=0.5 && z<0.6)
          {
             count6++;
          }
       if  (z>=0.6 && z<0.7)
          {
             count7++;
          }
       if (z>=0.7 && z<0.8)
          {
             count8++;
          }
       if(z>=0.8 && z<0.9)
          {
   	         count9++;
          }
       if(z>=0.9 && z<=1.0)
          {
   	         count10++;
          }
    }
  printf(" \n 0.0-0.1 \t %d\n 0.1-0.2 \t %d\n 0.2-0.3 \t %d\n 0.3-0.4 \t %d\n 0.4-0.5 \t %d\n 0.5-0.6 \t %d\n 0.6-0.7 \t %d\n 0.7-0.8 \t %d\n 0.8-0.9 \t %d\n 0.9-1.0 \t %d\n", count1, count2, count3, count4,count5, count6, count7, count8,count9,count10);
  fprintf(data3,"\n 0.0-0.1 \t %d\n 0.1-0.2 \t %d\n 0.2-0.3 \t %d\n 0.3-0.4 \t %d\n 0.4-0.5 \t %d\n 0.5-0.6 \t %d\n 0.6-0.7 \t %d\n 0.7-0.8 \t %d\n 0.8-0.9 \t %d\n 0.9-1.0 \t %d\n", count1, count2, count3, count4,count5, count6, count7, count8,count9,count10);
  getch(); 
 }
