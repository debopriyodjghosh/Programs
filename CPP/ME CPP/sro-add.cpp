#include<iostream>
using namespace std;
class num
{
	private :int a;
	public :
			void input();
			void show();
			void add(num,num);
			num sum(num);
};
void num::input()
{
	cout<<"\nEnter a number :";
	cin>>a;
}
void num::show()
{
	cout<<"\nThe value ="<<a;
}
void num::add(num t1,num t2)
{
	a=t1.a+t2.a;
}
num num::sum(num t)
{
	num temp;
	temp.a=a+t.a;
	return temp;
}

int main()
{
	num ob1,ob2,ob3;
	ob1.input();
	ob2.input();
	ob1.show();
	ob2.show();
	ob3.add(ob1,ob2);
	ob3=ob1.sum(ob2);
	ob3.show();
	ob3.show();
	return 0;
}
