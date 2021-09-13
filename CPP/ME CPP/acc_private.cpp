//BASE ACCESS CONTROL(ACCESSS SPECIFIER)
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

class B:private A
{
	private:
		int b;
	public:
		void getdata()
		{
			cout<<"Enter values of b and i";
			cin>>b>>i;
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
