#include<iostream>
using namespace std;
class fraction
{
private:
int neumerator,dinominator;
public:
fraction();
fraction(int,int);
void read();
void display();
friend int lcm(int,int);
friend fraction add(fraction,fraction);
friend fraction sub(fraction,fraction);
};


fraction::fraction()
{
neumerator=0;
dinominator=0;
}


fraction::fraction(int a,int b)
{
neumerator=a;
dinominator=b;
}

void fraction::read()
{
cout<<"enter neumerator:\n";
cin>>neumerator;
cout<<"enter dinominator:\n";
cin>>dinominator;
}


void fraction::display()
{
cout<<neumerator<<" / "<<dinominator<<endl;
}


int lcm(int a,int b)
{
int c,i=2;
c=a;
while(c%b!=0)
{
c=a*i;
i++;
}
return c;
}


fraction add(fraction a,fraction b)
{
fraction s;
s.dinominator=lcm(a.dinominator,b.dinominator);
s.neumerator=(s.dinominator / a.dinominator)*a.neumerator + (s.dinominator / b.dinominator)*b.neumerator;
return s;
}


fraction sub(fraction a,fraction b)
{
fraction s;
s.dinominator=lcm(a.dinominator,b.dinominator);
s.neumerator=(s.dinominator / a.dinominator)*a.neumerator - (s.dinominator / b.dinominator)*b.neumerator;
return s;
}


int main()
{
fraction x,y,z,q;
x.read();
x.display();
y.read();
y.display();
cout<<"fraction addition is:\n";
z=add(x,y);
z.display();
cout<<"fraction subtruction is:\n";
q=sub(x,y);
q.display();
return 0;
}
