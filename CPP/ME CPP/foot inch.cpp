#include<iostream>
using namespace std;
class measure{
    int foot;
    int inch;
public:
   void get()
    {
       cout<<"\n Enter foot : ";
       cin>>foot;
       cout<<"\n Enter inches : ";
       cin>>inch;
    }

    void print()
    {
        cout<<"\nFoot = :"<<foot;
        cout<<"\nInch = :"<<inch;
    }

    void sum(measure,measure);
};

void measure::sum (measure m1,measure m2)
{
    inch=m1.inch+m2.inch;
    foot=inch/12;
    inch=inch%12;
    foot=foot+m1.foot+m2.foot;
}

int main()
{
    measure m1,m2,m3;
    m1.get();
    m2.get();
    m3.sum(m1,m2);
     cout<<"\nf1 = ";
       m1.print();
       cout<<"\nf2 = ";
       m2.print();
        cout<<"\nf3 = ";
        m3.print();
        return (0);
}
