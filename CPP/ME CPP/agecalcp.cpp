#include<iostream.h>
#include<conio.h>
class date
{
private: int y,m,d;
public:date()
		{y=0;m=0;d=0;}
		void input()
		{cout<<"ENTER DATE IN YYYY MM DD FORMAT";
		cin>>y>>m>>d;
		}
		friend int operator-(date,date);
		};
int operator-(date td, date bd)
	{
		int a,b,c;
		if(bd.d>td.d)
		{
		if(td.m==4||6||9||11)
		{
		td.m--;
		c=(td.d+30)-bd.d;
		}
		else if(td.m==2)
		{if((td.y%4==0&& td.y%100!=0)||(td.y%400==0))
         {
		td.m--;
		c=(td.d+29)-bd.d;
			}
		else
			{
		td.m--;
		c=(td.d+28)-bd.d;
			}
		}
		else
      {
		td.m--;
		c=(td.d+31)-bd.d;
		}
		}
		else c=td.d-bd.d;
	if(bd.m>td.m)
		{td.y--;
		b=(td.m+12)-bd.m;
		}
		else b=td.m-bd.m;
	 a=td.y-bd.y;
	 if(c>=15) b++;
	 if(b>=6) a++;
	 return a;
  }
void main()
	{
	 date birthday;
	 cout<<"enter birth date";
	 birthday.input();
date today;
	 cout<<"enter today's date";
	 today.input();
	 int age=today-birthday;
	 cout<<"your age is :"<<age;
	 }


