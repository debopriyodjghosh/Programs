#include<stdio.h>
#include<stdlib.h>

void print (int r1,int c1,int a[10][10])
{
    int i,j;
     for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\n%5d",a[i][j]);
        }
    }

}
main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,l,m,r1,c1,r2,c2;
    printf("\n enter no of row and col of 1st mat ");
    scanf("%d%d",&r1,&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\n enter data : ");
            scanf("%d",&a[i][j]);
        }
    }
    print(r1,c1,a);
     printf("\n enter no of row and col of 1st mat ");
    scanf("%d%d",&r2,&c2);
        for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\n enter data : ");
            scanf("%d",&b[i][j]);
        }
    }
    print(r2,c2,b);
    if(r1!=c2)
      {
         printf("\nmultiplication not possible");
        exit(1);
      }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<r2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\nthe mul mat is ");
    print(r1,c2,c);

}
