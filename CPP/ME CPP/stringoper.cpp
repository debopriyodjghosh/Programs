#include<string.h>
#include<iostream>
using namespace std;
class num
{
	private:
		      char *s;
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
			  void input()
			  {
			  	char x[40];
			  	cout<<"\nenter a string:";
			  	cin>>x;
			  	l=strlen(x);
			  	s=new char[l+1];
			  	strcpy(s,x);
			  	l=strlen(s);
			  }
			  void show()
			  {
			  	cout<<"\nThe string is:"<<s;
			  	cout<<"\nlength="<<l;
			  	
			  }
			  num operator+(num);
			  num operator=(num);		      
};
num num::operator=(num t)
{
	char *x=s;
	int m=l;
	l=l+t.l;
	s=new char[l+1];
	strcpy(s,x);
	strcat(s,t.s);
	return *this;
	
}
num num :: operator+(num t)
{
	num temp;
	temp.l=l+t.l;
	temp.s=new char[temp.l+1];
	strcpy(temp.s,s);
	strcat(temp.s,t.s);
	return temp;
}
main()
{
	num ob1("dibyendu");
	num ob2("kundu");
	num ob3;
	ob1.show();
	ob2.show();
	ob3.show();
	ob3=ob1+ob2;
	ob3.show();
	num ob4;
	ob4=ob1;
	ob4.show();
	ob4=ob2;
	ob4.show();
}
