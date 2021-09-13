/*************************************************************************
 * PROGRAM: OPERATOR OVERLOADING                                         *
 * <++>USED AS UNARY INCREAMENT                                          *
 * <-->USED AS UNARY DECREAMENT                                          *
 * <+> USED AS BINARY ADDITION                                           *
 * <-> USED AS BINARY SUBSTRUCTION                                       *
 * PROGRAM IS OK                                                         *
 **************************************************************************/
#include<iostream.h>
#include<conio.h>
class complex
  {
   private:
    int real;
    int img;
   public:
    complex()
     {
      real=0;
      img=0;
     }
    void getdata();
    void display();
    void operator++();
    void operator--();
    complex operator+(complex &c);
    complex operator-(complex &c);
  };
void complex::getdata()
  {
   cout<<"\n\n\nENTER RAEL AND IMAGINARY PART	:";
   cin>>real>>img;
  }
void complex::display()
  {
   cout<<"\n\nDISPLAY YOUR COMPLEX NUMBER	:";
   cout<<real<<"+i"<<img;
  }
void complex::operator++()
  {
   real=real+1;
   img=img+1;
  }
void complex::operator--()
  {
   real=real-1;
   img=img-1;
  }
complex complex::operator+(complex &c)
  {
   complex temp;
   temp.real=real+c.real;
   temp.img=img+c.img;
   return(temp);
  }
complex complex::operator-(complex &c)
  {
   complex temp;
   temp.real=real-c.real;
   temp.img=img-c.img;
   return(temp);
  }
void main()
  {
   complex m,n,a;
   clrscr();
   m.getdata();
   cout<<"\n\nBEFORE INCREAMENT	:";
   m.display();
   cout<<"\n\nAFTER INCREAMENT	:";
   m++;
   m.display();
   n.getdata();
   cout<<"\n\nBEFORE DECREAMENT	:";
   n.display();
   cout<<"\n\nAFTER DECREAMENT	:";
   n--;
   n.display();
   cout<<"\n\n\nDISPLAY OF THE NUMBER WHERE TO BE SAVED	:";
   a.display();
   a=m+n;
   cout<<"\n\nDISPLAY OF THE RESULT";
   a.display();
   cout<<"\n\n\n\n...... THE PROGRM IS WRITTEN BY RAJ ...... \n";
	     cout<<"\n..............THANK YOU...............";
   getch();
  }