	/*area of rectangle using value received and return*/

#include<iostream.h>
#include<conio.h>
float area(float,float);
int main()
{
float x,y,z;
clrscr();
cout<<"enter length and breadth of rectangle=";
cin>>x>>y;
z=area(x,y);
cout<<"\n area of ractangle is="<<z;
getch();
return 0;
}
float area(float l,float b)
{
float a;
a=l*b;
return a;
}