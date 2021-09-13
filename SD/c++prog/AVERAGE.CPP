#include"iostream.h"
#include"conio.h"
class a
   {
    private:
       float avg;
       float sum;
    public:
       void summ(int x,int y,int z)
	{
	 sum=x+y+z;
	 cout<<"\nSum of these 3 no.s are: "<<sum;
	}
       void getdata(int x,int y,int z)
	{
	 avg=(x+y+z)/3.0;
	}
       void display()
	{
	 cout<<"\n\nAverage is: "<<avg;
	}
   };
void main(void)
{
 a m;
 int x,y,z;
 clrscr();
 cout<<"\nEnter the 1st value: ";
 cin>>x;
 cout<<"\nEnter the 2nd value: ";
 cin>>y;
 cout<<"\nEnter the 3rd value: ";
 cin>>z;
 m.summ(x,y,z);
 m.getdata(x,y,z);
 m.display();
 getch();
}