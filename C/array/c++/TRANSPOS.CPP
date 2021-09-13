	/*transpose of matrix*/

#include<iostream.h>
#include<conio.h>

int main()
{
   int r, c, i, j, matrix[10][10], transpose[10][10];
   clrscr();
   cout<<"Enter the number of rows and columns of matrix ";
   cin>>r>>c;
   cout<<"Enter the elements of matrix \n";
 
   for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j< c ; j++ )
      {
	 cin>>matrix[i][j];
      }
   }

   cout<<"original matrix is=\n";
    for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j< c ; j++ )
      {
	 cout<<"\t"<<matrix[i][j];
      }
      cout<<"\n";
   }

   for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j < c ; j++ )
      {
	 transpose[j][i] = matrix[i][j];
      }
   }

   cout<<"Transpose of entered matrix :-\n";

   for( i = 0 ; i < c ; i++ )
   {
      for( j = 0 ; j < r ; j++ )
      {
	 cout<<"\t"<<transpose[i][j];
      }
      cout<<"\n";
   }

   getch();
   return 0;
}