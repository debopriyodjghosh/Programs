#include<stdio.h>
#include<conio.h>

void main()
{
   int r, c, i, j,d=0, matrix[10][10], transpose[10][10];
   clrscr();
   printf("Enter the number of rows and columns of matrix ");
   scanf("%d%d",&r,&c);
   printf("Enter the elements of matrix \n");

   for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j< c ; j++ )
      {
	 scanf("%d",&matrix[i][j]);
      }
   }

   printf("original matrix is=\n");
    for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j< c ; j++ )
      {
	 printf("%d\t",matrix[i][j]);
      }
      printf("\n");
   }

   for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j < c ; j++ )
      {
	 transpose[j][i] = matrix[i][j];
      }
   }

   printf("Transpose of entered matrix :-\n");

   for( i = 0 ; i < c ; i++ )
   {
      for( j = 0 ; j < r ; j++ )
      {
	 printf("%d\t",transpose[i][j]);
      }
      printf("\n");
   }
   for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
   {
   if(matrix[i][j]!=transpose[i][j])
   {
   d=1;
   }
   }
   }
   if(d==1)
   {
   printf("not symetric");
   }
   else
   {
   printf("symetric");
   }

   getch();
}