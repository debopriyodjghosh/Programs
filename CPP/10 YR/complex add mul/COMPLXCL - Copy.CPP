//complex..................
#include<iostream.h>
#include<conio.h>
class complex
{
   private:
	    int r,ig;
   public:
	    void input()
	    {
	       cout<<"\nEnter real part:" ;
	       cin>>r;
	       cout<<"\nEnter imaginary part:" ;
	       cin>>ig;
	    }
	    void show()
	    {
	      if(ig<0)
		cout<<"\nThe complex no. is--->"<<r<<"- i"<<ig*(-1);
	      else
		cout<<"\nThe complex no. is--->"<<r<<"+ i"<<ig;
	    }
	    void add(complex t1,complex t2)
	    {
	      r=t1.r+t2.r;
	      ig=t1.ig+t2.ig;
	    }
	    void multiply(complex t1,complex t2)
	    {
	      r=t1.r*t2.r-t1.ig*t2.ig;
	      ig=t1.ig*t2.r+t1.r*t2.ig;
	    }
	    complex operator++()
	    {
	      r++;
	      ig++;
	      return *this;
	    }
	   /* complex operator=(complex t)
	    {
	      r=t.r;
	      ig=t.ig;
	      return *this;

	    }*/
} ;
void main()
{
   complex ob1,ob2,ob3,ob4,ob5,ob6;
   clrscr();
   ob1.input();
   ob1.show();
   ob2.input();
   ob2.show();
   ob3.add(ob1,ob2);
   ob3.show();
   ob4.multiply(ob1,ob2);
   ob4.show();
   ob5=ob4;
   ob5.show();
   ++ob5;
   ob5.show();
   ob6=++ob5;
   ob6.show();
   getch();
}
