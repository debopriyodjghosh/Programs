#include<iostream>
using namespace std;

class padd
{
	protected:
		double x;
		double y;
    public :
	      padd()
	       {
		x=0;
		y=0;
	         }
		padd(double m, double n)
		 {
		 	x=m;
		 	y=n;
		 }
		 void input()
		 {
		    cout<<"\nEnter x coordinate :"	;
		    cin>>x;
		    cout<<"\nEnter y coordinate : ";
		    cin>>y;
		 }
		 void show()
		 {
		    cout<<"\nthe point is : ("<<x<<","<<y<<")";
		 }
};

class lineseg : public padd
{

    public:
    	     lineseg(double m,double n):padd(m,n)
    	     {

	     }
	     ~lineseg()
	        {
		cout<<"\nall object destroyed.";
	          }
	         friend void intersection(lineseg,lineseg,lineseg,lineseg);
};
void intersection(lineseg a,lineseg b,lineseg c,lineseg d)
{
	double a1=b.y-a.y;
	double b1=a.x-b.x;
	double c1=a1*(a.x)+b1*(a.y);
	double a2=d.y-c.y;
	double b2=c.x-d.x;
	double c2=a2*(c.x)+b2*(c.y);
	double determinant=a1*b2-a2*b1;

	if(determinant==0)
	{
		cout<<"\nthe given lines ab and cd are parallel.";
	}
	else
	{
		double p=(b2*c1-b1*c2);
		double q=(a1*c2-a2*c1);
		cout<<"\nThe intersection of the given lines ab and cd is : ("<<p<<","<<q<<")";
	}
}
main()
{
	lineseg a(0,1);
	lineseg b(0,4);
	lineseg c(1,8);
	lineseg d(1,4);
	a.show();
	b.show();
	c.show();
	d.show();
 	intersection(a,b,c,d);
              a.input();
	b.input();
	c.input();
	d.input();
	intersection(a,b,c,d);
}
