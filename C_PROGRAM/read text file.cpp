// program to read a text file
#include<stdio.h>
#include<conio.h>
int main()
{
	float x[200];
	int i;
	FILE*file;
	file=fopen("test1.txt","r");
	for(i=0;i<120;i++)
	{
		fscanf(file,"%f",&x[i]);
		printf("%f\n",x[i]);
	}
	fclose(file);
	getch();
}
