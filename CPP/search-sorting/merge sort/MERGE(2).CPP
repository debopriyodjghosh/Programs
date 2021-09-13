#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
class num
  {
    private:T *a;
	    int len;
	    int size;
	    void merge(int,int,int);
	    void msort(int,int);
    public:
	    num()
	    {
	      len=0;
	    }
	    num(int);
	   ~num();
	   void insert(T &);
	   void display();
	   void mergesort();
   };
 template<class T>num<T>::num(int s)
  {
    if(s<0)
      {
       cout<<"\nThe size of array must be positive";
       size=10;
      }
    else
       size=s;
       len=0;
       a=new T[size];
  }
  template<class T>num<T>::~num()
    {
     delete(a);
    }
  template<class T> void num<T>::insert(T & x)
    {
     if(len==size)
       {
	 cout<<"\nThe array is full";
	 return;
       }
       a[len++]=x;
    }
  template<class T>void num<T>::display()
    {
      for(int i=0;i<len;i++)
	 cout<<a[i]<<"\t";
	 cout<<"\n";
    }
  template<class T>void num<T>:: merge(int p,int q,int r)
    {
      T b [20];
      int l1,r1,i;
      l1=p;
      r1=q+1;
      i=p;
      while(l1<=q && r1<=r)
	   {
	     if(a[l1]<a[r1])
	       {
		 b[i]=a[l1];
		 l1=l1+1;
		 i=i+1;
	       }
	     else
		{
		  b[i]=a[r1];
		  r1=r1+1;
		  i=i+1;
		}
	    }
	while(l1<=q)
	    {
	      b[i]=a[l1];
	      l1=l1+1;
	      i=i+1;
	    }
	   while(r1<=r)
		{
		  b[i]=a[r1];
		  r1=r1+1;
		  i=i+1;
		}
	    for(i=p;i<=r;i++)
		a[i]=b[i];
     }
 template<class T>void num<T>::msort(int p,int r)
   {
     int q;
     if(p<r)
       {
	 q=(p+r)/2;
	 msort(p,q);
	 msort(q+1,r);
	 merge(p,q,r);
       }
    }
 template<class T>void num<T>::mergesort()
    {
      msort(0,len-1);
    }
  main()
   {
    //clrscr();
    num<int>arr(20);
    int number,n;
    cout<<"\nEnter no. of elements to sort";
    cin>>n;
    for(int i=1;i<=n;i++)
      {
	cout<<"\nEnter number";
	cin>>number;
	arr.insert(number);
      }
     cout<<"After sorting:\n";
     arr.mergesort();
     arr.display();
  getch();
 }
