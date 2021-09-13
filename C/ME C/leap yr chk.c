
#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("enter the year : ");
    scanf("%d",&n);
    if(n%100==0)
    {
        if(n%400==0)
            printf("\n leap year");
            else
                 printf("\n not leap year");
    }
    else if(n%4==0)
     printf("\n leap year");
    else
        printf("\n not leap year");
    getch();

    }
