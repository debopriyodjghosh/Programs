/* PURE VIRTUAL FUNCTION - CONVERTER */

#include<iostream>
using namespace std;

class convert                     // abstruct class
{
	protected :
		double val1,val2;
	public :
		convert(double i)
		{
			val1 = i;
		}
		double getconvert()
		{
			return (val2);
		}
		double getinit()
		{
			return (val1);
		}
		virtual void compute()=0;
};

class lttogl : public convert
{
	public :
		lttogl(double i):convert(i)
		{
		}
		void compute()
		{
			val2 = val1 / 3.7854;
		}
};

class ftoc : public convert
{
	public :
		ftoc(double i):convert(i)
		{
		}
		void compute()
		{
			val2 = (val1 - 32) / 1.8;
		}
};

class ctof : public convert
{
	public :
		ctof(double i):convert(i)
		{
		}
		void compute()
		{
			val2 = (val1 + 32) * 1.8;
		}
};

class fttomt : public convert
{
	public :
		fttomt(double i):convert(i)
		{
		}
		void compute()
		{
			val2 = val1 / 3.2808;
		}
};

int main()
{
	convert *p;
	lttogl ob1(4.00);
	ftoc ob2(98.00);
	ctof ob3(100.00);
	fttomt ob4(10.00);
	
	p = &ob1;
	cout<<p->getinit()<<" Liters = ";
	p->compute();
	cout<<p->getconvert()<<" Gallones\n";
	
	p = &ob2;
	cout<<p->getinit()<<" Fahrenhite = ";
	p->compute();
	cout<<p->getconvert()<<" Celsius\n";
	
	
	p = &ob3;
	cout<<p->getinit()<<" Celsius = ";
	p->compute();
	cout<<p->getconvert()<<" Fahrenhite\n";
	
	p = &ob4;
	cout<<p->getinit()<<" Feet = ";
	p->compute();
	cout<<p->getconvert()<<" Meters\n";
	
	return 0;
}
