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
 friend ostream & operator << (ostream & os,const Time & t);
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

Time Time :: Operator*(double n)const
{Time R;
 long t = hrs * n * 60 + min * n;
 R.hrs = t/60;
 R.min = t%60;
 return R;
}

friend ostream & operator << (ostream os,const Time & t)
{os << t.hrs << ":" << t.min << endl;
return os;
}

void main()
{Time A,B(5,40),B(2,55);
 cout << A << endl;
 cout << B << endl;
 cout << C << endl;
 A = B*2.5;
 cout << A << endl;
 cout << 10*B << endl;
}

