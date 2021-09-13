
#include<stdio.h>
main()
{
    int i,j,k,n,m;
    printf("enter the range : ");
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%100==0)
    {
        if(i%400==0)
            printf("\n %d is leap year",i);
            else
                 printf("\n %d not leap year",i);
    }
    else if(i%4==0)
     printf("\n %d is leap year",i);
    else
        printf("\n %d not leap year",i);
    }

    getch();

    }
