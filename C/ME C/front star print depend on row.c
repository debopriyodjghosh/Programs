#include<stdio.h>
#include<conio.h>
void main()
{
    int r,j,i,n;
    printf("\tenter no of rows\t");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
            printf(" ");
        for(n=1;n<=2*i-1;n++)
        printf("*");
            
        printf("\n");
    }
    getch();
}


