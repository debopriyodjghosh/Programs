/* program for operator overloading */
#include<iostream>
using namespace std;
class num
{
	private :int a;
	public :
			/*num()
			{
				a=0;
			}
			num(int x)
			{
				a=x;
			}
			num (num &t)
			{
				a=t.a;
			}*/
			void input()
			{
				cout<<"Enter a number :";
				cin>>a;
			}
			void show()
			{
				cout<<"\nThe number :"<<a;
			}
			num operator+(num t)
			{
				num temp;
				temp.a=a+t.a;
				return temp;
			}
};
int main()
{
	num ob1,ob2,ob3;
    ob1.input();
    ob2.input();
    ob1.show();
    ob2.show();
    ob3=ob1+ob2;
    ob3.show();
	return 0;
}
