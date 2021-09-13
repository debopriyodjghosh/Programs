//Class type to Basic type
#include<iostream>
using namespace std;
class num
{
	int a;
	public:
		void input()
		{
			cout<<"Enter a number:";
			cin>>a;
		}
		void show()
		{
			cout<<a;
		}
		int operator+(num);
};
int num::operator+(num t)
{
	int b;
	b=a+t.a;;
	return b;
}
int main()
{
	int a;
	num ob1,ob2;
	ob1.input();
	ob2.input();
	a=ob1+ob2;  //a=ob1.operator+(ob2)
	cout<<a;
	return 0;
}
