#include<iostream>
#include<string.h>
using namespace std;
class strng
{
	private :
		       char *s[10];
		       int l[10];
	public:
              void input();
			  void show();
			  void maximum();
			  void minimum();
};
void strng :: input()
{
	char x[40];
	cout<<"\nInput for array of string : ";
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"\nEnter string : ";
		cin>>x;
		l[i]=strlen(x);
		s[i]=new char[l[i]+1];
		strcpy(s[i],x);
	}
}
void strng :: show()
{
	int i;
	cout<<" \n All the string are : \n";
	for(i=0;i<10;i++)
	{
		cout<<"\n"<<s[i]<<"   and it's length = "<<l[i];
	}
}
void strng :: maximum()
{
	int max=l[0];
	int j,i;
	for(i=1;i<10;i++)
	{
		if(max<l[i])
		{
			max=l[i];
			j=i;
		}
	}
	cout<<"\n The maximum string is : "<<s[j];
	cout<<"\n its length="<<l[j];
}
void strng :: minimum()
{
	int min=l[0];
	int j,i;
	for(i=1;i<10;i++)
	{
		if(min>l[i])
		{
			min=l[i];
			j=i;
		}
	}
	cout<<"\n The minimum string is : "<<s[j];
	cout<<"\n its length="<<l[j];
}
main()
{
	strng ob;
	ob.input();
	ob.show();
	ob.maximum();
	ob.minimum();
}
