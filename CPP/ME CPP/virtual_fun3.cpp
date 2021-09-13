/* VIRTUAL FUNCTION A HIERCHICAL */
#include<iostream>
using namespace std;
class A
{
	public :
		virtual void show()
		{
			cout<<"This is kolkata.";
		}
};
class B : public A
{
	public : 
	   void show()
	   {
	   	cout<<"\nThis is Mumbai.";
	   }
};
class C : public B
{
	
};

int main()
{
	A ob1;
	B ob2;
	C ob3;
	ob1.show();
	ob2.show();
	ob3.show();
	
	return 0;
}
