/*Design a class Mytime having hour,minute,second as data members.Use suitable constructor to initiate the object.
Overload + and - operaters to add and subtract two objects of the class*/


#include<iostream>
#include<conio.h>
using namespace std;
class mytime
{
	private:int hour,minute,second;
	public:
		mytime()
		{
			hour=0;
			minute=0;
			second=0;
		}
		mytime(int x,int y,int z)
		{
			hour=x;
			minute=y;
			second=z;
		}
		mytime operator+(mytime);
		mytime operator-(mytime);
		void show();
		
};
mytime mytime::operator+(mytime t)
{
	mytime temp;
	temp.second=second+t.second;
	if(temp.second>=60)
	{
		temp.second=temp.second-60;
		temp.minute=temp.minute+1;
	}
	temp.minute=temp.minute+minute+t.minute;
	if(temp.minute>=60)
	{
		temp.minute=temp.minute-60;
		temp.hour=temp.hour+1;
	}
	temp.hour=temp.hour+hour+t.hour;
	return temp;
}
mytime mytime::operator-(mytime t)
{
	mytime temp;
	if(t.second>second)
	{
		temp.second=second+60;
		t.minute=t.minute+1;
		temp.second=temp.second-t.second;
	}
	else
    	temp.second=second-t.second;
	if(t.minute>minute)
	{
		temp.minute=minute+60;
		t.hour=t.hour+1;
		temp.minute=temp.minute-t.minute;
	}
	else
		temp.minute=minute-t.minute;
	temp.hour=hour-t.hour;
		return temp;
}
void mytime::show()
{
	cout<<"\ntime= "<<hour<<":"<<minute<<":"<<second;
}
int main()
{
	mytime ob1(12,20,30),ob2(10,30,50),ob3,ob4;
//	ob1.mytime(12,30,50);
	ob1.show();
//	ob2.mytime(10,20,40);
	ob2.show();
	ob3=ob1+ob2;
	ob3.show();
	ob4=ob1-ob2;
	ob4.show();
}
