#include<iostream.h>
#include<conio.h>
class Array
{
	private:
		float x;
	public:
		void getdata()
		{
			cout<<"\n ENTER THE DATA:";
			cin>>x;
		}
		void display()
		{
			cout<<x<<"  ";
		}
		void selection_sort(Array *obj,int n)
		{
			int i,j;
			float temp;
			for(i=0;i<n;i++)
			{
				for(j=0;j<i;j++)
				{
					if(obj[i].x<obj[j].x)
					{
						temp=obj[i].x;
						obj[i].x=obj[j].x;
						obj[j].x=temp;
					}
				}
			}
		}
};
void main()
{
	Array o[10],p;
	int i,j,n;
	clrscr();
	cout<<"\n ENTER THE NO.OF ELEMENTS:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		o[i].getdata();
	}
	cout<<"\n BEFORE SORTING:\n";
	for(i=0;i<n;i++)
	{
		o[i].display();
	}
	cout<<"\n AFTER SORTING:\n";
	p.selection_sort(o,n);
	for(i=0;i<n;i++)
	{
		o[i].display();
	}
	getch();
}



