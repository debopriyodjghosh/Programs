#include<iostream>
using namespace std;
class complex
{
	private :int real,imag;
	public :
			void input();
			void display();
			void add(complex,complex);
};
void complex::input()
{
	cout<<"\nEnter real and imaginary part :";
	cin>>real>>imag;
}
void complex::display()
{
	if(imag<0)
	  cout<<"\nThe value ="<<real<<"-i"<<imag*(-1);
	else
	  cout<<"\nThe value ="<<real<<"+i"<<imag;
}
void complex::add(complex t1,complex t2)
{
	real=t1.real+t2.real;
	imag=t1.imag+t2.imag;
}

int main()
{
	complex num1,num2,num3;
	num1.input();
	num2.input();
	num1.display();
	num2.display();
	num3.add(num1,num2);
	num3.display();
	return 0;
}
