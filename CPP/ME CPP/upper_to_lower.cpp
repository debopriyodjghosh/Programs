#include<iostream>
using namespace std;
#include<string.h>
class strng
{
	private: char *s;
	         int l;
	public: strng()
	        {
	        	l=0;
	        	s=new char[l+1];
	        }
	        strng(char *x)
	        {
	        	l=strlen(x);
	        	s=new char[l+1];
	        	strcpy(s,x);
			}
			void input()
			{
				char x[40];
				cout<<"\n Enter a string : ";
				cin>>x;
				l=strlen(x);
				s=new char[l+1];
				strcpy(s,x);
			}
			void show()
			{
				cout<<"\n The string is : "<<s;
				cout<<"\n Length = "<<l;
			}
			void strnglow();
};
void strng :: strnglow()
{
	int i,k;
	for(i=0;i<l;i++)
	{
		k=*(s+i);
		if(k>=65 && k<=90)
		  k=k+32;
		*(s+i)=k;
	}
}
int main()
{
	strng ob1("DEVINA"),ob2;
	ob1.show();
	ob1.strnglow();
	ob1.show();
	ob2.input();
	ob2.show();
	ob2.strnglow();
	ob2.show();
	return 0;
}
