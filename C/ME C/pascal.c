#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,p=1,n;
printf("\n enter the limit:");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
for(j=0;j<=n-1;j++)
printf("  ");
for(k=0;k<=i;k++)
{
if(i==0||k==0)
p=1;
else
p=p*(i-k+1)/k;
printf(" %d ",p);
}
printf("\n");
}
return 0;
}
