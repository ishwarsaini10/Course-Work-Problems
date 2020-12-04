//program to read a .txt file and store it in array
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i;
	float x[20],y[20];
	FILE*myfile;
	myfile = fopen("tut-5.txt","r");
	for(i=0;i<10;i++)
	{
		fscanf(myfile,"%f\t\t%f",&x[i],&y[i]);
		printf("%f\t\t%f\n",x[i],y[i]);
	}
	fclose(myfile);
	getch();
}
