/*  TEMPLATE - GENERIC FUNCTION */

#include<iostream>
using namespace std;

template<class X>
void swap(X &a,X &b)
{
	X temp;
	temp = a;
	a = b;
	b = temp;
};

int main()
{
	int i = 10 , j = 20;
	double p = 10.1 , q = 20.3;
	char c = 'A' , d = 'B';
	cout<<"Before swapping"<<endl;
	cout<<"i & j :"<<i<<j;
	cout<<"\np & q :"<<p<<q;
	cout<<"\nc & d :"<<c<<d;
	swap(i,j);
	swap(p,q);
	swap(c,d);
	
	cout<<A swapping<<endl;
	cout<<"i & j :"<<i<<j;
	cout<<"\np & q :"<<p<<q;
	cout<<"\nc & d :"<<c<<d;
	
	return 0;
	
}
