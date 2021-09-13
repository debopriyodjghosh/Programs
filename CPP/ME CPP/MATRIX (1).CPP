//Matrix.............
#include<iostream.h>
#include<conio.h>
class MyMatrix
{
   private:
	    int a[3][3];
   public:
	    MyMatrix();

	    void input();
	    void show();
	    MyMatrix operator *(MyMatrix);
	    MyMatrix operator+(MyMatrix);
};
MyMatrix MyMatrix :: operator+(MyMatrix t)
{
   int i,j;
   MyMatrix temp;
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	temp.a[i][j]=a[i][j]+t.a[i][j] ;
      }
   }
   return temp;
}
MyMatrix ::MyMatrix()
{
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
     {
       a[i][j]=0;
     }
   }
}
void MyMatrix :: input()
{
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
     {
       cout<<"\nEnter value at a["<<i<<"]"<<"["<<j<<"] :";
       cin>>a[i][j];
     }
   }
}
MyMatrix MyMatrix :: operator *(MyMatrix t)
{
   MyMatrix temp;
   int i,j,k;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       temp.a[i][j]=0;
       for(k=0;k<3;k++)
       {
	 temp.a[i][j]=a[i][k]*t.a[k][j]+temp.a[i][j];
       }
     }
   }
   return temp;
}
void MyMatrix ::show()
{
  cout<<"\nThe Matrix is------>" ;
  for(int i=0;i<3;i++)
  {
    cout<<"\n";
    for(int j=0;j<3;j++)
    {
      cout<<"\t"<<a[i][j];
    }
  }
}
void main()
{
  MyMatrix ob1,ob2,ob3,ob4;
  clrscr();
  ob1.show();
  ob2.show();
  ob3.show();
  ob1.input();
  ob1.show();
  ob2.input();
  ob2.show();
  ob4=ob1+ob2;
  cout<<"\nMatrix additon.....";
  ob4.show();
  ob3=ob1*ob2;
  cout<<"\nAfter Multiplication....."  ;
  ob3.show();
  getch();
}