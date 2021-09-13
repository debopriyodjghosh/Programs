/* program for <<(putto) & >>(getin) operator overloading */
#include<iostream>
using namespace std;
class num
{
	private :int a;
	public :
			num()
			{
				a=0;
			}
			num(int x)
			{
				a=x;
			}
			friend ostream & operator<<(ostream &,num &);
			friend istream & operator>>(istream &,num &);
};
ostream & operator<<(ostream & dout,num & t)
{
	dout<<t.a;
	return dout;
}
istream & operator>>(istream & din,num & t)
{
	din>>t.a;
	return din;
}

int main()
{
	num ob;
	cout<<"Enter a object :";
	cin>>ob;   //operator>>(cin,ob);
	cout<<"\nThe value of object ="<<ob; //operator<<(cout,ob);
}

