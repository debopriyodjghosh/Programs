#include<stdio.h>
void main()
{
    int n,i,j,c,a[9][9];
    printf("\nEnter the size of magic squre : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\nMagicc squre is not possible");
        exit(0);
    }
    printf("\nThe magic squre for %d x %d is : \n\n",n,n);
    j=(n+1)/2;
    i=1;
    for(c=1;c<=n*n;c++)
    {
        a[i][j]=c;
        if(c%n==0)
        {
            i=i+1;
            continue;
        }
        if(i==1)
            i=n;
        else
        i=i-1;
        if(j==n)
            j=1;
        else
            j=j+1;
        continue;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n\n");
    }
    getch();
}

