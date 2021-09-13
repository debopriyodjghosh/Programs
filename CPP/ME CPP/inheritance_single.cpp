// SINGLE INHERITANCE
#include<iostream>
using namespace std;
class A
{
	int b;
	public:
		int a;
		void seta(int x)
		{
			a=x;
		}
		void setb(int y)
		{
			b=y;
		}
		void show()
		{
			cout<<a<<"\n";
		}
};
class B : public A
{
	int k;
	public:
		void getdata()
		{
			cout<<"\nEnter value:";
			cin>>k;
		}
		void showk()
		{
			cout<<k<<"\n";
		}
};
int main()
{
	A ob1;
	ob1.seta(15);
	ob1.setb(20);
	ob1.show();
	B ob2;
	ob2.seta(25);
	ob2.show();
	ob2.getdata();
	ob2.showk();
	
	return 0;
}
