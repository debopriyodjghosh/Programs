#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std
 class fraction
{
private int n,int d;

public  fraction()
{
n=0;
d=1;
}
void input()
{
cout<<"enter numeric value";
cin>>n;
cout<<"enter denuminaqter";
cin>>d;
}
fraction operator +(fraction);
fraction operator /(fraction);
void operator -();
void show();
int hcf(int,int);
};

 fraction fraction :: operator+(fraction t)
 {
 fraction temp;
 temp.n=n*t.d+d*t.n;
 temp.d=d*t.d;
 return temp;
 }

 fraction fration :: operator/(fraction t)
 {
 fraction temp;
 temp.n=n*t.d;
 temp.d=d*t.n;
 return temp;
 }

  void fraction :: operator-()
  {
  n=-n;
  d=-d;
  }

  void fraction :: show()
  {
  int c=hcf(n,d);
  n=n/c;
  d=d/c;
  cout<<"the value="<<n<<"/"<<d;
  }

  int fraction :: hcf (int x,int y)
  {
  if(y=0)
  return x;
  else
  return hcf(y,x%y);
  }
	 main()
	{
	fraction a,b,c;
	a.show();
	b.show();
	c.show();
	a.input();
	b.input();
	c.input();
	a.show();
	b.show();
	c.show();
	-a/b+c;
	a.show();
	b.show();
	c.show();
	}
