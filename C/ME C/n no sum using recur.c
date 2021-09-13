#include<stdio.h>
int sum(int);
int sum(int n)
{
if(n==1)
{
return(1);
}
else
{
return n+sum(n-1);
}
}
main()
{
int x,y;
printf("\n enter the number:\n");
scanf("%d",&y);
x=sum(y);
printf("\n sum= %d",x);
}
