#include<iostream>
using namespace std;
class complex
{
    int r,i;
public:
    complex(){}
    complex(int real,int img)
    {
        r=real;i=img;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.r=r+c.r;
        temp.i=i+c.i;
        return temp;
    }
    complex operator-(complex c)
    {
        complex s;
        s.r=r-c.r;
        s.i=i-c.i;
        return s;
    }
    complex operator*(complex c)
    {
        complex m;
        m.r=(r*c.r)-(i*c.i);
        m.i=(r*c.i)+(i*c.r);
        return m;
    }

    complex display()
    {
        if(i<0)
            cout << "\nResult= "<<r<<i<<"i";
        else
            cout <<"\nResult= "<<r<<"+"<<i<<"i";
    }

};
main()
{
    complex c1,c2,c3,c4,c5;
    int r1,r2,i1,i2;
    cout<<"\n enter the real part of 1st number: ";
    cin>>r1;
    cout<<"\n enter the imageary part of 1st number: ";
    cin>>i1;
    cout<<"\n enter the real part of 2nd number: ";
    cin>>r2;
    cout<<"\n enter the real part of 2nd number: ";
    cin>>i2;
    c1=complex(r1,i1);
    c2=complex(r2,i2);
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
    c4=c1-c2;
    c4.display();
    c5=c1*c2;
    c5.display();
}
