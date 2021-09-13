#include "iostream.h"
#include <conio.h>

class point
{
int x,y;
public:
void getpoint()
{
cout<<"Enter x value and y value";
cin>>x>>y;
}
int getx()
{
return x;
}
int gety()
{
return y;
}
};

class linesegment
{
point p,q;
public:
void getpoint()
   {
    cout<<"\nEnter 1st point\n\n";
    p.getpoint();
    cout<<"\n\nEnter 2nd point\n\n";
    q.getpoint();
   }
void display()
{
cout<<"("<<p.getx()<<","<<p.gety()<<")"<<"\n";
cout<<"("<<q.getx()<<","<<q.gety()<<")"<<"\n";
}


};
void main()
{
clrscr();
linesegment m,n;
m.getpoint();
m.display();
getch();
}