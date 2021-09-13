//Pre and post increment
#include<iostream>
using namespace std;
class num
{
	private:int a;
	public:
		void input()
		{
			cout<<"Enter a number:";
			cin>>a;
		}
		void show()
		{
			cout<<"\n result:"<<a;
		}
		num operator++(int=0)  //post increment
		{
			num temp;
			temp.a=a++;
			return temp;
		}
		num operator++()  //pre increment
		{
			num temp;
			temp.a=++a;
			return temp;
		}
};
int main()
{
	num ob1,ob2,ob3;
	ob1.input();
	ob1.show();
	ob2=ob1++;
	ob2.show();
	ob1.show();
	ob3=++ob1;
	ob3.show();
	ob1.show();
	return 0;
	
}
