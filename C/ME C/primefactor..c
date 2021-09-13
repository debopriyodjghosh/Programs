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
    int n,z,i;
    printf("enter any no : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0 && prime(i)==1)
            printf("%d,",i);
    }
}
