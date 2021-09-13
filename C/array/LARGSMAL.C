#include<stdio.h>
#include<conio.h>
void main()
{
int a[6],n,i,large,small;
clrscr();
printf("how many terms=");
scanf("%d",&n);
printf("enter values in array=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
small=a[0];
for(i=1;i<n;i++)
{
if(a[i]>large)
{
large=a[i];
}
else if(a[i]<small)
{
small=a[i];
}
}
printf("\n largea number from array is=%d",large);
printf("\n smalest number from array is=%d",small);
getch();
}
