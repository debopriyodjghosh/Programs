/*Rupee to dollar and dollar to rupee conversion*/

#include <iostream.h>
#include <conio.h>

 class Dollar;
 class Rupee
     {
	private :
		float r;
	public:
		Rupee();
		Rupee(Dollar obj);
		void input();
		void display();
		float getRupee();
     };


class Dollar
  {
  private :
	float d;
  public :
	Dollar()
		{
		d=0.0;
		}
	Dollar (Rupee obj)
		{
		d=(obj.getRupee())/50.0;
		}
	void input()
		{
		cout<<"\nEnter dollar value ";
		cin>>d;
		}
	void display()
		{
		cout<<"\n\n Dollar "<< d <<endl;
		}
	float getDollar()
		{
		return d;
		}
    };

      Rupee::Rupee()
			{
			r=0;
			}
      Rupee::Rupee(Dollar obj)
			{
			r=obj.getDollar() * 50;
			}
      void Rupee::input()
			{
			cout<<"\nEnter rupee value ";
			cin>>r;
			}
     void Rupee::display()
			{
			cout<<"\n\n Rupee "<<r<<endl;
			}
     float Rupee::getRupee()
		       {
		       return r;
		       }


void main()
{
	clrscr();
	Rupee r1,r2;
	Dollar d1,d2;

	r1.input();
	d1=r1;
	d1.display();

	d2.input();
	r2=d2;
	r2.display();

	getch();
}