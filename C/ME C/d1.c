#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,sum=0,p,r;
    printf("\n Enter the number.\n");
    scanf("%d",&n);
    p=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(p==sum)
    {
        printf("\n %d is palindrome.",p);
    }
    else
    {
        printf("\n %d is not palindrome.",p);
    }
}
