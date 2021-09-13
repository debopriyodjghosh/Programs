#include<iostream.h>
#include<conio.h>
class bitop
{
    int a;
    public:
	   bitop(int c){a=c;}
	   void bitand(bitop);
	   void bitor(bitop);
	   void bitxor(bitop);
	   void dis(int);
};
void bitop::bitand(bitop b2)
{
  int c=a&b2.a;
  dis(c);
}
void bitop::bitor(bitop b2)
{
  int c=a|b2.a;
  dis(c);
}
void bitop::bitxor(bitop b2)
{
  int c,d,m,n,e;
  c=~a;
  m=c&b2.a;
  d=~b2.a;
  n=d&a;
  e=m|n;
  dis(e);
}
void bitop::dis(int z)
{
  for(int i=8;i>=0;i--)
  {
    int y=1<<i;
    int x=z&y;
    if(x==0)
     cout<<"0";
    else
     cout<<"1";
  }
}
void main()
{
  bitop b1(4),b2(5);
  clrscr();
  b1.bitand(b2);
  cout<<endl;
  b1.bitor(b2);
  cout<<endl;
  b1.bitxor(b2);
  cout<<endl;
  getche();
}