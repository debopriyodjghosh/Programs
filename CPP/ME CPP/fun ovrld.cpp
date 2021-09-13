#include<iostream>
using namespace std;
void volume(int);
void volume(double, int);
void volume(long,int,int);

int main()
{
    int s,h,b;
    float r;
    long l;
   cout<< "\n\nvolume of a cube "<<endl<<"enter the value of s ";
   cin>>s;
   volume(s);
   cout<< "\n\nvolume of a cylinder "<<endl<<"enter the value of r  ";
   cin>>r;
   cout<<"enter the value of h : ";
   cin>>h;
   volume(r,h);
    cout<< "\n\nvolume of a rectangular box "<<endl<<"enter the value of l ";
    cin>>l;
    cout<<"enter the value of b ";
    cin>>b;
    cout<<"enter the value of h ";
    cin>>h;
    volume(l,b,h);

}
void volume(int s)
{
    cout<<"the volume is "<<s*s*s;
}

void volume(double r, int h)
{
    cout<<"the volume is "<<3.14519*r*r*h;
}
void volume (long l,int b,int h)
{
    cout<<"the volume is "<<l*b*h;
}
