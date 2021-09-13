#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class num
{
   private:
	     int a;
   public:
	    num()
	    {
	      a=0;
	    }
	    num(int x)
	    {
	     a=x;
	    }
	    void show()
	    {
	      cout<<"\nThe value of a="<<a;
	    }
	    num operator++()
	    {
	      a++;
	      return *this;
	    }
	    num operator++(int x)
	    {
	      num temp;
	      temp.a=a++;
	      return temp;
	    }
};
void main()
{
  num ob1,ob2;
  clrscr();
  ob1.show();
  ob2=ob1++;
  ob2.show();
  ob1.show();
  num ob3,ob4;
  ob3.show();
  ob4=++ob3;
  ob3.show();
  ob4.show();
  num ob5=8;
  ++ob5;
  ob5.show();
  ob5++;
  ob5.show();
  getch();
}