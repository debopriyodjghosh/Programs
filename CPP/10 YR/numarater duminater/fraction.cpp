
/*design a class fraction which contains data members numerator and denominator.Include default argument constractor 
with default arguments taken as numerator =0 and denominator =1.Overload the operators -(unary minus),+(addition),/(division).
Test your program with arithmatic expression -a/b+c,where a,b,c are objects of fraction class*/ 


#include<iostream>
#include<conio.h>
using namespace std;
class fraction
{
	private:int neumerator;
			int denominator;
	public:
	fraction()
	{
		neumerator=0;
		denominator=1;
    }
    void input();
    fraction operator+(fraction);
    fraction operator/(fraction);
    fraction operator-();
    void show();
    int hcf(int,int);
};
void fraction::input()
{
	cout<<"enter the neumerator";
	cin>>neumerator;
	cout<<"enter the denominator";
	cin>>denominator;
}
fraction fraction::operator+(fraction t)
{
	fraction temp;
	temp.neumerator=neumerator*t.denominator+denominator*t.neumerator;
	temp.denominator=denominator*t.denominator;
	return temp;
}
fraction fraction::operator/(fraction t)
{
	fraction temp;
	temp.neumerator=neumerator*t.denominator;
	temp.denominator=denominator*t.neumerator;
	return temp;
}
fraction fraction::operator-()
{
	neumerator=-neumerator;
	denominator=denominator;
	return *this;
}
void fraction::show()
{
	int c;
	if(neumerator<0)
	  c=hcf((-1)*neumerator,denominator);
	else
	  c=hcf(neumerator,denominator);  
	neumerator=neumerator/c;
	denominator=denominator/c;
	cout<<"\nthe value="<<neumerator<<"/"<<denominator;
}
int fraction::hcf(int x,int y)
{
	if(y==0)
	return x;
	else
	return hcf(y,x%y);
}
int main()
{
	fraction a,b,c;
	a.show();
	b.show();
	c.show();
	a.input();
	b.input();
	c.input();
	a.show();
	b.show();
	c.show();
	a=a/b;
	a=a+c;
	-a;
	a.show();
	b.show();
	c.show();
	return 0;
}







