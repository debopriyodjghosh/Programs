//ok....2010 1st day 2)Design a swap function using function template to perform swapping of two integers, floats and character values. Write suitable functions to display the result


#include<iostream.h>
#include<conio.h>

template<class T>
void swap(T &x,T &y)
{
  T z;
  z=x;
  x=y;
  y=z;
  display(x,y);
}
template<class T>
void display(T &x,T &y)
{
  cout<<"\n\tAfter Swapping a & b becomes..........";
  cout<<"\n\ta= "<<x;
  cout<<"\n\tb= "<<y;
}

void main()
{
  int a,b;
  clrscr();
  cout<<"\n\tEnter integer value for a: ";
  cin>>a;
  cout<<"\n\tEnter integer value for b: ";
  cin>>b;
  swap(a,b);
  float c,d;
  cout<<"\n\tEnter float value for a: ";
  cin>>c;
  cout<<"\n\tEnter float value for b: ";
  cin>>d;
  swap(c,d);
  char e,f;
  cout<<"\n\tEnter character value for a: ";
  cin>>e;
  cout<<"\n\tEnter character value for b: ";
  cin>>f;
  swap(e,f);
  getch();
}