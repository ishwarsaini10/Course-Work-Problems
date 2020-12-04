// this program generates 100 random numbers b/w 0-20 and calculate their frequencies
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int freq[21]={0},x=0,i;
	FILE*data;
	data=fopen("random1.txt","w");
	if(data==NULL)
	printf("\n Error in opening file \n");
	else
	{
		for(i=0;i<100;i++)
		{
			x=rand()%21;
			freq[x]++;
		}
		for(i=0;i<=20;i++)
		{
			printf("%d \t %d \n",i,freq[i]);
			fprintf(data,"%d \t %d \n",i,freq[i]);
		}
	}
	fclose(data);
	return 0;
}
