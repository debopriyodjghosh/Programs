#include<iostream>
using namespace std;
class time{
    int hour;
    int minute;
    int second;
public:
    void gettime()     // problem in define time() distractor
    {
        cout<<"\nEnter hour : ";
        cin>>hour;
        cout<<"\nEnter minute : ";
        cin>>minute;
        cout<<"\nEnter second : ";
        cin>>second;
    }
    void  puttime()
    {
        cout<<"\nHour : "<<hour<<endl;
        cout<<"minute : "<<minute<<endl;
        cout<<"second : "<<second<<endl;
    }
    void sum(time t1,time t2)
    {
        second=t1.second+t2.second;
        minute=second/60;
        second=second%60;
        minute=minute+t1.minute + t2.minute;
        hour=minute/60;
        minute=minute%60;
        hour=hour+t1.hour+t2.hour;
    }
    };


    int main()
    {
        time t1,t2,t3;
       t1.gettime();
       t2.gettime();
        t3.sum(t1,t2);
       cout<<"\nTime1 = ";
       t1.puttime();
       cout<<"\nTime2 = ";
       t2.puttime();
        cout<<"\nTime3 = ";
        t3.puttime();
        return (0);
    }
