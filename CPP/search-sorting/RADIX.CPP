#include<iostream.h>
#include<conio.h>
template<class T>
class num
  {
    private:T *a;
	    int len;
	    int size;
    public:num(int );
	   ~num();
	   void insert(T &);

	   void display();
	   void radix();
  };
template<class T>num<T>::num(int s)
 {
  if (s<0)
     {
       cout<<"\nThe size of array must be positive";
       size=10;
     }
 else
    size=s;
    len=0;
    a=new T [size];
 }
template<class T> num <T>::~num()
  {
   delete(a);
  }
template<class T>void num <T>::insert(T &x)
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
       cout<<"\t"<<a[i];
       cout<<"\n";
  }
template<class T>void num<T>::radix()
  {
   int bucket[10][10],bcount[10];
   int i,j,k,l,pass,div=1,max,count=0;
   max=a[0];
for(i=1;i<len;i++)
  {
   if(a[i]>max)
      max=a[i];
  }
 while(max>0)
   {
     count++;
     max/=10;
     for(pass=1;pass<=count;pass++)
	{
	  for(k=0;k<10;k++)
	     bcount[k]=0;
      for(i=0;i<len;i++)
	 {
	   l=(a[i]/div)%10;
	   bucket[l][bcount[l]++]=a[i];
	 }
      i=0;
      for(k=0;k<10;k++)
	 {
	   for(j=0;j<bcount[k];j++)
	      a[i++]=bucket[k][j];
	 }
	 div*=10;
       }
    }
 }
 void main()
  {
    clrscr();
    num<int> arr(20);
    int number,n;
    cout<<"\nEnter no. of element to be sorted:";
    cin>>n;
    for(int i=1;i<=n;i++)
       {
	 cout<<"\nEnter number";
	 cin>>number;
	 arr.insert(number);
       }
     cout<<"\nAfter sorting:";
     arr.radix();
     arr.display();
    getch();
}