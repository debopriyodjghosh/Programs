// STATIC DATA AND STATIC FUNCTION
#include<iostream>
using namespace std;
class num
{
	private:
		static int a;
		int b;
	public:
		void input()
		{
			cout<<"\nEnter no:";
			cin>>b;
			a++;
		}
		static void show()
		{
			cout<<"Value of a="<<a<<"\n";
		}
};

int num::a;

int main()
{
	num ob1,ob2,ob3;
	ob1.input();
	ob1.show();
	num::show();
	ob2.input();
	ob2.show();
	num::show();
	ob3.input();
	ob3.show();
	num::show();
	return 0;
}

