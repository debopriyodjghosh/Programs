#include<iostream>
using namespace std;

class shape
{
double vol;
public:
shape()
{
vol=0.0;
}
int volume(int side);
double volume(double radius,double height);
long volume(long length,int bredth,int height);
};

int shape::volume(int a)
{
vol=a*a*a;
cout<<vol;
}

double shape::volume(double a,double b)
{
vol=3.14159*a*a*b;
cout<<vol;
}

long shape::volume(long a,int b,int c)
{
vol=a*b*c;
cout<<vol;
}


int main()
{
shape s;
int ch;
int side;
double rad;
int hgt;
long len;
int bred,heig;
do
{
cout<<"Shape \n";
cout<<"1.Cube\n 2.Cylinder\n 3.Cuboid\n 4.Exit\n";
cout<<"Enter your choice";
cin>>ch;
switch(ch)
{
case 1:
                cout<<"\n Enter the side length:";
                cin>>side;
                cout<<"\n The volume of a cube is:";
                side.volume();
                break;
case 2:
                cout<<"Enter the radius of cylinder:";
                cin>>rad;
                cout<<"Enter the height of cylinder:";
                cin>>hgt;
                cout<<"\n The volume of cylinder is:";
                cout<
                break;
case 3:
                cout<<"Enter the length of cuboid:";
                cin>>len;
                cout<<"Enter the breadth of cuboid";
                cin>>bred;
                cout<<"Enter the height of cuboid";
                cin>>heig;
                cout<<"\n The volume of cuboid is:";
                cout<
                break;
case default:
                cout<<"Wrong choice";
}
}
while(ch<=3);
}
