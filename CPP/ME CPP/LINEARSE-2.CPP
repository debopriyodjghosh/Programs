#define max 10
#include<conio.h>
#include<iostream.h>
template <class t>
class array
{
  private : t arr[max];
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
  if(count < max)
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
  for(int i=0;i<count;i++)
  {
    if(arr[i]==item)
    break;
  }
    if(i==count)
    cout<<"value not found";
    else
    cout<<"value found at "<<i<<" th"<<" position";
}
void main()
{
  array<float>ob1;
  int k;
  float j,item;
  clrscr();
  cout<<"\nEnter number of element you want to insert (<10) : ";
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