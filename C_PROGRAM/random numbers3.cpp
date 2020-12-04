// to generate 100 random no. between 1-20
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,x;
	for(i=0;i<=100;i++)
	{
		x=(rand()%20+1);
		printf("%d \n",x);
	}
	getch();
}
