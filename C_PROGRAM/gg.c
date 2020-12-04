#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
 main()
{
    int x[100], y[100], p[100];
    int k,f,n,i,j=1,f1=1,f2=0;
    printf("\nEnter the number of observations:\n");
    scanf("%d", &n);
 
    FILE *fk;
    fk=fopen("g.txt","r");
    if(fk!=NULL)
    {
    for(i=1;i<=n;i++)
    {
    	fscanf(fk,"%lf\t\t %lf\n",&x[i],&y[i]);
    	
	}
    }
     fclose(fk);
	for(i=1;i<=n;i++)
	{
		printf("%lf   %lf\n",x[i],y[i]);
	}
 
    f=y[1];
    printf("\nEnter the value of 'k' in f(k) you want to evaluate:\n");
    scanf("%d", &k);
 
    do
    {
        for (i=1;i<=n-1;i++)
        {
            p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
            y[i]=p[i];
        }
        f1=1;
        for(i=1;i<=j;i++)
            {
                f1*=(k-x[i]);
            }
        f2+=(y[1]*f1);
        n--;
        j++;
    }
 
    while(n!=1);
    f+=f2;
    printf("\nf(%d) = %d", k , f);
    
}
