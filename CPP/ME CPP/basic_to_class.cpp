//Basic type to Class type
#include<iostream>
using namespace std;
class num
{
	int a;
	public:
		void input()
		{
			cout<<"Enter a number:";
			cin>>a;
		}
		void display()
		{
			cout<<a;
		}
		num operator+(int);
};
num num::operator+(int x)
{
	num temp;
	temp.a=a+x;
	return temp;
}
int main()
{
	num ob1,ob2;
	int n;
	ob1.input();
	ob1.display();
	cout<<"Enter the value of n:";
	cin>>n;
	ob2=ob1+n;
	ob2.display();
	return 0;
	
}
