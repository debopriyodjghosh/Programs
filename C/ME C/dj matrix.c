#include<stdio.h>
#include<conio.h>

void main()
{
int m[5][5],n[5][5],o[5][5],i,j,r1,c1,r2,c2;
printf("\nEnter the no of rows and coloumn of 1st matrix : ");
scanf("%d\t%d",&r1,&c1);
printf("enter the elements rowwise of 1st matrix : ");

for(i=0;i<r1;i++)

    {
    for(j=0;j<c1;j++)
    scanf("%d",&m[i][j]);
    }


printf("the 1st matrix is : ");
for(i=0;i<r1;i++)
{
for(j=o;j<c1;j++)
    {
    printf("%d\t",m[i][j]);
    }
    printf("\n");
}

printf("\nEnter the no of rows and coloumn of 2nd matrix : ");
scanf("%d\t%d",&r2,&c2);
printf("enter the elements rowwise of 2nd matrix : ");

for(i=0;i<r2;i++)

    {
    for(j=0;j<c2;j++)
    scanf("%d",&n[i][j]);
    }



printf("the 2nd matrix is : ");
for(i=0;i<r2;i++)
{
for(j=o;j<c2;j++)
    {
    printf("%d\t",n[i][j]);
    }
    printf("\n");
}





    getch();
    }
