//CALCULATION OF AREA USING VIRTUAL FUNCTION//
#include<iostream>
using namespace std;
#include<conio.h>

 class shape
  {
   protected:
    double x;
    double y;
   public:
    void getdata(double a,double b){x=a;y=b;}
    virtual void display_area(){ }
  };

 class triangle : public shape
  {
   public:
    void display_area();
  };

 class rectangle : public shape
  {
   public:
    void display_area();
  };
 class elipse : public shape
  {
   public:
    void display_area();
  };

 void triangle::display_area()
  {
   double area=(x*y)/2;
   cout<<"\n Area of Triangle:  "<<area;
  }

 void rectangle::display_area()
  {
   double area=x*y;
   cout<<"\n Area of Rectangle: "<<area;
  }

 void elipse::display_area()
  {
   const double pi=3.14;
   double area= pi*x*y;
   cout<<"\n Area of Elipse: "<<area;
  }


 int main()
  {
   triangle t;
   rectangle r;
   elipse e;

   shape *list[4];
   list[0]=&t;
   list[1]=&r;
   list[2]=&e;

   double a,b;

   cout<<"\n..........TRIANGLE..........";
   cout<<"\n Enter the value base, height: ";
   cin>>a>>b;
   list[0]->getdata(a,b);        //shape class getdata function

   cout<<"\n..........RECTANGLE..........";
   cout<<"\n Enter the value length, breath: ";
   cin>>a>>b;
   list[1]->getdata(a,b);       //shape class getdata function

   cout<<"\n..........ELIPSE..........";
   cout<<"\n Enter the value major, minor: ";
   cin>>a>>b;
   list[2]->getdata(a,b);       //shape class getdata function

   cout<<"\n..........TRIANGLE..........";
   list[0]->display_area();           //triangle

   cout<<"\n..........RECTANGLE..........";
   list[1]->display_area();          //rectrangle

   cout<<"\n..........ELIPSE..........";
   list[2]->display_area();         //elipse

   getch();
   return 0;
  }
