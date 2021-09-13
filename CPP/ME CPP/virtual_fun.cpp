/* VIRTUAL FUNCTION / FUNCTION OVERRIDING */
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
			cout<<"\nThis is mumbai.";
		}
};
class C : public B
{
	public :
		void show()
		{
			cout<<"\nThis is Delhi.";
		}
};

int main()
{
	A ob1, *p;
	B ob2;
	p = &ob1;
	p->show();
	p = &ob2;
	p->show();
	C ob3;
	p = &ob3;
	p->show();
	return 0;
}
