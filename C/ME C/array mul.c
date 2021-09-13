#include<stdio.h>

main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
    printf("enter the no of 1st array row and col :\n");
    scanf("%d%d",&r1,&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\nenter data :");
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }


    printf("enter the no of 2nd array row and col :\n");
    scanf("%d%d",&r2,&c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\nenter data :");
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }

 printf("\nafter multiplication the array is :\n");

    if(c1!=r2)
    {
        printf("\nmultiplication not possible");
    }
else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }

        }
    printf("\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }

    }

}
