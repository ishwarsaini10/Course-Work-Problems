#include<stdio.h>
#include<math.h>
#define pi (4.0*atan(1.0))
main()
{
int m=9,n=m-2,i,j,k;
float x[100],y[100],q[100],v[100],w[100],h[100],a[100][100],u,X[100],sum,x1,F[100],f1,f[100],g1,error;
FILE*fp1=NULL;
FILE*fp2=NULL;
fp1=fopen("ravinacubicsplineknown.txt","w");
fp2=fopen("knowntab.txt","w");
/*tabulated form of cos(x) between (0,pi)*/
x[1]=0.0;                                       /*tabulated form of cos(x) between (0,pi)*/
x[2]=30.0;
x[3]=45.0;
x[4]=60.0;
x[5]=90.0;
x[6]=120.0;
x[7]=135.0;
x[8]=150.0;
x[9]=180.0;
for(i=1;i<=m;i++)
{
    y[i]=cos(x[i]*pi/180.0);
    printf("%f\t\%f\n",x[i],y[i]);
}
/*coefficients of various f"(x)*/
for(i=1;i<=(m-2);i++)                              /*coefficients of various f"(x)*/
{
    q[i]=(x[i+1]-x[i]);
    v[i]=2.0*(x[i+2]-x[i]);
    w[i]=x[i+2]-x[i+1];
    h[i]=(6.0*(y[i+2]-y[i+1])/w[i])-(6.0*(y[i+1]-y[i])/q[i]);
}
/*Gauss Elimination Method*/                      /*Gauss Elimination Method*/
/*matrix formation*/                              /*matrix formation*/
for(i=1;i<=(m-2);i++)
{
    for(j=1;j<=(m-2);j++)
    {
        if(i==j)
        {
        a[i][j]=v[i];
        }
        else if((i-j)==1)
        {
        a[i][j]=q[i];
        }
        else if((i-j)==-1)
        {
        a[i][j]=w[i];
        }
        else
            {
                a[i][j]=0;
        }
        }
        a[i][m-1]=h[i];
        }
        /*print matrix*/                                           /*print matrix*/
        for(i=1;i<=(m-2);i++)
        {
        printf("\n");
        for(j=1;j<=(m-1);j++)
            {
            printf("%f\t",a[i][j]);
            }
            }
            printf("\n");
            /*triangularisation of the matrix*/                     /*triangularisation of the matrix*/
            for(k=1;k<=(n-1);k++)
            {
            for(i=k+1;i<=n;i++)
                {
                u=a[i][k]/a[k][k];
                printf("\n");
                for(j=1;j<=(n+1);j++)
                {
                a[i][j]=a[i][j]-u*a[k][j];
                }
                }
                }
                printf("\n");
                for(i=1;i<=n;i++)
                {
                printf("\n");
                for(j=1;j<=(n+1);j++)
                    {
                    printf("%f\t",a[i][j]);
                    }
                    }
                    printf("\n\n\n\n");
                    /*finding unknowns i.e. various f"(x)*/                       /*finding unknowns i.e. various f"(x)*/
                    X[n]=a[n][n+1]/a[n][n];
                    for(i=(n-1);i>0;i=i-1)
                    {
                        sum=0.0;
                        for(j=(i+1);j<=n;j++)
                        {
                            sum=sum+a[i][j]*X[j];
                        }
                        X[i]=(a[i][n+1]-sum)/a[i][i];
                    }
                    for(i=1;i<=n;i++)
                    {
                    X[i];
                    printf("X[i]=%f\n",X[i]);
                    }
                    printf("\n\n");
                    /*forming natural spline*/                                            /*forming natural spline*/
                    F[1]=0.0;
                    F[m]=0.0;
                    for(i=2;i<m;i++)
                    {
                        F[i]=X[i-1];
                    }
                 /*interpolating in range (x[1],x[m]) using cubic spline function f[i]*/                 /*interpolating in range (x[1],x[m]) using cubic spline function f[i]*/
                    for(x1=x[1];x1<=x[m];x1+=1.0)
                    {
                    for(i=1;i<=(m-1);i++)
                        {
                        f[i]=F[i]*pow((x1-x[i+1]),3.0)/(6.0*(x[i]-x[i+1]))+F[i+1]*pow((x1-x[i]),3.0)/(6.0*(x[i+1]-x[i]))+(y[i+1]/(x[i+1]-x[i])-F[i+1]*(x[i+1]-x[i])/6.0)*(x1-x[i])+(y[i]/(x[i]-x[i+1])-F[i]*(x[i]-x[i+1])/6.0)*(x1-x[i+1]);

                       if(x1>=x[i] && x1<x[i+1])
                            {
                                f1=f[i];
                                g1=cos(x1*pi/180.0);
                                error=fabs(g1-f1);
                                printf("x1=%f\t\t\f1=%f\t\g1=%f\t\error=%f\n",x1,f1,g1,error);
                                  fprintf(fp1,"%f\t\%f\t\%f\t\%f\n",x1,f1,g1,error);
                            }
                        }
                        }
                       /*plotting given tabulated data*/                               /*plotting given tabulated data*/
                        for(i=1;i<=m;i++)
                        {
                            fprintf(fp2,"%f\t\%f\n",x[i],y[i]);

                        }
                        fclose(fp1);
                        fclose(fp2);
                    }





