//program to read a plot1.txt file and store it in array
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i;
	float x[200],y[200];
	FILE*dat;
	dat=fopen("1-d.txt","r");
	for(i=0;i<120;i++)
	{
		fscanf(dat,"%f\t%f",&x[i],&y[i]);
		printf("%f\t\t%f\n",x[i],y[i]);
	}
	fclose(dat);
	getch();
}
