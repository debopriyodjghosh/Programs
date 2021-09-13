#include<iostream>
#include<stdlib.h>
using namespace std;
class complex
{
	float real,imag;
	public:
		void input()
		{
			cout<<"\nEnter real part :";
			cin>>real;
			cout<<"\nenter imaginary part :";
			cin>>imag;
		}
		void show()
		{
			cout<<"\nThe complex no. :";
			if(imag<0)
				cout<<real<<" -i"<<imag*(-1);
			else
				cout<<real<<" +i"<<imag;
			cout<<"\n";
		}
		complex operator+(complex);
		complex operator-(complex);
		complex operator*(complex);
		complex operator/(complex);
};
complex complex::operator+(complex t)
{
	complex temp;
	temp.real=real+t.real;
	temp.imag=imag+t.imag;
	return temp;
}
complex complex::operator-(complex t)
{
	complex temp;
	temp.real=real-t.real;
	temp.imag=imag-t.imag;
	return temp;
}
complex complex::operator*(complex t)
{
	complex temp;
	temp.real=(real*t.real)-(imag*t.imag);
	temp.imag=(real*t.imag)+(imag*t.real);
	return temp;
}
complex complex::operator/(complex t)
{
	complex temp;
	float f;
	f=(t.real*t.real)+(t.imag*t.imag);
	temp.real=((real*t.real)+(imag*t.imag))/f;
	temp.imag=((real*t.imag*(-1))+(imag*t.real))/f;
	return temp;
}

int main()
{
	complex ob1,ob2,ob3;
	int ch;
	while(1)
	{
	    cout<<"\n\t\t****COMPLEX NUMBER OPERATIONS*****\n";
	    cout<<"1 for input :\n2 for Add the numbers :\n3 for subtract the numbers :";
	    cout<<"\n4 for multiply the numbers :\n5 for divide the numbers :\n6 for end :";
	    cout<<"\nEnter your choice :";
	    cin>>ch;
	    switch(ch)
	    {
	    	case 1:
	    		ob1.input();
	    		ob1.show();
	    		ob2.input();
	    		ob2.show();
	    		break;
	    	case 2:
	    		ob3=ob1+ob2;
	    		ob3.show();
	    		break;
	    	case 3:
	    		ob3=ob1-ob2;
	    		ob3.show();
	    		break;
	    	case 4:
	    		ob3=ob1*ob2;
	    		ob3.show();
	    		break;
	    	case 5:
	    		ob3=ob1/ob2;
	    		ob3.show();
	    		break;
	    	case 6:
	    		exit(1);
	    	default :
	    		cout<<"\nWrong choice !!!";
	    		continue;
		}
    }
    return 0;
}
