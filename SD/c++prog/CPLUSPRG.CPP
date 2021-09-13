#include "iostream.h"
#include<conio.h>

class  A
{
   int x,y;
   public:
   void getdata()
    {
       cout<<"Enter value ofx and y: ";
       cin>>x>>y;
    }
   void display()
    {
      cout<<"x="<<x<<"  y="<<y<<"\n";
    }
};
class B:virtual public A
 {
 int z;
 public:
 /*  void getdata()
   {
    cout<<"Enter value of z ";
    cin>>z;
   }
   void display()
   {
    cout<<"  z="<<z<<"\n";
   } */
 } ;

 class C:virtual public A
 {
   int t;
   public:
/*   void getdata()
   {
     cout<<"Enter value of t ";
     cin>>t;
   }
   void display()
   {
   cout<<"  t="<<t<<"\n";
   }*/
 };
 class D:public B,public C
 {
   int tt;
   public:
/*   void getdata()
   {
     cout<<"Enter value of tt ";
     cin>>tt;
   }
   void display()
   {
   cout<<"  tt="<<tt<<"\n";
   } */
 };


 void main()
 {
  D objd;
  clrscr();
  objd.getdata();
  objd.display();
  getch();
 }