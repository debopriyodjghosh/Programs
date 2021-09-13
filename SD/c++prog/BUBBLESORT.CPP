/* BUBBLE SORT using template*/

#include <iostream.h>
#include <conio.h>

template <class t>
class sort
{
t a[20],n;
public:
void bubble_sort();
void display();
};

template <class t>
void sort<t>::bubble_sort()
{
int i,j;
t temp;
cout<<"enter no. of elements..";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter element=";
cin>>a[i];
}

	for(i=0;i<n-1;i++)
	{
	 for(j=0;j<n-i-1;j++)
	 {
	  if(a[j] > a[j+1])
	   {
	   temp=a[j];
	   a[j]=a[j+1];
	   a[j+1]=temp;
	    }
	 }
	}

  }

template <class t>
void sort<t>::display()
{
int i;
cout<<"\nSorted elements are...\n";
for(i=0;i<n;i++)
  cout<<a[i]<<endl;
}

void main()
{
clrscr();
cout<<"\n\nInteger elements\n\n";
sort<int> s;
s.bubble_sort();
s.display();
cout<<"\n\nFloating elements\n\n";
sort<float> p;
p.bubble_sort();
p.display();
getch();
}