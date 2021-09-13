#include<iostream>
using namespace std;
class rational
{
	private :int n,d;
	public :
			void input();
			void show();
			void add(rational,rational);
			int hcf(int,int);
			rational sum(rational);
};
void rational::input()
{
	cout<<"\nEnter numerator :";
	cin>>n;
	cout<<"\nEnter denominator :";
	cin>>d;
}
void rational::show()
{
	int c=hcf(n,d);
	n=n/c;
	d=d/c;
	cout<<"\nThe value ="<<n<<"/"<<d;
}
int rational::hcf(int x,int y)
{
	if(y==0)
		return x;
	else
		return hcf(y,x%y);
}
void rational::add(rational t1,rational t2)
{
	n=(t1.n*t2.d)+(t1.d*t2.n);
	d=(t1.d*t2.d);
}
rational rational::sum(rational t)
{
	rational temp;
	temp.n=n*t.d+d*t.n;
	temp.d=d*t.d;
	return temp;
}

int main()
{
	rational num1,num2,num3,num4;
	num1.input();
	num2.input();
	num1.show();
	num2.show();
	num3.add(num1,num2);
	num4=num1.sum(num2);
	num3.show();
	num4.show();
	return 0;
}
