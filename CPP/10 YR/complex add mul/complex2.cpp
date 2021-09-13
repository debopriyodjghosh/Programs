/* program for complex no. operation */
#include<iostream>
using namespace std;
class complex
{
	private :int real,imag;
	public :
			void input()
			{
				cout<<"Enter real and imaginary part :";
				cin>>real>>imag;
			}
			void show()
			{
				if(imag<0)
					cout<<"\nThe number :"<<real<<"-i"<<imag;
				else
					cout<<"\nThe number :"<<real<<"+i"<<imag;
			}
			complex operator+(complex t)
			{
				 complex temp;
				temp.real=real+t.real;
				temp.imag=imag+t.imag;
				return temp;
			}
			complex operator*(complex t)
			{
				complex temp;
				temp.real=(real*t.real)-(imag*t.imag);
				temp.imag=(real*t.imag)+(imag*t.real);
				return temp;
			}
};
int main()
{
	complex num1,num2,num3,num4;
	num1.input();
	num2.input();
	num1.show();
	num2.show();
	num3=num1+num2;
	num3.show();
	num4=num1*num2;
	num4.show();
	
	return 0;
}
