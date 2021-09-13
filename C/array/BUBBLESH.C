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
for(j=0;j<=n-1-i;j++)
{
if(x[j+1]<x[j])
{
t=x[j];
x[j]=x[j+1];
x[j+1]=t;
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