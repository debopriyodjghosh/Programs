/*Write a program to Add Two Times(Hours, Minutes, Seconds) Number*/

#include<iostream>
using namespace std;

class time
{
    private:
        int h,m,s;
    public:
        void getdata()
        {
            cout<<"Enter Hours,Minutes and Seconds:";
            cin>>h>>m>>s;
        }
        void display()
        {
            cout<<"\nThe value is "<<h<<":"<<m<<":"<<s;
        }
        time add(time,time);
};

time time::add(time x,time y)
{
    time temp;
    temp.s=x.s+y.s;
    temp.m=temp.s/60;
    temp.s=temp.s%60;
    temp.m=temp.m+x.m+y.m;
    temp.h=temp.m/60;
    temp.m=temp.m%60;
    temp.h=temp.h+x.h+y.h;
    return temp;
}

int main()
{
    time n1,n2,n3;
    /*Input Block*/
    n1.getdata();
    n2.getdata();
    n3=n3.add(n1,n2);
    /*Output Block*/
    n1.display();
    n2.display();
    n3.display();
    return 0;
}

