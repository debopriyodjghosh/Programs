#include<iostream>
#include<string.h>
using namespace std;
class str
{
	private :char *a;
			  int len;
	public :
			str()
			{
				len=0;
				a=new char[len+1];
	            //a="null";		 
			}
			str(char *t)
			{
				len=strlen(t);
				a=new char[len+1];
				strcpy(a,t);
			}
			str(str &t)
			{
				len=strlen(t.a);
				a=new char[len+1];
				strcpy(a,t.a);
			}
			void input()
			{
				cout<<"\nEnter a string :\n";
				cin>>a;
				len=strlen(a);
			}
			void show()
			{
				cout<<"\nthe string is :"<<a<<"\n";
			}
};
int main()
{
	str name1;
	str name2("August");
	str name3(name2);
	name1.show();
	name2.show();
	name3.show();
	name1.input();
	name1.show();
	return 0;
}
