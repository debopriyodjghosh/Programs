#include<iostream.h>
class Time
{private:
 int hrs;
 int min;
 public:
 Time();
 Time(int b,int m);
 void AddMin(int m);
 void AddHr(int h);
 void Reset(int n=0, int m=0);
 Time Operator+(const Time & t)const;
 Time Operator-(const Time & t)const;
 Time Operator*(double n)const;
 friend Time Operator*(double m, const Time & t)
    {return t*m;}
 void ShowTime(void)
  {cout << hrs << ":" << min << endl;}
};

Time :: Time()
{hrs = min = 0;}

Time :: Time(int h, int m)
{hrs = h, min = m;}

void Time :: AddMin(int m)
{min = min +m;
 hrs = min / 60 + hrs;
 min = min % 60;
}

void Time :: AddHr(int h)
{hrs = (hrs + h) % 12;}

Time Time :: Operator+(const Time & t)const
{Time R;
 R.min = min + t.min;
 R.hrs = hrs + t.hrs;
 R.hrs = R.hrs + R.min / 60;
 R.min = R.min % 60;
 R.hrs = R.hrs % 12;
 return R;
}

Time Time :: Operator-(const Time & t)const
{Time R;
 int t1,t2;
 t1 = t.min + 60 * t.hrs;
 t2 = min + 60 * hrs;
 R.min = (t2-t1) % 60;
 R.hrs = (t2-t1) / 60;
 return R;
}

main()
{Time T1,T2(10,30),T3(12,45);
 T1 = T1 + T2;
 T1.ShowTime();
 T1 = T3 - T2;
 T1.ShowTime();
 T2.AddMin(35);
 T2.ShowTime();
 T3.AddHr(12);
 T3.ShowTime();
}