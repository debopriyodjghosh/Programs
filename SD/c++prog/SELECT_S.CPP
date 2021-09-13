#include<iostream.h>
#include<conio.h>
class A
{
	private:
		int x;
	public:
		void getdata()
		{
			cout<<"\n ENTER THE VALUE:";
			cin>>x;
		}
		void display()
		{
			cout<<x<<"    ";
		}
		friend void select_sort(A *a,int n);

};
void select_sort(A *a,int n)
{
	A temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i].x<a[j].x)
			{
				temp.x=a[i].x;
				a[i].x=a[j].x;
				a[j].x=temp.x;
			}
		}
	}
}
void main()
{
	A a1[10],p;
	int n,i;
	clrscr();
	cout<<"\n ENTER THE NO. OF ELEMENTS:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		a1[i].getdata();
	}
	select_sort(a1,n);
	cout<<"\n SORTED DATA:\n";
	for(i=0;i<n;i++)
	{
		a1[i].display();
	}
	getch();
}






