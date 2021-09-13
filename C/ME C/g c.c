#include<stdio.h>
int checkprime(int n);
int main()
{
    int n,i,flag =0;
    printf("\n Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<n/2;++i)
    {
        if(checkprime(i)==1)
        {
            if(checkprime(n-i)==1)
            {
                printf("%d = %d + %d\n",n,i,n-i);
                flag =1;
            }
        }
    }
    if(flag==0)
    {
        printf("\nthe number %d can't be represented as sum of two prime numbers.",n);
        getch();
        return 0;
    }
}
int checkprime(int n)
{

    int i, isprime =1;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    return isprime;
}
