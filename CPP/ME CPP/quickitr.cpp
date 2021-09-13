#define max 10
#include<conio.h>
#include<iostream.h>
template <class t>
class array
{
  private : t a[max];
		 int count;
  public : array();
			  void add(t);
			  int partition(int,int);
			  void quicksort(int,int);
			  void swap(int *,int *);
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
	 a[count] = item;
	 count++;
  }
  else
  cout<<"\n Array is full";
}
template <class t> void array<t> :: display()
{
  for(int i=0;i<count;i++)
  cout<<a[i]<<" ";
}
template <class t>void array<t> :: quicksort(int l,int h)
{
  int s[10];
  int top=-1,p;
  s[++top]=l;
  s[++top]=h;
  while(top>=0)
  {
	 h=s[top--];
	 l=s[top--];
	 p=partition(l,h);
	 if(p-1>l)
	 {
		s[++top]=l;
		s[++top]=p-1;
	 }
	 if(p+1<h)
	 {
		s[++top]=p+1;
		s[++top]=h;
	 }
  }
}
template<class t>int array<t>:: partition(int l,int h)
{
  int x=a[h];
  int i=l-1,j;
  for(j=l;j<=h-1;j++)
  {
	 if(a[j]<=x)
	 {
		i++;
		swap(&a[i],&a[j]);
	 }
  }
  swap(&a[i+1],&a[h]);
  return (i+1);
}
template<class t>void array<t> :: swap(int *p,int *q)
{
  int t=*p;
  *p=*q;
  *q=t;
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
	 cout<<"\nEnter a number";
	 cin>>j;
	 ob1.add(j);
  }
  cout<<"\nYou enter ";
  ob1.display();
  cout<<"\nAfter sorting............"<<endl;
	ob1.quicksort(0,k-1);
  ob1.display();
  getch();
}