/* PURE VIRTUAL FUNCTION - FOR FIGURE */

#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;

class figure
{
	protected : float l,w,r,d,p,a,s,a1,a2,a3;
	public :
		virtual void input() = 0;
		virtual void compute() = 0;
		virtual void show() = 0;
};

class circle : public figure
{
	public :
		void input()
		{
			cout<<"\n Enter value of radius :";
			cin>>r;
		}
		void compute()
		{
			p = 2 * pi * r;
			a = pi * r *r;
		}
		void show()
		{
			cout<<"\nPerimeter of circle ="<<p;
			cout<<"\nArea of circle ="<<a;
		}
};

class rectangle : public figure
{
	public :
		void input()
		{
			cout<<"\nEnter value of length :";
			cin>>l;
			cout<<"\nEnter value of width :";
			cin>>w;
		}
		void compute()
		{
			p = 2 * (l + w);
			a = l * w;
		}
		void show()
		{
			cout<<"\npereimeter="<<p;
			cout<<"\nArea="<<a;
		}
};

class triangle : public figure
{
	public :
		void input()
		{
			cout<<"\nEnter value of 1st arm, a1 :";
			cin>>a1;
			cout<<"\nEnter value of 1st arm, a1 :";
			cin>>a2;
			cout<<"\nEnter value of 1st arm, a1 :";
			cin>>a3;
		}
		void compute()
		{
			p = a1 + a2 + a3;
			s = (a1 + a2 + a3) / 2;
			a = sqrt(s*(s-a1)*(s-a2)*(s-a3));
		}
		void show()
		{
			cout<<"\nPerimeter of triangle :"<<p;
			cout<<"\nArea of triangle :"<<a;
		}
};

int main()
{
	figure *x;
	circle ob1;
	rectangle ob2;
	triangle ob3;
	
	x = &ob1;
	x->input();
	x->compute();
	x->show();
	
	x = &ob2;
	x->input();
	x->compute();
	x->show();
	
	x = &ob3;
	x->input();
	x->compute();
	x->show();
	
	return 0;
}
