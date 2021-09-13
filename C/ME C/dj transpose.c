#include<stdio.h>
main()
{
    int i,j,r,c,a[5][5],b[5][5];
    printf("\nenter the no of row & col :");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            {
                printf("\na[%d][%d] = ",i,j);
                scanf("%d",&a[i][j]);
            }
    }
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             b[j][i]=a[i][j];
         }
     }
      printf("\n");
       printf("\n");
      for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            {
                printf("%3d",b[i][j]);

            }
            printf("\n");
    }
    }
