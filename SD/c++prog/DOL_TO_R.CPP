#include<iostream.h>
#include<conio.h>

template<class T>
class Rupee;

template<class T>
class Dollar
{
	public:
		T d;
		void getdata()
		{
			cout<<"\n ENTER THE PRICE IN DOLLAR:";
			cin>>d;
		}
		Dollar <T> operator=(Rupee <T> r1)
		{
			d=(T)r1.r/(50);
			return (*this);
		}
		void display_rupee_to_dollar()
		{
			cout<<"\n RUPEE TO DOLLAR CONVERSION:"<<d;
		}

};
template<class T>
class Rupee
{
	public:
		T r;
		void getdata()
		{
			cout<<"\n ENTER THE PRICE IN RUPEES:";
			cin>>r;
		}
		Rupee <T> operator=(Dollar <T> d1)
		{
			r=(T)d1.d*50;
			return (*this);
		}
};
void main()
{
	Dollar <float> d1,d2;
	Rupee <float> r1,r2;
	clrscr();
	r2.getdata();
	d2.getdata();
	r1=d2;

	cout<<"\n DOLLAR TO RUPEES CONVERSION:"<<r1.r<<"\n";
	d1=r2;
	cout<<"\n RUPEES TO DOLLAR CONVERSION:"<<d1.d;
	getch();
}
