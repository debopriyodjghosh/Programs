//ok...2010 2nd day 2)Design a function arraysum using function template. The function should have two arguments. The first argument is of generic type and the second argument is the total no. of elements in the array. Run arraysum() on integer, float and double array elements. Write proper function to display result

#include<iostream.h>
#include<conio.h>

template<class T>
void arraysum(T a[],int n)
{
  for(int i=0;i<n;i++)
   {
    cout<<"\n\tEnter value: ";
    cin>>a[i];
   }
  cout<<"\n\tEntered elements are..........\n";
  for(i=0;i<n;i++)
    cout<<a[i]<<"   ";
  getch();
}

void main()
{
  int a[50],n;
  clrscr();
  cout<<"\n\tEnter no. of elements in integer array: ";
  cin>>n;
  arraysum(a,n);
  float b[50];
  cout<<"\n\tEnter no. of elements in float array: ";
  cin>>n;
  arraysum(b,n);
  double c[50];
  cout<<"\n\tEnter no. of elements in double array: ";
  cin>>n;
  arraysum(c,n);
}