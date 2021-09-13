/* program to impliment friend function */
#include<iostream>
using namespace std;
class ABC;
class XYZ
{
	private :int a;
	public :
 		    void input()
 		    {
 		    	cout<<"enter a no. :";
 		    	cin>>a;
			}
			void show()
			{
				cout<<" no. ="<<a<<"\n";
			}
			friend int max(ABC,XYZ);
} ;
class ABC
{
	private :int a;
	public :
	 		void input()
 		    {
 		    	cout<<"enter a no. :";
 		    	cin>>a;
			}
			void show()
			{
				cout<<" no. ="<<a<<"\n";
			}
			friend int max(ABC,XYZ);
};
int max(ABC t1,XYZ t2)
{
	if(t1.a > t2.a)
		return 1;
	else 
		return 0;
}

int main()
{
	ABC ob1;
	XYZ ob2;
	ob1.input();
	ob1.show();
	ob2.input();
	ob2.show();
	int c;
	c=max(ob1,ob2);
	if(c == 1)
	{
		cout<<"Maximum ";
		ob1.show();
	}
	else
	{
		cout<<"Maximum ";
		ob2.show();
	}
		
	return 0;
}
