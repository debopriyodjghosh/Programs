/* CALLING A VIRTUAL FUNCTION THROUGH BASE CLASS REFERENCE */
#include<iostream>
using namespace std;

class A
{
	public :
		virtual void show()
		{
			cout<<"This is Kolkata.";
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
class C : public A
{
	public :
		void show()
		{
			cout<<"\nThis is delhi.";
		}
};
void function(A &t)
{
	t.show();
}

int main()
{
	A ob1;
	B ob2;
	C ob3;
	function(ob1);
	function(ob2);
	function(ob3);
	
	return 0;
}
