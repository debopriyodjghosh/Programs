#include<iostream.h>
#include<conio.h>
class intarray
{
	private:
	int size,*p;
	public:
		intarray(int x)
		{
			size=x;
			p=new int[size];
		}

		friend istream & operator>>(istream &din,intarray &a);
		friend ostream & operator<<(ostream &dout,intarray &);

};
		 const size=5;
	istream & operator>>(istream &din,intarray &a)
		{
			for(int i=0;i<size;i++)
			din>>a.p[i];
			return(din);
		}
		ostream & operator<<(ostream &dout,intarray &a)
		{
			for(int i=0;i<size;i++)
				dout<<a.p[i]<<" ";
			return(dout);
		}
void main()
{
	int x;
	clrscr();
	cout<<"Enter the number of element:";
	cin>>x;
	intarray a(x);
	cin>>a;
	cout<<a;
	getch();
}