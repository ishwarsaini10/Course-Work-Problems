#include<stdio.h>
#include<math.h>
#define rand_max_32 ((1u<<31)-1)
main()
{
int seed;
int i,j,a,N=1000,r,q,n,d,jlo,jhi;
float ran[N],random,p,F,PD[N],c,pr,u[N],pi=3.14;
FILE*fp=NULL;
fp=fopen("gaussiantouniform.txt","w");

/*generation of random numbers between (0,1)*/

jlo=0;                                       //generation of random numbers between (0,1)
jhi=1;
i=0;
printf("enter seed\n");
scanf("%d",&seed);
a=1103515245;
d=12345;
for(i=0;i<N;i++)
{
seed=(a*seed+d)%(rand_max_32);
random=jlo+fabs((jhi-jlo)*(seed))/(rand_max_32);
ran[i]=random;
//printf("ran[i]=%f i=%d\n",ran[i],i);
//fprintf(fp,"\%f %d\n",r[i],i);
}

/*Gaussian Distribution of random numbers*/
float mu,sigma,pd[N];
mu=0.0;
sigma=1.0;
for(i=0;i<(N-1);i++)                                //Gaussian Distribution of random numbers
{
    pd[i]=(sin(2.0*pi*ran[i]))*sqrt(-2.0*log(ran[i+1]));
    PD[i]=mu+sigma*pd[i];
 }
for(j=0;j<(N-1);j++)
	{
		//printf("ran=%f\t\PD=%f\t\j=%d\n",ran[j],PD[j],j);
		//fprintf(fp,"ran=%f\t\PD=%f\t\j=%d\n",ran[j],PD[j],j);
	}
	/*Gaussian to uniform distribution of random numbers*/
	for(j=0;j<(N-2);j++)                            //Gaussian to uniform distribution of random numbers
	{
	    u[j]=exp((-PD[j]*PD[j]-PD[j+1]*PD[j+1])/2.0);
	    printf("u=%f\t\j=%d\n",u[j],j);
	}
	/*bins formation*/

	int nbin;
	float bsize,bin[N];
	bsize=0.2;                                     //bins formation
	nbin=5;
	int freq[nbin];
	bin[0]=-0.0;
	for(j=0;j<nbin;j++)
    {
        bin[j+1]=bin[j]+bsize;
    }
    for(i=0;i<nbin;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<nbin;i++)
    {
	for(j=0;j<(N-2);j++)
	{
	    if(u[j]>bin[i] && u[j]<bin[i+1])
        freq[i]++;
	}
	}
	for(i=0;i<nbin;i++)
	{
	printf("freq=%d\t\t\i=%d\n",freq[i],i);
    fprintf(fp,"%d\t\t\%d\n",freq[i],i);
	}

	/*mean*/

	float sum=0.0,mean;
	for(j=0;j<(N-2);j++)                            //mean of the distribution
	{sum=sum+u[j];
	}
	mean=sum/(float)(N-2);
	printf("mean=%f\n",mean);
	//fprintf(fp,"mean=%f\n",mean);

	/*variance & standard deviation*/

	float sm,ms,s1=0.0,V,SD,SPD[N];
for(j=0;j<(N-2);j++)
{SPD[j]=pow(u[j],2);                            //variance & standard deviation of the distribution
}
for(j=0;j<(N-1);j++)
{s1+=SPD[j];
}
ms=s1/(float)(N-1);
sm=pow(mean,2);
V=ms-sm;
SD=sqrt(V);
printf("V=%f\t\SD=%f\n",V,SD);
//fprintf(fp,"V=%f\t\SD=%f\n",V,SD);

	fclose(fp);
}
