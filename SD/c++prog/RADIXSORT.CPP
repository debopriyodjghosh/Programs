//radix sort using template

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>

template<class t>
class sort
{
int n;
t a[10][20],b[20],top[10];

public:
	void radixsort();

	void display();

	};

template<class t>
void sort<t>::radixsort()
	{
	int i,j,k,p,pos,len;
	cout<<"enter no. of element...";
	cin>>n;

	for(i=0;i<n;i++)
	  {
	    cout<<"enter element";
	    cin>>b[i];
	   }
	   cout<<"enter highest length of no..";
	   cin>>len;
	   for(i=0;i<len;i++)
	   {
	   for(j=0;j<10;j++)
	     top[j]=-1;

	     for(j=0;j<n;j++)
	     {
	     pos=(int)(b[j]/pow(10,i)) % 10;
	     a[pos][++top[pos]]=b[j];
	     }
	     for(j=0,p=-1;j<10;j++)
	      for(k=0;k<=top[j];k++)
	      b[++p]=a[j][k];
	     }
	   }

	     template<class t>
	      void sort<t>::display()
	      {
	      int i;
	      cout<<" sorted elements are..<<\n";
	      for(i=0;i<n;i++)
	      {
	      cout<<b[i]<<endl;
	      }
	      }

	      void main()
	      {
	      clrscr();
	      sort<int> p;
	      p.radixsort();
	      p.display();
	      getch();
	      }