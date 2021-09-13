/* AMBIGUITY DUE TO MULTIPLE BASE CLASS */
#include<iostream>
using namespace std;

class base
{
	public: int i;
};
class derived1 : public base
{
	public: int j;
};
class derived2 : public base
{
	public : int k;
};
class derived3 : public derived1,public derived2
{
	public: int sum;
};

int main()
{
	derived3 ob;
//	ob.i = 10;       //error - this is ambiguous
	ob.j = 20;      //which i ?
	ob.k = 30;
//	ob.sum = ob.i + ob.j + ob.k;
//	cout<<ob.i;     //error
	cout<<ob.j<<"\n";
	cout<<ob.k<<"\n";
	
	/* This ambiguity can be solved by using scoperesolution operator */
	ob.derived1::i = 10;
	ob.derived2::i = 15;
	cout<<ob.derived1::i<<"\n";
	ob.sum = ob.derived1::i + ob.j + ob.k;
	cout<<"Sum = "<<ob.sum<<"\n";
	return 0;
}
