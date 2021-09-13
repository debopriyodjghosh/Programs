#include<stdio.h>
main()
{
    int i,j,k,n,x=64;
    printf("\n enter the no : ");
    scanf("%d",&n);
        for(i=0;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
      {
            printf(" ");
      }
        for(k=1;k<=i;k++)
        {
            printf("%2c",x+i);
        }
        printf("\n");
    }
    x=x+i-1;
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
      {
            printf(" ");
      }
        for(k=i;k<n;k++)
        {
            printf("%2c",x-i);
        }
        printf("\n");
    }
}
