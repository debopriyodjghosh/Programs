/* AMBIGUITY SOLVE BY INHERITING AS VIRTUAL */
#include<iostream>
using namespace std;

class base
{
	public : int i;
};
class derived1 : virtual public base
{
	public : int j; 
};
class derived2 : virtual public base
{
	public : int k;
};
class derived3 : public derived1,public derived2
{
	public : int sum;   //only single copy of i will be inherited
};

int main()
{
	derived3 ob;
	ob.i = 10;
	ob.j = 20;
	ob.k = 30;
	ob.sum = ob.i + ob.j + ob.k;
	cout<<ob.i<<"\n";
	cout<<ob.j<<"\n";
	cout<<ob.k<<"\n";
	cout<<"Sum = "<<ob.sum;
	return 0;
}
