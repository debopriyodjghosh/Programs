/* program of bubble sorting */
#include<iostream>
using namespace std;
class num
{
	private :int a;
	public :
			void input()
			{
				cout<<"Enter a number :";
				cin>>a;
			}
			void show()
			{
				cout<<a<<"\t";
			}
			int gthan(num t)
			{
				if(a>t.a)
					return 1;
				else
					return 0;
			}
};
int main()
{
	num ob[10];
	int i,j;
	num temp;
	for(i=0;i<10;i++)
		ob[i].input();
	cout<<"\nArray after sorting :\n";
	for(i=0;i<10;i++)
		ob[i].show();
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8-i;j++)
		{
			if(ob[j].gthan(ob[j+1]))
			{
				temp=ob[j];
				ob[j]=ob[j+1];
				ob[j+1]=temp;
			}
		}
	}
	cout<<"\nArray after sorting :\n";
	for(i=0;i<10;i++)
		ob[i].show();
	return 0;
}
