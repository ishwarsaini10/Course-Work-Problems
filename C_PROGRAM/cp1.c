/* Computer program for CLT for 2 random variables*/
# include <stdio.h>
# include <math.h>
# include <stdlib.h>

main()
 {
 float x,y,y1,x1,z;
  int c,count1, count2, count3, count4;
  count1=0, count2=0, count3=0, count4=0;

 for(c=1; c<=10000; c++)
    {
  x=rand();
  y=x/RAND_MAX;
  x1= rand();
  y1=x1/RAND_MAX;
  z=y+y1;

if (z>=0 && z<0.5)
   {
     count1++;
    }
if (z>=0.5 && z<1.0)
   {
     count2++;
    }
if  (z>=1.0 && z<1.5)
   {
     count3++;
    }
if (z>=1.5 && z<2.0)
   {
     count4++;
    }
} 
printf("%d\t %d\t %d\t %d\n", count1, count2, count3, count4);
    
   }

