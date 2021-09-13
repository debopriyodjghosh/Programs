#include<iostream>
using namespace std;
class complex
{
	float real,imag;
	public:
		void input()
		{
			cout<<"Enter real part : ";
			cin>>real;
			cout<<"\nEnter imaginary part : ";
			cin>>imag;
		}
		void show()
		{
			if(imag<0)
				cout<<real<<"-i"<<imag*(-1)<<"\n";
			else
			cout<<real<<"+i"<<imag<<"\n";
		}
		complex division(complex t)
		{
		complex f;
		float c,d,e;
		c= (t.real*t.real) + (t.imag*t.imag);
		d=(real*t.real)+(imag*t.imag);
		e=(real*t.imag*(-1))+(imag*t.real);
		f.real=d/c;
		f.imag=e/c;
		return f;
		}
};
int main()
{
	complex ob1,ob2,ob3;
	ob1.input();
	ob1.show();
	ob2.input();
	ob2.show();
	ob3=ob1.division(ob2);
	ob3.show();
	return 0;
}
