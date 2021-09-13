#include<iostream>
using namespace std;
template<class x>
void swapp(x &a,x &b)
{
    x t;
    t=a;
    a=b;
    b=t;
}
int main()
{
    int i=10,j=20;
    double p=10.2,q=20.1;
    char c='A',d='B';
    cout<<"\nBefore swapping\n";
    cout<<"i="<<i<<","<<"j="<<j<<endl;
    cout<<"p="<<p<<","<<"q="<<q<<endl;
    cout<<"c="<<c<<","<<"d="<<d<<endl;
    swapp(i,j);
    swapp(p,q);
    swapp(c,d);
    cout<<"\nAfter swapping\n";
    cout<<"i="<<i<<","<<"j="<<j<<endl;
    cout<<"p="<<p<<","<<"q="<<q<<endl;
    cout<<"c="<<c<<","<<"d="<<d<<endl;
    return 0;
}
