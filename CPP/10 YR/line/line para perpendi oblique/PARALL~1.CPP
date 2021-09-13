#include<conio.h>
#include<iostream>
using namespace std;

class line
{
	int x1, x2, y1, y2;
	public:
		void input()
		{
			cout<<"\nEnter starting points: ";
			cin>>x1>>y1;
			cout<<"\nEnter end points: ";
			cin>>x2>>y2;
		}
		friend void check(line, line);
};

void check(line t1, line t2)
{
	int m1, m2;
	m1 = (t1.y2 - t1.y1) / (t1.x2-t1.x1);
	m2 = (t2.y2 - t2.y1) / (t2.x2-t1.x1);
	if(m1 == m2)
		cout<<"\nTwo lines are parallel";
	else if(m1*m2 == -1)
		cout<<"\nTwo lines are perpendicular";
	else
		cout<<"\nTwo lines are oblique";
}

 main()
{
	//clrscr();
	line ob1, ob2;
	ob1.input();
	ob2.input();
	check(ob1, ob2);
	getch();
}
