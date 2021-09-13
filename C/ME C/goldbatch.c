#include<stdio.h>
int isprime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return i;
}

int main ()
{
    int i,t,prime;
    int n,start,end;
    printf("\n Enter a no : ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        prime =0;
        scanf("%d",n);
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
