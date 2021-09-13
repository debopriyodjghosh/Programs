#include<iostream.h>

#define TRUE 1
#define FALSE 0

typedef unsigned char Boolean;

enum sign (plus, minus);
class Currency
{
//Overload <<
friend ostream& operator<<(ostream& out, const Currency& x);
public:
//Constructor
Currency(sign s=plus,unsigned long d=0,unsigned int c=0);
//Destructor
~Currency(){}
Boolean Set(sign s, unsigned long d, unsigned int c);
Boolean Set(float a);
sign Sign() const
{if(Amount<0) return minus;
else return plus;}
unsigned long Dollars() const
{if(Amount<0) return (-Amount)/100;
else return Amount/100;}
unsigned long Cents() const
{if(Amount<0) return -Amount - Dollars() * 100;
else return Amount+Dollars()*100;}
Currency Add(const Currency& x) const;
Currency& Increment(const Currency& x)
{Amount += x.Amount; return *this;}
Currency operator+(const Currency& x) const;
Currency& operator+=(const Currency& x)
{Amount += x.Amount; return *this;}
//void Output(ostream& out) const;
private:
long Amount;
};
// Bad intializers
class BadInitializers
{
public:
BadInitializers(){}
}

Currency::Currency(sign s,unsigned long d,unsigned int c)
{
if(c>99) throw BadInitializers();
Amount=d*100+c;
if(s==minus) Amount=-Amount;
}

void Currency::Set(sign s,unsigned long d,unsigned int c)
{
if(c>99) throw BadInitializers();
Amount=d*100+c;
if(s==minus) Amount=-Amount;
}

Currency Currency::operator+(const Currency& x) const
{
Currency y;
y.Amount=Amount+x.Amount;
return y;
}

/*void Currency::Output(ostream& out) const
{
long a=Amount;
if(a<0)
{
out<<'-';
a=-a;
}
long d=a/100;
out<<'$'<<d<<'.';
int c=a-d*100;
if(c<10) out<<"0";
out<<c;
}

//Overload <<
//ostream& operator<<(ostream& out, const Currency& x)
//{
//x.Output(out);return out;
//}
*/
ostream& operator<<(ostream& out, const Currency& x)
{
long a=x.Amount;
if(a<0)
{
out<<'-';
a=-a;
}
long d=a/100;
out<<'$'<<d<<'.';
int c=a-d*100;
if(c<10) out<<"0";
out<<c;
return out;
}