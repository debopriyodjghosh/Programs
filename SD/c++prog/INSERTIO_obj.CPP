// ok...Insertion Sort using array of objects using template (Well work in VC ++)

#include<iostream.h>
#include<conio.h>

template <class T>
class number
{
  T n;
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
  void sort(number<T> a[],int x);
};

template <class T>
void number<T>::sort(number<T> a[],int x)
{
   T t;
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

  cout<<"\n\n Sorting for integer elements....\n\n";
  number<int> y[50],obj;
  int x;
  cout<<"\n\n\tEnter no. of elements: \n\n";
  cin>>x;
  for(int i=0;i<x;i++)
    y[i].getdata();
  obj.sort(y,x);
  cout<<"\n\tAfter sorting elements are.........";
  for(i=0;i<x;i++)
    y[i].display();

cout<<"\n\n Sorting for floating elements....\n\n";
number<float> z[50];
  cout<<"\n\n\tEnter no. of elements: \n\n";
  cin>>x;
  for(i=0;i<x;i++)
    z[i].getdata();
  obj.sort(z,x);
  cout<<"\n\tAfter sorting elements are.........";
  for(i=0;i<x;i++)
    z[i].display();

 }
