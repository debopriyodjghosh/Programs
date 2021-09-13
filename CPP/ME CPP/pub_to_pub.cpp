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
			cout<<"Enter value:";
			cin>>i;
		}
		void show()
		{
			cout<<"\n"<<i;
		}
};

class B:public A
{
	private:int b;
	public:
		void getdata()
		{
			cout<<"\nEnter values of b & i: ";
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
	ob1.input();
	ob1.show();
	ob1.getdata();
	ob1.show1();
	
	return 0;
}
