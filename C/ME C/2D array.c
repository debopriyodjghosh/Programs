#include<stdio.h>
#include<conio.h>
void display(int b[10][10],int r,int c)
{
 	 int i,j;
 	 for(i=0;i<r;i++)
         {
 	  for(j=0;j<c;j++)
		  printf("%d",b[i][j]);
		  printf("\n");
  		  }
}

void display1(int b[][10],int r, int c)
    {
        int i,j;
        for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                printf("%d",b[i][j]);
                printf("\n");
            }
    }

void display2(int *b,int r, int c)
    {
        int i,j;
        for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                printf("%d",*(b+i*10+j));
                printf("\n");
            }
    }
void main()
{
    int a[10][10],m,n,i,j;
    printf("enter the number of row and column \n");
    scanf("%d%d",&m,&n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("enter data \n");
                scanf("%d",&a[i][j]);
            }
        }
    display(a,m,n);
    display1(a,m,n);
    display2(a,m,n);
    getch();
}
