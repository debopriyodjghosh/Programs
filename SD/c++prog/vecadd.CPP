#include<iostream.h>
#include<conio.h>
class a
{
	private:
		int arr[5];
		int n;
	public:
		void getdata(int x)
		{
			n=x;
			cout<<"\n ENTER THE ARRAY ELEMENTS:";
			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
			}
		}
		a operator + (a a1)
		{
			a a2;
			a2.n=this->n;
			for(int i=0;i<a1.n;i++)
			{
				a2.arr[i]=this->arr[i]+a1.arr[i];
			}
			return a2;
		}
		void display()
		{
			for(int i=0;i<this->n;i++)
			{
				cout<<"     "<<arr[i];
			}
		}
};
void main()
{
	clrscr();
	a a1,a2,a3;
	int n=3;
	a1.getdata(n);
	a2.getdata(n);
	a3=a1+a2;
	a3.display();
	getch();
}

