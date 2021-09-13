            COLUMN SORTING MATRIX

#include<stdio.h>
void read(int x[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n x[%d][%d]=",i,j);
scanf("%d",&x[i][j]);
}
}
}
void display(int x[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%4d",x[i][j]);
}
printf("\n");
}
}
main()
{
int a[10][10],i,j,k,r,c,t;
printf("\n enter the row & column:\n");
scanf("%d%d",&r,&c);
printf("\n matrix \n");
read(a,r,c);
for(k=0;k<c;k++)
{
for(i=1;i<r;i++)
{
for(j=0;j<r-i;j++)
{
if(a[j][k]>a[j+1][k])
{
t=a[j][k];
a[j][k]=a[j+1][k];
a[j+1][k]=t;
}
}
}
}
printf("\n new matrix \n");
display(a,r,c);
}
