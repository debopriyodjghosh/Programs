//ok.....2010 3rd day 2)Write a function using function template and multiply two matrices. Invoke the functions to operate two integer and two float matrices.Write a display function to show the result. Use suitable signatures for the functions.

#include <iostream.h>
#include <conio.h>

template <class T>
void matmul(T a[][10],T b[][10],int r1,int c1,int c2)
{
  T s=0;
  T c[10][10];
  for(int i=0;i<r1;i++)
  {
    for(int k=0;k<c2;k++)
      {
      for(int j=0;j<c1;j++)
	     s=s + a[i][j] * b[j][k];
      c[i][k]=s;
      s=0;
      }
  }
  cout<<"\n\tAnswer is............\n";
  for( i=0;i<r1;i++)
  {
    for(int k=0;k<c2;k++)
    {
      cout.width(5);
      cout << c[i][k];
    }
    cout<<"\n";
  }

}


void main()
{
  int a[10][10],b[10][10];
  int r1,c1,c2,i,j;
  cout<<"\nEnter row and column of 1st matrix: ";
  cin >> r1 >> c1;
  for(i=0;i<r1;i++)
   {
    for(j=0;j<c1;j++)
      {
      cout<<"\nEnter value: ";
      cin>>a[i][j];
      }
    }
  cout<<"\nEnter columns of 2nd matrix: ";
  cin>>c2;
  for(i=0;i<c1;i++)
    {
    for(j=0;j<c2;j++)
      {
      cout<<"\nEnter value: ";
      cin>>b[i][j];
      }
    }
  cout<<"\n\t1st matrix is..........\n";
  for( i=0;i<r1;i++)
    {
    for( j=0;j<c1;j++)
    {
      cout.width(4);
      cout<<a[i][j]<<"   ";
    }
    cout<<"\n";
  }
  cout<<"\n\t2nd matrix is............\n";
  for( i=0;i<c1;i++)
  {
    for( j=0;j<c2;j++)
    {
      cout.width(4);
      cout<<b[i][j]<<"   ";
    }
    cout<<"\n";
  }
  matmul(a,b,r1,c1,c2);
  getch();
 }

