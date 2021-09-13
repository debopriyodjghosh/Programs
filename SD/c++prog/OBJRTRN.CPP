#include"iostream.h"
#include"conio.h"
class A
	{
	 private:
	  int x;
	  int y;
	 public:
	  A getdata(A m)
	   {
	    A temp;
	    temp.x=m.x;
	    temp.y=m.y;
	    return(temp);
	   }
	  void display()
	   {
	    cout<<"\n\nThe value of x: "<<x;
	    cout<<"\n\nThe value of y: "<<y;
	   }
	  A (int q,int r)
	   {
	    x=q;
	    y=r;
	   }
	};
void main(void)
{
 A n(7,8);
 A obj;
 clrscr();
 obj=obj.getdata(n);
 obj.display();
 getch();
}
