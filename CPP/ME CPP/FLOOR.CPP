#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>

class point
{
private:
	int x,y;
public:
	point(int x1,int y1):x(x1),y(y1)
	{}
	friend istream& operator>>(istream& s,point& p);
	friend ostream& operator<<(ostream& s,point& p);
};

istream& operator>>(istream& s,point& p)			//operator overloading
{
cout<<"Enter X:";
s>>p.x;
cout<<"Enter Y:";
s>>p.y;
return s;
}

ostream& operator<<(ostream& s,point& p)			//operator overloading
{
s<<p.x<<"\n"<<p.y;
return s;
}

class module
{
protected:
	float area;
	point lb,rt;
	float maxar,minar;
public:
	module(float a):area(a)
	{}
	void get_module();
	void show_module();
	
};

void module::get_module()
	{
	point X,Y;
	cout<<"Enter left bottom point:";
	cin>>X;
	cout<<:Enter right top point:"
	cin>>Y;
	area=(Y.x-X.x)*(Y.y-X.y);
	cout<<"Enter maximum aspect ratio:";
	cin>>maxar;
	cout<<"Enter minimum aspect ratio:";
	cin<<minar;
	}

void module::show_module()
	{
	cout<<"area is = "<<area;
	cout<<X;
	cout<<Y;
	cout<<maxar;
	cout<<minar;
	}


class floorplan:public module
{
private:
	module module_list[maxsize];
	point lb,rt;
	int num;	

public:
	void get_floorplan()
	{
	int n;
	cout<<"Enter the number of modules:"
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	module_list[i-1].get_module();
	}
	}
	
	void draw_floorplan();
	void calcualte_area();
	void optimize floorplan();
};


void floorplan::draw_floorplan()
{

int gdriver = DETECT, gmode, errorcode;
int left, top, right, bottom;

initgraph(&gdriver, &gmode, "c://tc//bgi");

errorcode = graphresult();
if (errorcode != grOk)  
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();
   exit(1); 
}

left = getmaxx() / 2 - 50;
top = getmaxy() / 2 - 50;
right = getmaxx() / 2 + 50;
bottom = getmaxy() / 2 + 50;


rectangle(left,top,right,bottom);


getch();
closegraph();

}
