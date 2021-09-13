#include<iostream>
using namespace std;
int volume(int);
double volume(double, int);
long volume(long,int,int);
int volume(int s)
{
    return(s*s*s);
}
double volume(double r, int h)
{
    return(3.14519*r*r*h);
}
long volume (long l,int b,int h)
{
    return(l*b*h);
}
int main()
{
    int s,h1,h,b,cube;
    float r,cylinder;
    long l,rect;

   cout<< "VOLUME OF A CUBE "<<endl<<endl<<endl<<"enter the value of s ";
   cin>>s;
   cube=volume(s);
   cout<<endl<<"the volume of given cube = "<<cube<<endl<<endl<<endl;
   cout<< "VOLUME OF A CYLINDER "<<endl<<endl<<endl<<"enter the value of r  ";
   cin>>r;
   cout<<"enter the value of h : ";
   cin>>h1;
   cylinder=volume(r,h1);
   cout<<endl<<endl<< "the volume of given cylinder =  "<<cylinder<<endl<<endl<<endl;
    cout<< "VOLUME OF A RECTANGULAR BOX "<<endl<<endl<<endl<<"enter the value of l ";
    cin>>l;
    cout<<"enter the value of b ";
    cin>>b;
    cout<<"enter the value of h ";
    cin>>h;
    rect=volume(l,b,h);
     cout<<endl<< "the volume of given rectangular box "<<rect<<endl;
}
