#include<stdio.h>
#include<conio.h>
void main()
{
int x[100],n,i,j,t;
clrscr();
printf("how many elements in array=");
scanf("%d",&n);
printf("\nenter the value of array=");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(x[j]<x[i])
{
t=x[i];
x[i]=x[j];
x[j]=t;
}
}
}
printf("array after shorting are=");
for(i=0;i<n;i++)
{
printf("\n%d",x[i]);
}
getch();
}
