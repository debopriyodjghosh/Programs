//programme to communicate between two location class of latitude & longitude
#include<iostream>
using namespace std;
class latitude
{
	int deg,min;
	public:
			void putdeg(int l)
			{
				deg=l;
			}
			void putmin(int l)
			{
				min=l;
			}
			int getdeg()
			{
				return deg;
			}
			int getmin()
			{
				return min;
			}
};
class longitude
{
	int dg,mn;
	public:
			void putdg(int l)
			{
				dg=l;
			}
			void putmn(int l)
			{
				mn=l;
			}
			int getdg()
			{
				return dg;
			}
			int getmn()
			{
				return mn;
			}
};
class loc
{
	latitude x;
	longitude y;
	public:
			void getdata()
			{
				int tmp;
				cout<<"\n Enter degree and minute for Latitude\n";
				cin>>tmp;
				x.putdeg(tmp);
				cin>>tmp;
				x.putmin(tmp);
				cout<<"\n Enter degree and minute for Longitude\n";
				cin>>tmp;
				y.putdg(tmp);
				cin>>tmp;
				y.putmn(tmp);
			}
			friend loc operator +(loc a,loc b);
			friend loc operator ++(loc a,int);
			friend loc operator +=(loc a,int t);
			void showdata()
			{
				cout<<"\n The degree and minute for Latitude is\n";
				cout<<x.getdeg()<<"\n";
				cout<<x.getmin()<<"\n";
				cout<<"\n The degree and minute for longitude is\n"<<y.getdg()<<"\n"<<y.getmn()<<"\n";	
			}			
};
loc operator + (loc a,loc b)
{
	loc temp;
	// for latitude;
	int t1,t2;
	t1=a.x.getdeg()+b.x.getdeg();
	t2=a.x.getmin()+b.x.getmin();
	if (t2>=60)
	{
		t1=t1+1;
		t2=t2-60;
	}
	temp.x.putdeg(t1);
	temp.x.putmin(t2);
	// for longitude;
	t1=a.y.getdg()+b.y.getdg();
	t2=a.y.getmn()+b.y.getmn();
	if (t2>=60)
	{
		t1=t1+1;
		t2=t2-60;
	}
	temp.y.putdg(t1);
	temp.y.putmn(t2);
	return temp;
}
loc operator ++(loc a,int)
{
	int t1;
	t1=a.x.getdeg()+1;
	a.x.putdeg(t1);
	t1=a.y.getdg()+1;
	a.y.putdg(t1);
	return a;
}
loc operator +=(loc a,int t)
{
	int t1;
	t1=a.x.getdeg()+t;
	a.x.putdeg(t1);
	t1=a.y.getdg()+t;
	a.y.putdg(t1);
	return a;
}
int main()
{
	loc a,b;
	cout<<"\n Enter data for first location\n";
	a.getdata();
	cout<<"\n Enter data for second location\n";
	b.getdata();
	loc c=a+b;
	cout<<"\n Data of new location after  summation\n";
	c.showdata();
	a++;
	cout<<"\n Data of first location after  incrementing\n";
	a.showdata();
	b++;
	cout<<"\n Data of second location after  incrementing\n";
	b.showdata();
	c+=3;
	cout<<"\n Data of new location after  incrementing by 3\n";
	c.showdata();
	return 0;
}
