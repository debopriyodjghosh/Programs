#include "iostream.h"
#include "conio.h"

class B;
class A
{
private:
  int a,b;
public:
  friend void add (A m,B n);
  void getdata()
   {
	cout<<" ENTER TWO VALUES";
	cin>>a>>b;
   }
};


class B
{

private:
  int x,y;
public:
   friend void add (A m,B n);
   void getdata()
	{
	cout<<"ENTER VALUES";
	cin>>x>>y;
	}
 };

void add (A m,B n)
{
cout<<m.a+n.x<<"\n";
cout<<m.b+n.y<<"\n";
}


void main()
{
clrscr();
A p;
B q;
p.getdata();
q.getdata();
add(p,q);
getch();
}