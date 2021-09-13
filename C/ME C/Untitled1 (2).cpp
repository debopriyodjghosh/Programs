#include<stdio.h>
int isprime(long long int n)
{
    long long int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return i;
}

int main (void)
{
    int i,t,prime;
    long long int n,start,end;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        prime =0;
        scanf("%lld",n);
        if(n<4)
            printf("no\n");
        else
        {
            if(n%2==0)
                printf("yes\n");
            else
                {
           start =2;
           end=n-2;
           while(start<=end)
           {
               if(isprime(start)&&isprime(end))
               {
                   printf("yes\n");
                   prime=1;
                   break;
               }
               else
               {
                   start ++;
                   end --;
               }
           }
           if(prime==0)
            printf("no\n");
        }
    }
}
return 0;
}

