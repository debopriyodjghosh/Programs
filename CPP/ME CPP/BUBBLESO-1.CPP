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
	   void sort();
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
template <class t> void array<t> :: sort()
{
  t temp;
  for(int i=0;i<=count-2;i++)
  {
    for(int j=0;j<=count-2-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
      }
    }
  }
}
template <class t> void array<t> :: display()
{
  for(int i=0;i<count;i++)
  cout<<arr[i]<<" ";
}
void main()
{
  array<int>ob1;
  int k,j;
  clrscr();
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
  cout<<"\nAfter sorting............"<<endl;
  ob1.sort();
  ob1.display();
  getch();
}

