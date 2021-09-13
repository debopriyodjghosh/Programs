#include<iostream>
using namespace std;
class line
{
	private:
		float a,b,c,m;
	public:
		line()
		{
			a=b=c=1;
			m=0;
		}
		void slope()
		{
			m=-a/b;
			cout<<"\nSlope = "<<m;
		}
		void idetical(line t)
		{
			float x,y,z;
			x=a/t.a;
			y=b/t.b;
			z=c/t.c;
			if(x==y==z)
			  cout<<"\nTwo lines are identical";
			else
			  cout<<"\ntwo lines are not identical";
			
		}
		void parallel(line t)
		{
			if(m*t.m==-1)
			  cout<<"\nthe lines are perpendicular";
			if(m==t.m)
			  cout<<"\nthe lines are parrallel";
			else
			{
				float x,y;
				x=(b*t.c - c*t.b)/(a*t.b - b*t.a);
				y=(c*t.a - a*t.c)/(a*t.b - b*t.a);
				cout<<"\nThe point of intersection is ("<<x<<","<<y<<")";
			}
		}
		void input()
		{
			cout<<"\nEnter x coofficient :";
			cin>>a;
			cout<<"\nEnter y coofficient :";
			cin>>b;
			cout<<"\nEnter intercept at y axis :";
			cin>>c;
		}
		void show()
		{
			cout<<"\nThe line is :->"<<a<<"x+"<<b<<"y+"<<c<<"=0";
		}
};

int main()
{
	line ob1,ob2;
	ob1.show();
	ob2.show();
    ob1.slope();
	ob2.slope();
	ob1.idetical(ob2);
	ob1.parallel(ob2);
	ob1.input();
	ob2.input();
	ob1.show();
	ob2.show();
    ob1.slope();
	ob2.slope();
	ob1.idetical(ob2);
	ob1.parallel(ob2);

}
