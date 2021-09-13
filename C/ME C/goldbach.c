#include<stdio.h>
#include<conio.h>
#include<math.h>
int primecheck(int);
int main()
{
int n,i,a,b,p,q;
printf("\n enter the limit");
scanf("%d",&n);
for(i=4;i<=n;i=i+2)
{
    for(a=2;a<i;a++)
    {
        p=primecheck(a);
    if(p==1)
        b=i-a;
    q=primecheck(b);
    if(q==1)
    {
    printf("\n %d+%d=%d",a,b,i);
    break;
    }
    else
        continue;
    }
}
return(0);
}
int primecheck(int x)
{
    int j;
    for(j=2;j<=sqrt(x);j++)
    {
        if(x%j==0)
            return(0);
    }
    return(1);
}
