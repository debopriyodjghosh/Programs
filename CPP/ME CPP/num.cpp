/*Write a program that overload +=operator.This operator should allow statements like:s1+=s2;
where s2 is added(concatinated) to s1 and the result is left in s2.The operator should also 
permit the results of the operation,to be used in other calculations,as in:s3=s1+=s2*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class num
{
	private:char *s;
			int l;
	public:
			num()
			{
				l=0;
				s=new char[l+1];
			}
			num(char *x)
			{
				l=strlen(x);
				s=new char[l+1];
				strcpy(s,x);
			}
			void show();
			void input();
			num operator+=(num);
};
void num::input()
{
	cout<<"enter a string";
	cin>>s;
	l=strlen(s);
}
void num::show()
{
	cout<<"\n\nthe string is:"<<s;
	cout<<"\n\nlength= "<<l;
}
num num::operator+=(num t)
{
	char *x;
	strcpy(x,s);
	int m=strlen(t.s);
	l=l+m;
	s=new char[l+1];
	strcpy(s,x);
	strcat(s,t.s);
	return * this;
}
int main()
{
	num ob1("sayani");
	num ob2(" mukherjee");
	ob1.show();
	ob2.show();
	num ob3;
	ob3=ob1+=ob2;
	ob3.show();
	ob1.show();
	return 0;
}
