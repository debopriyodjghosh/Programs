	/*number and its power using function*/

#include<stdio.h>
#include<conio.h>
void main()
{
int power(int,int);
int n,p,a;
clrscr();
printf("enter the number and its power=");
scanf("%d\t%d",&n,&p);
a=power(n,p);
printf("\n power is=%d",a);
getch();
}
int power(int n,int p)
{
if(p==1)
{
return n;
}
else
{
return (n*power(n,p-1));
}
}