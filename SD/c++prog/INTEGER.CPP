#include<iostream.h>
#include<conio.h>
class integer
{
	private:
		int data;
	public:
		integer(int x)
		{
			data=x;
		}
		integer(integer &x)
		{
			data=x.data;
		}
		void operator++();
		void operator=(integer &);
		void display()
		{
			cout<<endl<<"The data is:"<<data;
		}
		~integer()
		{
			cout<<endl<<"object is destroyed.........";
			getch();
		}
};
void integer::operator++()
{
	data=data+1;
}
void integer::operator=(integer &a)
{
	data=a.data;
}
void main()
{
	integer a(20),b(5);
	clrscr();
	integer c(b);
	c++;
	c.display();
	b=a;
	b.display();
	a.display();
	getch();
}
