/*  program to add two complex no. using friend function */
#include<iostream>
using namespace std;
class complex
{
	private :int real,imag;
	public :
			void input()
			{
				cout<<"Enter real and imaginary part of a complex no :";
				cin>>real>>imag;
			}
			void show()
			{
				if(imag<0)
					cout<<"\nThe no. ="<<real<<"-i"<<imag*(-1);
				else
					cout<<"\nThe no. ="<<real<<"+i"<<imag;
			}
			friend complex add(complex,complex);
};
complex add(complex t1,complex t2)
{
	complex temp;
	temp.real=t1.real + t2.real;
	temp.imag=t1.imag + t2.imag;
	return temp;
}

int main()
{
	complex num1,num2,num3;
	num1.input();
	num2.input();
	num1.show();
	num2.show();
	num3=add(num1,num2);
	num3.show();
	return 0;
}
