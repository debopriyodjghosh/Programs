#include<math.h>
#include<iostream.h>
#include<conio.h>

class figure
{
	protected:
		float a, b, c, d, d1, d2, area;
		float pi;
	public:
	figure()
	{
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		d1 = 0;
		d2 = 0;
		area = 0;
		pi = 3.14;
	}
	virtual void area1() = 0;
	virtual void input() = 0;
};

class rectangle:public figure
{
	public:
		void input()
		{
			cout<<"\nEnter length: ";
			cin>>a;
			cout<<"\nEnter breath: ";
			cin>>b;
		}
		void area1()
		{
			area = a*b;
			cout<<"\nArea = "<<area;
		}
};

class square:public figure
{
	public:
		void input()
		{
			cout<<"\nEnter sides: ";
			cin>>a;
		}
		void area1()
		{
			area = a*a;
			cout<<"\nArea = "<<area;
		}
};

class rhombus:public figure
{
	public:
		void input()
		{
			cout<<"\nEnter two diagonals: ";
			cin>>d1>>d2;
		}
		void area1()
		{
			area = d1*d2/2;
			cout<<"\nArea = "<<area;
		}
};

class triangle:public figure
{
	public:
		void input()
		{
			cout<<"\nEnter three sides: ";
			cin>>a>>b>>c;
		}
		void area1()
		{
			if(a == b && a == c)
			{
				cout<<"\nIt is equilateral triangle.";
				area = a*a*sqrt(3)/4;
			}
			else if(a == b || a == c || b == c)
			{
				cout<<"\nIt is isosceles triang";
				area = (1/2)*a*a*sqrt(((b*b)/(a*a)) - (1/4));
			}
			else
			{
				cout<<"\nIt is scalene triangle.";
				float s = (a+b+c)/2;
				area = sqrt(s * (s-a) * (s-b) * (s-c));
			}
			cout<<"\nThe area of the triangle= "<<area;
		}
};

class circle:public figure
{
	public:
		void input()
		{
			cout<<"\nEnter radius: ";
			cin>>a;
		}
		void area1()
		{
			area = pi*a*a;
			cout<<"\nThe area of the circle= "<<area;
		}
};

void main()
{
	clrscr();
	figure *f;
	rectangle ob1;
	square ob2;
	rhombus ob3;
	triangle ob4;
	circle ob5;
	cout<<"\nRectangle";
	f = &ob1;
	f->input();
	f->area1();
	cout<<"\nSquare";
	f = &ob2;
	f->input();
	f->area1();
	cout<<"\nRhombus";
	f = &ob3;
	f->input();
	f->area1();
	cout<<"\nTriangle";
	f = &ob4;
	f->input();
	f->area1();
	cout<<"\nCircle";
	f = &ob5;
	f->input();
	f->area1();
	getch();
}
