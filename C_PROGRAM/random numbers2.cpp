// to generate random no. between 0-6
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,x;
	for(i=0;i<=20;i++)
	{
		x=rand();
		printf("x = %d \n",x);
	}
	getch();
}
