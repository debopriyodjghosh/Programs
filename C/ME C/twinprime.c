#include<stdio.h>
int prime(int n);
int prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return (0);
        }

    }
    return(1);
}

main()
{
    int n,i=3,a=0;
    printf("\nenter any no : ");
    scanf("%d",&n);
    while(1)
    {
        if(prime(i)==1 && prime(i+2)==1)
        {
            printf("%d,%d\n",i,i+2);
            a++;
            if(a==n)
                break;
        }
        i+=2;
    }

}

