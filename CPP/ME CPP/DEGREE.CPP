/* type conversion:
 degree d1,d2;
 radian r1,r2;
 d1=r1;
 r1=d1;

*/

#include <iostream.h>
#include <conio.h>

class radian;

class degree
{
  float d;
  public:
  degree(){d=0;}
  degree(float x){d=x;}
  void getdata(){cout<<"\n\n Enter Degree :  "; cin>>d;}
  void showdata(){cout<<"\n\n  Degree = "<<d;getch();}
  operator radian();
 };

class radian
{
  float r;
  public:
  radian(){r=0;}
  radian(float x){r=x;}
  void getdata(){cout<<"\n\n  Enter Radian :  ";  cin>>r;}
  void showdata(){cout<<"\n\n  Radian = "<<r;getch();}
  operator degree()
  {
   float x=(r*180)/3.14;
   return degree(x);
  }
 };

  degree::operator radian()
  {
   float x=(d*3.14)/180;
   return radian(x);
  }

 void main()
 {
   degree d1,d2,d3(12.21);
   radian r1,r2,r3(25.63);
   d2.getdata();
   r2.getdata();
  // r1=d2;
   d1=r2;
   r1.showdata();
   d1.showdata();
 }