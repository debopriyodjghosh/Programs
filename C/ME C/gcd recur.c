#include<stdio.h>
int gcd(int,int);
int gcd(int a,int b)
{
if(b==0)
return(a);
else
return(b,a%b);
}
main()
{
int x,y,z;
printf("\n enter two numbers:\n");
scanf("%d%d",&x,&y);
z=gcd(x,y);
printf("\n GCD= %d",z);
}
