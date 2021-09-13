#include<iostream>
#include<stdlib.h>
using namespace std;
class Line
{
	float a,b,c,slope,intercept;
	public:
		Line()
		{
			a=0;
			b=1;
			c=0;
			slope=0;
			intercept=0;
		}
		Line(int x=0,int y=1,int z=0)
		{
			a=x;
			if(y==0)
			{
				cout<<"b can not be zero!!";
				exit(0);
			}
			b=y;
			c=z;
			slope=-a/b;
			intercept=c/b;
		}
		void determineslope()
		{
			if(b!=0)
				cout<<"\nSlope is:"<<slope;
			else
				cout<<"\nLine is Vertical!"; 
		}
		void checkindentical(Line x)
		{
			if(b!=0 && x.b!=0)
			{
				if(slope==x.slope && intercept==x.intercept)
				cout<<"\nLines Are Identical!";
				else
				cout<<"\nLines Are Not Identical!";
			}
		}
		void checkparallel(Line x)
		{
			if(slope==x.slope)
			cout<<"\nLines Are Parallel!";
			else
			cout<<"\nLines Are Not Parallel!";
		}
		void checkperpendicular(Line x)
		{
			if(((-a/b)*(-x.a/x.b))==-1)  //slop==x.slope korle vul result asche karon floating a equal hochhena
			cout<<"\nLines Are Perpendicular!";
			else
			cout<<"\nLines Are Not Perpendicular!";
		}
		void piontofintersection(Line x)
		{
			float x1,c1,y1;
			x1=x.a+x.b*slope;
			c1=x.c-x.b*intercept;
			x1=c1/x1;
			y1=slope*x1+intercept;
			cout<<"\nIntersection Point Is:("<<x1<<","<<y1<<")";	
		}
};
int main()
{
	int ch,sw;
	do
	{
		cout<<"1.Determine slope\n2.Determine Indetical\n3.Determine Parallel\n4.Determine perpendicular\n5.Find point of intersection\nEnter your choice:";
		cin>>sw;
		int a,b,c;
		cout<<"For Line1 Enter values of a,b and c.......";
			cout<<"\nEnter Value of a:";
			cin>>a;
			cout<<"\nEnter Value of b:";
			cin>>b;
			cout<<"\nEnter Value of c:";
			cin>>c;
			Line l1(a,b,c);
		cout<<"For Line1 Enter values of a,b and c.......";
			cout<<"\nEnter Value of a:";
			cin>>a;
			cout<<"\nEnter Value of b:";
			cin>>b;
			cout<<"\nEnter Value of c:";
			cin>>c;
			Line l2(a,b,c);
		switch(sw)
		{
			case 1:l1.determineslope();l2.determineslope();
			break;
			case 2:l1.checkindentical(l2);
			break;
			case 3:l1.checkparallel(l2);
			break;
			case 4:l1.checkperpendicular(l2);
			break;
			case 5:l1.piontofintersection(l2);
			break;
		};
		cout<<"\nDo you want to continue?press 1...";
		cin>>ch;
	}while(ch==1);
	return 0;
}
