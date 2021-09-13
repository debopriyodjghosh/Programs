////BASE ACCESS CONTROL(ACCESSS SPECIFIER)
#include<iostream>
using namespace std;

class A
{
	protected:
		int i;
	public:
		void input()
		{
			cout<<"Enter value of i:";
			cin>>i;
		}
		void show()
		{
			cout<<i<<"\n";
		}
};

class B:protected A
{
	private:
		int b;
	public:
		void getdata()
		{
			cout<<"enter value of b:";
			cin>>b;
		}
		void show1()
		{
			cout<<b<<"\n";
		}
};

int main()
{
	B ob1;
//	ob1.input();
//	ob1.show();
	ob1.getdata();
	ob1.show1();
}
