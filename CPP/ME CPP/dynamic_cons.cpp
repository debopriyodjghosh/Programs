/*program for dynamic constractor */
#include<iostream>
#include<string.h>
using namespace std;
class num
{
	private :char *s;
			  int l;
	public :
			num()
			{
				l=0;   //default constractor
				s=new char[l+1];
			}
			num(char *x)
			{
				l=strlen(x);   //parametric constractor
				s=new char[l+1];
				strcpy(s,x);
			}
			num(num &t)
			{
				l=strlen(t.s);
				s=new char[l+1];
				strcpy(s,t.s);
			}
			void input()
			{
				cout<<"\nEnter a name :";
				cin>>s;
				l=strlen(s);
			}
			void show()
			{
				cout<<"\n The string is :"<<s;
				cout<<"\nLength ="<<l;
			}
};
int main()
{
	num ob1;
	num ob2("Prasad hait");
	num ob3(ob2);
	ob1.show();
	ob2.show();
	ob3.show();
	ob1.input();
	ob1.show();
	return 0;
}
