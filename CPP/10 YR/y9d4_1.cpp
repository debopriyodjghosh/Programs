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
		int operator==(fraction x);
		int operator!=(fraction x);
		friend ostream & operator<<(ostream &dout,fraction &x);
		fraction operator+=(fraction x);
};
int fraction::operator==(fraction x)
{
	float a,b;
	a=numerator/denominator;
	b=x.numerator/x.denominator;
	if (a==b)
		return 1;
	else
		return 0;
}
int fraction::operator!=(fraction x)
{
	float a,b;
	a=numerator/denominator;
	b=x.numerator/x.denominator;
	if (a!=b)	
		return 1;
	else
		return 0;
}
ostream & operator<<(ostream &dout,fraction &x)
{
	dout<<endl<<x.numerator<<"/"<<x.denominator;
	return dout;
}
fraction fraction::operator+=(fraction x)
{
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
	numerator=r1*numerator+r2*x.numerator;
	denominator=i;
	return *this;	
}
int main()
{
	fraction n1(6,5),n2(6,9),n3(2,3);
	cout<<n1;
	cout<<n2;
	cout<<n3;
	if(n2==n3)
		cout<<"\nequal";
	else
		cout<<"\nnot equal";
	if(n1!=n2)
		cout<<"\nnot equal";
	else
		cout<<"\nequal";
	n1+=n2;
	cout<<n1;
	n2+=n3;
	cout<<n2;
	return 0;
}

