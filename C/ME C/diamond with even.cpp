#include<stdio.h>
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,j,i,n;
    printf("\tenter no of rows\t");
    scanf("%d",&r);
    for(i=1;i<r/2+1;i++)
    {
        for(j=1;j<=r/2-i;j++)
            printf(" ");
        for(n=1;n<=2*i-1;n++)
        printf("*");

        printf("\n");
    }
    for(i=1;i<=r/2+1;i++)
    {
        for(j=1;j<=i-1;j++)
            printf(" ");
        for(n=1;n<=r-(2*i-1);n++)
        printf("*");

        printf("\n");
    }


    getch();
}



