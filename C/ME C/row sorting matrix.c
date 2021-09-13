                 ROW SORTING MATRIX

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
for(k=0;k<r;k++)
{
for(i=1;i<c;i++)
{
for(j=0;j<c-i;j++)
{
if(a[k][j]>a[k][j+1])
{
t=a[k][j];
a[k][j]=a[k][j+1];
a[k][j+1]=t;
}
}
}
}
printf("\n new matrix \n");
display(a,r,c);
}
