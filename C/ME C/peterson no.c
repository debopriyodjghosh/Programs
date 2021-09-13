#include<stdio.h>
int sum(int n);
int fact(int a);
int sum(int n)
{
    int a,s=0;
    while(n!=0)
    {
        a=n%10;
        s=s+fact(a);
                n=n/10;
    }
    return (s);
}
int fact(int a)
{
    int f=1,i;
    for(i=2;i<=a;i++)
    {
        f=f*i;
    }
    return (f);
}
main()
{
    int n,d,r=100;
    while(r<=999)
    {
        n=r;
        d=sum(r);
        if(n==d)
            printf("\n%d",n);
        r++;
    }
}
