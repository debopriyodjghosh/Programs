#include<stdio.h>
main()
{
static int x[20][20],i,j,k,n;
printf("\n how many row: ");
scanf("%d",&n);
x[0][0]=1;
for(i=1;i<n;i++)
{
x[i][0]=1;
for(j=1;j<=i;j++)
{
x[i][j]=x[i-1][j]+x[i-1][j-1];
}
}
for(i=0;i<n;i++)
{
for(k=0;k<n-i;k++)
{
 printf(" ");
}
for(j=0;j<=i;j++)
{
printf("%2d",x[i][j]);
}
printf("\n");
}
}
