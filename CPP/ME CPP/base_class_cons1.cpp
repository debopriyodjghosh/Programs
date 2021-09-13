/* PASSING PARAMETER TO BASE CLASS CONSTRUCTOR */
#include<iostream>
using namespace std;

class base
{
	protected:
		int i;
	public:
		base()
		{
			i=0;
		}
		base(int x)
		{
			i=x;
			cout<<"\nConstructing base";
		}
		~ base()
		{
			cout<<"\nDestructing base";
		}
};

class derived:public base
{
	private:
		int j;
	public:
		derived()
		{
			j=0;
		}
		derived(int x,int y):base(y)   //PASSING PARAMETER TO BASE CLASS
		{
			j=x;
			cout<<"\nConstructing derived";
		}
		~ derived()
		{
			cout<<"\nDestructing derived";
		}
		void show()
		{
			cout<<"\nValue of i="<<i;
			cout<<"\nValue of j="<<j;
		}
};

int main()
{
	derived ob(3,4);
	ob.show();
	return 0;
}
