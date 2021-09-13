#include<conio.h>
#include<iostream>
#define max 10
using namespace std;
template<class t>
class quick
{
  private : t a[max];
	    int count;
	    t temp;
  public: t data;
	  quick();
	  void add(t item)
	  {
	    a[count]=item;
	    count++;
	  }
	  int getcount();
	  int split(int,int);
	  void sort(int,int);
	  void display();
	  ~quick()
	  {
	    cout<<"\nThe program terminated";
	  }
};
template<class t>int quick<t>::getcount()
{
  return count;
}
template<class t>int quick<t>::split(int low,int up)
{
  t i;
  int p,q;
  p=low+1;
  q=up;
  i=a[low];
  while(q>=p)
  {
    while(a[p]<i)
    p++;
    while(a[q]>i)
    q--;
    if(q>p)
    {
      temp=a[p];
      a[p]=a[q];
      a[q]=temp;
    }
  }
  temp=a[low];
  a[low]=a[q];
  a[q]=temp;
  return q;
}

template<class t>void quick<t>::sort(int low,int up)
{
  if(up>low)
  {
    int i=split(low,up);
    sort(low,i-1);
    sort(i+1,up);
  }
}
template<class t>void quick<t>::display()
{
  for(int i=0;i<max;i++)
  cout<<a[i]<<"\t";
}
template<class t>quick<t>::quick()
{
	    count=0;
	    for(int i=0;i<max;i++)
	    {
	     a[i]=0;
	    }
 }
 main()
{
  quick<int>ob1;
  //clrscr();
  ob1.display();
  for(int i=0;i<max;i++)
  {
    cout<<"\nEnter element";
    cin>>ob1.data;
    ob1.add(ob1.data);
  }
  ob1.display();
  int c=ob1.getcount();
  ob1.sort(0,c-1);
  ob1.display();
  getch();
}
