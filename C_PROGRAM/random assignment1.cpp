// this program generates 100 random numbers b/w 0-1 and calculate their frequencies
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int freq[100]={0},i;
	double x[100]={0};
	FILE*data;
	data=fopen("random2.txt","w");
	if(data==NULL)
	printf("\n Error in opening file \n");
	else
	{
		for(i=0;i<100;i++)
		{
			x[i]=((double)rand()/(double)RAND_MAX);
			freq[i]++;
		}
		for(i=0;i<=100;i++)
		{
			printf("%f \t %d \n",x[i],freq[i]);
			fprintf(data,"%f \t %d\n",x[i],freq[i]);
		}
	}
	fclose(data);
	return 0;
}
