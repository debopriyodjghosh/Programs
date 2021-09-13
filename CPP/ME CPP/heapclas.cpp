#define max 20
#include<conio.h>
#include<iostream.h>
template <class t>
class array
{
  private : t a[max];
		 int count;
  public : array();
			  t b[max];
		void add(t);
		void restoredown(int,int);
		void makeheap(int);
		void del(int*,int);
		void display();
};
template <class t> array<t> :: array()
{
 count=1;
}
template <class t> void array<t> :: add (t item)
{
  if(count <= max)
  {
	 a[count] = item;
	 count++;
  }
  else
  cout<<"\n Array is full";
}
template<class t> void array<t> :: makeheap(int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		restoredown(i,n);
}
template <class t> void array<t> :: restoredown(int pos,int n)
{
	int i;
	t val;
	val=a[pos];
	while(pos<=n/2)
	{
		i=2*pos;
		if((i<n)&&(a[i]<a[i+1]))
			i++;
		if(val>=a[i])
		break;
		a[pos]=a[i];
		pos=i;
	}
	a[pos]=val;
}
template <class t> void array<t> :: del(int *n,int j)
{
	t val;
	val=a[1];
	a[1]=a[*n];
	(*n)--;
	restoredown(1,*n);
	cout<<"\ndelete="<<val;
		b[j]=val;
	//return val;
}
template <class t> void array<t> :: display()
{
  for(int i=1;i<=count;i++)
  cout<<a[i]<<" ";
}

void main()
{
  array<int>ob1;
  int k,j,n;
  clrscr();
  cout<<"\nEnter number of element you want to sort (<=20) : ";
  cin>>k;
  n=k;
  for(int i=1;i<=k;i++)
  {
	 cout<<"\nEnter a number ";
	 cin>>j;
	 ob1.add(j);
  }
  ob1.makeheap(k);
	cout<<"\n heap tree:\n" ;
  ob1.display();
	for(i=1;i<=k;i++)
	{
		ob1.del(&n,j);

		j--;
	}
	cout<<"\n After sorting:";
	for(i=1;i<=k;i++)
		cout<<"\t"<<ob1.b[i];
  getch();
}
