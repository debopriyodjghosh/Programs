// ok...Insertion Sort ( Works well in VC++ )

#include<iostream.h>
#include<conio.h>

class number
{
  int n;
  public:

  void getdata()
  {
    cout<<"\n\tEnter no.: ";
    cin>>n;
  }
  void display()
  {
    cout<< n <<"   ";
  }
  void sort(number a[],int x);
};

void number::sort(number a[],int x)
{
   int t;
   for(int i=1;i<x;i++)
    {
     t=a[i].n;
     for(int j=i-1;j>=0;j--)
       {
	if(t<a[j].n)
	   a[j+1].n=a[j].n;
	else
	   break;
	}
      a[j+1].n=t;
    }
}

void main()
 {
  number y[50],obj;
  int x;
  cout<<"\n\n\tEnter no. of elements: \n\n";
  cin>>x;
  for(int i=0;i<x;i++)
    y[i].getdata();
  obj.sort(y,x);
  cout<<"\n\tAfter sorting elements are.........";
  for(i=0;i<x;i++)
    y[i].display();
  getch();
}