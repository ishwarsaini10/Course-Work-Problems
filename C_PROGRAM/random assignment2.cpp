// this program generates 1000 random numbers b/w 0-200 and calculate their frequencies
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int freq[201]={0},x=0,i;
	FILE*data;
	data=fopen("random2.txt","w");
	if(data==NULL)
	printf("\n Error in opening file \n");
	else
	{
		for(i=0;i<1000;i++)
		{
			x=rand()%201;
			freq[x]++;
		}
		for(i=0;i<=200;i++)
		{
			printf("%d \t %d \n",i,freq[i]);
			fprintf(data,"%d \t %d \n",i,freq[i]);
		}
	}
	fclose(data);
	return 0;
}
