#include<iostream.h>
#include<stdio.h>
#include<conio.h>
template<class c1,class c2>
class complex
{
  private: c1 a;
	   c2 b;
  public:
	   void input(int x,int y)
	   {
	    a=x;
	    b=y;
	   }
	   void show()
	   {
	    cout<<a<<"+i"<<b<<endl;
	   }
	   void mult(complex t1,complex t2)
	   {
	    a=t1.a*t2.a+t1.b*t2.b;
	    b=t1.a*t2.b+t1.b*t2.a;
	   }
};
void main()
{
 int x,y;
 clrscr();
 complex<int,int> v1;
 cout<<"\nEnter real part:\n";
 cin>>x;
 cout<<"\nEnter the imaginary part:";
 cin>>y;
 v1.input(x,y);
 v1.show();
 complex<int,int> v2;
 cout<<"\nEnter the real part:\n";
 cin>>x;
 cout<<"\nEnter the imaginary part:";
 cin>>y;
 v2.input(x,y);
 v2.show();
 complex<int,int> v3;
 v3.mult(v1,v2);
 cout<<"\nMultiplication.......................\n";
 v3.show();
 getch();
}




