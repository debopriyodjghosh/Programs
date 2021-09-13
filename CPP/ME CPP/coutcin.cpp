#include<iostream>
using namespace std;

class num
{
	private: int a;
	public:
		    num()
		    {
		    	a=0;
			}
		   friend istream & operator>>(istream &,num &);
		   friend ostream & operator<<(ostream &, num &);
		   num operator+=(num);
};
num num :: operator+=(num t)
{
	a=a+t.a;
	return *this;
}
istream & operator>>(istream & din, num &t)
{
	din>>t.a;
	return din;
}
ostream & operator<<(ostream & dout,num & t)
{
  dout<<t.a;
  return dout;
}
main()
{
	num ob1,ob2;
	cout<<"\nEnter a number:";
	cin>>ob1;//cin=operator>>(cin,ob1);
	cout<<"\nThe value="<<ob1;
	cout<<"\nEnter a number:";
	cin>>ob2;//cin=operator>>(cin,ob1);
	cout<<"\nThe value="<<ob2;
	ob1+=ob2;//ob1=ob1+ob2;
	cout<<"\nthe value="<<ob1;
}
