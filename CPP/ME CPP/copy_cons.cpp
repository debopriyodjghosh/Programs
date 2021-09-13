/* program of copy constractor */
#include<iostream>
using namespace std;
class num
{
	private :int a;
	public :
			num()   //default constractor
			{
				a=0;
			}
			num(int x)   //parametric constractor
			{
				a=x;
			}
			num(num &t)   //copy constractor
			{
				a=t.a;
			}
			void input()
			{
				cout<<"Enter a number:";
				cin>>a;
			}
			void show()
			{
				cout<<"\nThe number ="<<a;
			}
			~num()   //destractor
			{
				cout<<"\nObject destroyed";
			}
};

int main()
{
	num ob1;   //invokes default vconstructor
	num ob2(15);   //invokes parametric constractor
	num ob3(ob2);   //invokes copy constractor
	ob1.show();
	ob2.show();
	ob3.show();
	return 0;
}
