/* Program of array of object */
#include<iostream>
using namespace std;
class num
{
	private:int a;
	public:
			void input()
			{
				cout<<"Enter a no :";
				cin>>a;
			}
			void show()
			{
				cout<<a<<"\t";
			}
};
int main()
{
	num ob[10];
	int i;
	for(i=0;i<10;i++)
		ob[i].input();
		cout<<"\nThe array is :\n";
	for(i=0;i<10;i++)
		ob[i].show();
	return 0;
}
