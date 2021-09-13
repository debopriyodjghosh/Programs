#include<iostream>
#include<stdio.h>
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
			void strngup();
};
void strng :: strngup()
{
	int i,k;
	for(i=0;i<l;i++)
	{
		k=*(s+i);
		if(k>=97 && k<=122)
		  k=k-32;
		*(s+i)=k;
	}
}
int main()
{
	strng ob1("devina");
	ob1.show();
	ob1.strngup();
	ob1.show();
	strng ob2;
	ob2.input();
	ob2.show();
	ob2.strngup();
	ob2.show();
	return 0;
}
