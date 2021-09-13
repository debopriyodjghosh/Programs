#include<iostream.h>
#include<conio.h>

class fps;
class mks
{
	private:
		float length, mass;
		int time;
	public:
		void input()
		{
			cout<<"\nEnter length in metre: ";
			cin>>length;
			cout<<"\nEnter mass in kg: ";
			cin>>mass;
			cout<<"\nEnter time in second: ";
			cin>>time;
		}
		void show()
		{
			cout<<"\nLength = "<<length<<"metre";
			cout<<"\nMass = "<<mass<<"kg";
			cout<<"\nTime = "<<time<<"second";
		}
		friend fps mkstofps(mks);
		friend mks fpstomks(fps);
};

class fps
{
	private:
		float length, mass;
		int time;
	public:
		void input()
		{
			cout<<"\nEnter length in ft: ";
			cin>>length;
			cout<<"\nEnter mass in lb: ";
			cin>>mass;
			cout<<"\nEnter time in second: ";
			cin>>time;
		}
		void show()
		{
			cout<<"\nLength = "<<length<<"ft";
			cout<<"\nMass = "<<mass<<"lb";
			cout<<"\nTime = "<<time<<"second";
		}
		friend fps mkstofps(mks);
		friend mks fpstomks(fps);
};

fps mkstofps(mks t1)
{
	fps temp;
	temp.length = t1.length/0.3048;
	temp.mass = t1.mass/0.453592;
	temp.time = t1.time;
	return temp;
}

mks fpstomks(fps t2)
{
	mks temp;
	temp.length = t2.length*0.3048;
	temp.mass = t2.mass*0.453592;
	temp.time = t2.time;
	return temp;
}

void main()
{
	clrscr();
	mks ob1;
	fps ob2;
	ob1.input();
	ob1.show();
	ob2 = mkstofps(ob1);
	ob2.show();
	ob2.input();
	ob2.show();
	ob1 = fpstomks(ob2);
	ob1.show();
	getch();
}
