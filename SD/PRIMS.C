#include<stdio.h>
#include<conio.h>
void main()
{
float lcost[8],a[8][8];
int clost[8],i,j,k,min,n;
clrscr();
printf("Input number of vertices:");
scanf("%d",&n);
printf("\nInput weighted matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
  {
  printf("a[%d][%d]=",i,j);
  scanf("%f",&a[i][j]);
  }
for(i=2;i<n;++i)
{
lcost[i]=a[1][i];
clost[i]=1;
}
printf("Minimum cost spanning tree edges are :\n");
for(i=1;i<=n;++i)
{
min=lcost[2];
k=2;
for(j=3;j<=n;++j)
if(lcost[j]<min)
{
min=lcost[j];
k=j;
}
printf("%d  %d\n",k,clost[k]);
lcost[k]=200;
for(j=2;j<=n;++j)
if((a[k][j]<lcost[j])&&(lcost[j]<200))
{
lcost[j]=a[k][j];
clost[j]=k;
}
}
getch();
}