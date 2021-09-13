#include<stdio.h>
#include<conio.h>
#include<math.h>
#define maxsize 100
void main()
{
int i,n;
float value[maxsize],deviation,sum,sumsqr,mean,variance,std;
sum=sumsqr=n=0;
clrscr();
printf("input value: -1to end\n");
for(i=1;i<maxsize;i++)
{
scanf("%f",&value[i]);
if(value[i]==-1)
break;
sum=sum+value[i];
n=n+1;
}
mean=sum/(float)n;
for(i=1;i<=n;i++)
{
deviation=value[i]-mean;
sumsqr=sumsqr+deviation*deviation;
}
variance=sumsqr/(float)n;
std=sqrt(variance);
printf("\n number of item:%d\n",n);
printf("mean=%f\n",mean);
printf("standard deviation=%f\n",std);

getch();
}