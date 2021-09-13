#include<stdio.h>
#include<conio.h>
void main()
{
int x[100],i,n,j,t;
clrscr();
printf("enter how many terms in array=");
scanf("%d",&n);
printf("\nenter the value in array=");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
printf("\n original array is=");
for(i=0;i<n;i++)
{
printf("%d\n",x[i]);
}
j=n-1;
for(i=0;i<j;i++)
{
t=x[i];
x[i]=x[j];
x[j]=t;
j--;
}
printf("\n reverse array is=\n");
for(i=0;i<n;i++)
{
printf("%d\n",x[i]);
}
getch();
}