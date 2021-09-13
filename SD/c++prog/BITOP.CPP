//2010 3rd day 1)Design a class BitOp contaning two integer data members. The class should contain methods like BitAnd,BitOr and BitXor to do bitwise AND, OR, XOR operations respectively on data members of objects. Write suitable constructors for initializing the objects. Write a display function to show the results in binary form.

#include<iostream.h>
#include<conio.h>

class bitop
{
  int a,b;
  public:
    bitop()
    {
      a=0;
      b=0;
    }
    void getdata()
    {
       cout<<"\n\tEnter 1st no.: ";
       cin>>a;
       cout<<"\tEnter 2nd no.: ";
       cin>>b;
       cout<<"\n\tBinary of 1st no.= ";
       display(a);
       cout<<"\n\tBinary of 2nd no.= ";
       display(b);
    }
    void bitand();
    void bitor();
    void bitxor();
    void display(int);
};

void bitop::bitand()
{
  int c;
  c=a&b;
  cout<<"\n\n\tResult of bitwise AND operation= ";
  display(c);
}

void bitop::bitor()
{
  int c;
  c=a|b;
  cout<<"\n\n\tResult of bitwise OR operation= ";
  display(c);
}

void bitop::bitxor()
{
  int c;
  c=a^b;
  cout<<"\n\n\tResult of bitwise XOR operation= ";
  display(c);
}

void bitop::display(int n)
{
  int i,k,andmask;
  for(i=15;i>=0;i--)
  {
    andmask=1<<i;
    k=n & andmask;
    if(k==0)
      cout<<"0";
    else
      cout<<"1";
  }
}

void main()
{
   bitop x,y,z;
   clrscr();
   cout<<"\n\n\tEnter data for bitwise AND operation: ";
   x.getdata();
   cout<<"\n\n\tEnter data for bitwise OR operation: ";
   y.getdata();
   cout<<"\n\n\tEnter data for bitwise XOR operation: ";
   z.getdata();
   x.bitand();
   y.bitor();
   z.bitxor();
   getch();
}
