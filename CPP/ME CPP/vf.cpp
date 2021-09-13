#include<iostream>
using namespace std;
class city
{
    char a[10];
public:
    void getcity()
    {
        cout<<"enter city name : ";
        cin>>a;
    }
    virtual void showcity()
    {
        cout<<"\n it is "<<a;
    }

};

class mcity:public city
{
    char b[10];
public:
   void getmcity()
    {
       cout<<"enter mcity name : ";
        cin>>b;
    }
    void showcity()
    {
         cout<<"\n it is "<<b;
    }
};

int main()
{
    city c,*p=NULL;
    mcity m;
    c.getcity();
    m.getmcity();
    p=&c;
    cout<<"\ncontent of base class : ";
    p->showcity();
    p=&m;
    cout<<"\ncontent of derive class : ";
    p->showcity();

}
