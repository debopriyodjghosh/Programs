#include<iostream.h>
#include<conio.h>
//using namespace std;

template <class T>
void swap(T &x,T &y)
{
  T temp;
  temp=x;
  x=y;
  y=temp;
}
void main()
{
   int a=10,b=20;
   swap(a,b);
   cout<<"a = "<<a;
   cout<<"\n b= "<<b;
   float c=10.5,d=11.5;
   swap(c,d);
   cout<<"\nc="<<c;
   cout<<"\nd="<<d;
   getch();

}