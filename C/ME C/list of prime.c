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
    int x,y,i;
    printf("\nenter two nos : ");
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(prime(i)==1)
            printf("%3d",i);
    }
}


