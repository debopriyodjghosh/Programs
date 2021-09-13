/*Convert the value to mks from fps and vice versa*/
#include<iostream>
#include<conio.h>
using namespace std;
class fps;
class mks
{
private:
    float len,mass;
    int time;
public:
    void input()
    {
        cout<<"\nEnter the length in Meter:";
        cin>>len;
        cout<<"\nEnter the mass in Kg:";
        cin>>mass;
        cout<<"\nEnter the time in Second:";
        cin>>time;
    }
    void show()
    {
        cout<<"\n-------------------------";
        cout<<"\nLength="<<len<<"Meter";
        cout<<"\nMass="<<mass<<"Kg";
        cout<<"\nTime="<<time<<"Second";
        cout<<"\n-------------------------";
    }
    friend fps mkstofps(mks);
    friend mks fpstomks(fps);
};
class fps
{
private:
    float len,mass;
    int time;
public:
    void input()
    {
        cout<<"\nEnter the length in Ft:";
        cin>>len;
        cout<<"\nEnter the mass in Pound:";
        cin>>mass;
        cout<<"\nEnter the time in Second:";
        cin>>time;
    }
    void show()
    {
        cout<<"\n-------------------------";
        cout<<"\nLength="<<len<<"Ft";
        cout<<"\nMass="<<mass<<"Lb";
        cout<<"\nTime="<<time<<"Second";
        cout<<"\n-------------------------";
    }
    friend fps mkstofps(mks);
    friend mks fpstomks(fps);
};
fps mkstofps(mks t1)
{
    fps temp;
    temp.len=t1.len/0.3048;
    temp.mass=t1.mass/0.453592;
    temp.time=t1.time;
    return temp;
}
mks fpstomks(fps t2)
{
    mks temp;
    temp.len=t2.len*0.3048;
    temp.mass=t2.mass*0.453592;
    temp.time=t2.time;
    return temp;
}
int main()
{
    mks ob1;
    fps ob2;
    ob1.input();
    ob1.show();
    ob2=mkstofps(ob1);
    ob2.show();
    ob2.input();
    ob2.show();
    ob1=fpstomks(ob2);
    ob1.show();
    return 0;
}
