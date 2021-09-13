#include <stdio.h>
#include<conio.h>
void main()
{
    int a[5],j,i,n=0;
    printf("enter how many no");
    scanf("%d",&i);

    for(j=0;j<i;j++)
    {
        printf("enter data to be stored\n");
        scanf("%d",&a[j]);

    }
        for(j=0;j<i;j++)
        {
           n = n+a[j];
        }
         printf("the sum of data stored in array %d\n ",n);
    getch();
}


