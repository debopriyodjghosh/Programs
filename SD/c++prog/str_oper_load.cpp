/*Write an interactive operator overloaded program for manipulating string.
overload operators such as <<,>>,+,== and !=.  */

#include"iostream.h"
#include<conio.h>
#include"string.h"

class string
{
char *ptr;
int n;
public:
friend istream & operator >>(istream &din,string &b);
friend ostream & operator <<(ostream &dout, string &d);
friend string operator +(string e,string f);
friend int operator !=(string g,string h);
friend int operator ==(string s,string p);
};

istream &operator>>(istream &din,string &b)
  {
   cout<<"\nEnter size of string:";
   din>>b.n;
   b.ptr=new char[b.n+1];
   cout<<"\nenter string:  ";
   din>>b.ptr;
   return din;
  }

ostream & operator<<(ostream &dout,string &d)
  {
  cout<<"\nThe result is\n";
  dout<<d.ptr;
  return dout;
  }

string operator + (string e,string f)
  {
   string x;
   x.ptr=new char[e.n + f.n + 1];
   x.n=e.n + f.n + 1;
   strcpy(x.ptr,e.ptr);
   strcat(x.ptr,f.ptr);
   return x;
  }

int operator != (string g,string h)
  {
   if (strcmp(g.ptr,h.ptr))
     return 1;
   else
     return 0;
  }

int operator == (string s,string p)
  {
    if(strcmp(s.ptr,p.ptr)==0)
	return 0;
    else
	return 1;
}

void main()
{
clrscr();
string obj1,obj2,obj3;
cout<<"\nData for obj1....\n";
cin>>obj1;
cout<<"\nData for obj2....";
cin>>obj2;
obj3=obj1 + obj2;
cout<<"\nAfter addition...";
cout<<obj3;
cout<<"\nCheck for not eqalto !=.....\n";
if(obj1 != obj2)
    cout<<"\nTwo string are not identical\n ";
else
    cout<<"\nTwo string are identical\n";
cout<<"\n Check for equal to....\n";
if(obj1 == obj2)
  cout<<"\nTwo string are not equal\n";
else
  cout<<"\nTwo string are equal";

getch();
}




