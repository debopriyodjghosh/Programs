#include<iostream>
using namespace std;
class complex
{
private:
int real,imaginary;
public:
complex();
complex(int,int);
void read();
void display();
friend complex add(complex,complex);
friend complex sub(complex,complex);
friend complex mul(complex,complex);
//friend complex operator +(complex,complex);
};

complex::complex()
{
real=0;
imaginary=0;
}

complex::complex(int a,int b)
{
real =a;
imaginary =b;
}

void complex::read()
{
cout<<"enter the real part: ";
cin>>real;
cout<<"enter the imaginary part: ";
cin>>imaginary;
}


void complex::display()
{
cout<<real<<" + "<<imaginary<<" i "<<endl;
}


complex add(complex a,complex b)
{
complex c;
c.real=a.real+b.real;
c.imaginary=a.imaginary+b.imaginary;
return c;
}



complex sub(complex a,complex b)
{
complex c;
c.real=a.real-b.real;
c.imaginary=a.imaginary-b.imaginary;
return c;
}


complex mul(complex a,complex b)
{
complex c;
c.real=a.real*b.real;
c.imaginary=a.imaginary*b.imaginary;
return c;
}

int main()
{
complex x;
complex y;
complex z;
complex s;
complex m;
x.read();
x.display();
y.read();
y.display();
z=add(x,y);
cout<<"complex addition is:\n";
z.display();
s=sub(x,y);
cout<<"complex subtruction is:\n";
s.display();
m=mul(x,y);
cout<<"complex multiplication is:\n";
m.display();
return 0;
}
