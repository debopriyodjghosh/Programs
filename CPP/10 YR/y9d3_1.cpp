#include<iostream>
using namespace std;
class fraction
{
	int numerator,denominator;
	public:
		fraction()
		{
			numerator=0;
			denominator=1;		
		};
		fraction(int n=0,int d=1)
		{
			numerator=n;
			denominator=d;		
		};
		fraction operator+(fraction x);
		fraction operator*(fraction x);
		fraction operator-();
		friend ostream & operator<<(ostream &dout,fraction &x);
		
};
fraction fraction::operator+(fraction x)
{
	fraction r(0,1);
	int i,min,max;
	if(denominator<=x.denominator)
	{
		min=denominator;
		max=x.denominator;
	}
	else
	{
		min=x.denominator;
		max=denominator;
	}	
	i=max;
	while(i%max!=0 or i%min!=0)
	{
		i++;
	}
	int r1,r2;
	r1=i/denominator;
	r2=i/x.denominator;
	r.numerator=r1*numerator+r2*x.numerator;
	r.denominator=i;
	return r;	
}
fraction fraction::operator*(fraction x)
{
	fraction r(0,1);
	r.numerator=numerator*x.numerator;
	r.denominator=denominator*x.denominator;
	return r;
}
ostream & operator<<(ostream &dout,fraction &x)
{
	dout<<endl<<x.numerator<<"/"<<x.denominator;
	return dout;
}
int main()
{
	fraction a(6,5),b(6,9),c(2,3),d(6,1),result(0,1);
	result=(a+b)*c+d;
	cout<<"The Value of The expression is:"<<result;
	return 0;
}

