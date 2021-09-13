#include<iostream.h>
#include<conio.h>
#include<math.h>

class triangle
{
	float a, b, c, area;
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
			else if(a == b )
			{
				cout<<"\nIt is isosceles triangle.";
				area = c*((sqrt(4*a*a-c*c))/4);
			}
			else if(a==c)
			{
				cout<<"\nIt is isosceles triangle.";
				area = b*((sqrt(4*a*a-b*b))/4);
			}
			else if(b==c)
			{
				cout<<"\nIt is isosceles triangle.";
				area = a*((sqrt(4*b*b-a*a))/4);
			}
			else
			{
				cout<<"\nIt is scalene triangle.";
				float s = (a+b+c)/2;
				area = sqrt(s * (s-a) * (s-b) * (s-c));
			}
			cout<<"\nThe area of the triangle= "<<area;
		}
		void show()
		{
			cout<<"\nThree sides are = "<<a<<"\t"<<b<<"\t"<<c;
		}
};

void main()
{
	clrscr();
	triangle ob1;
	ob1.input();
	ob1.show();
	ob1.area1();
	getch();
}
