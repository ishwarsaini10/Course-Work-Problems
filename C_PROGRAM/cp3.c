/* Computer program for CLT for 4 random variables*/
# include <stdio.h>
# include <math.h>
# include <stdlib.h>

main()
 {
 float x,y,y1,x1,y2,y3, x2, x3,z;
  int c, count1, count2, count3, count4, count5, count6, count7, count8;
count1=0, count2=0, count3=0, count4=0, count5=0, count6=0, count7=0, count8=0;

 for(c=1; c<=10000; c++)
    {
  x=rand();
  y=x/RAND_MAX;
  x1= rand();
  y1=x1/RAND_MAX;
  x2=rand();
  y2=x/RAND_MAX;
  x3= rand();
  y3=x1/RAND_MAX;

  z=y+y1+y2+y3;

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
if (z>=2.0 && z<2.5)
   {
     count5++;
    }
if (z>=2.5 && z<3.0)
   {
     count6++;
    }
if  (z>=3.0 && z<3.5)
   {
     count7++;
    }
if (z>=3.5 && z<4.0)
   {
     count8++;
 }
}
printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", count1, count2, count3, count4,count5, count6, count7, count8);

}
