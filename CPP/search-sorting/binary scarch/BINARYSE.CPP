//#define max 10
#include<conio.h>
#include<iostream>
using namespace std;
template <class t>
class array
{
  private : t arr[10];
	    int count;
  public : array();
	   void add(t);
	   void search(t);
	   void display();
};
template <class t> array<t> :: array()
{
 count=0;
}
template <class t> void array<t> :: add (t item)
{
  if(count < 10)
  {
    arr[count] = item;
    count++;
  }
  else
  cout<<"\n Array is full";
}
template <class t> void array<t> :: display()
{
  for(int i=0;i<count;i++)
  cout<<arr[i]<<" ";
}
template<class t>void array<t> :: search(t item)
{
  int low,high,mid;
  low=0;
  high=count-1;
  while(low<high)
  {
    mid=(low+high)/2;
    if(arr[mid]==item)
    break;
    if(arr[mid]>item)
    high=mid-1;
    else
    low=mid+1;
  }
  if(low<=high)
  cout<<"\n value found at "<<mid <<" th position";
  else
  cout<<"\n value not found ";
}
main()
{
  array<int>ob1;
  int k,j,item;
  //clrscr();
  cout<<"\nEnter number of element you want to sort (<10) : ";
  cin>>k;
  for(int i=0;i<k;i++)
  {
    cout<<"\nEnter a number ";
    cin>>j;
    ob1.add(j);
  }
  cout<<"\nYou enter ";
  ob1.display();
  cout<<"\n Enter element to search ";
  cin>>item;
  ob1.search(item);
  getch();
}
