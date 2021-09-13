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
	int i,m;
	for(i=0;i<10;i++)
	{
		cout<<"\nEnter string : ";
		cin>>x;
		m=strlen(x);
		s[i]=new char[m+1];
		strcpy(s[i],x);
		cout<<"\nEnter the marks :";
		cin>>l[i];
	}
}
void strng :: show()
{
	int i;
	cout<<" \n All the string are : \n";
	for(i=0;i<10;i++)
	{
		cout<<"\n"<<s[i]<<"   and it's score = "<<l[i];
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
	cout<<"\n Student name is : "<<s[j];
	cout<<"  having highest score="<<l[j];
}

int main()
{
	strng ob;
	ob.input();
	ob.show();
	ob.maximum();
	return 0;
}
