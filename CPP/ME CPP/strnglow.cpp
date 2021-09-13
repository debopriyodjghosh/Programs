#include<iostream.h>
#include<string.h>
class num
{
	private:
				 char * p;
				 int l;
	public:
				num()
				{
				  l=0;
				  p=new char[l+1];
				}
				num(char *x)
				{
				  l=strlen(x);
				  p=new char[l+1];
				  strcpy(p,x);
				}
				void input()
				{
				  char x[30];
				  cout<<"\nEnter a string" ;
				  cin>>x;
				  l=strlen(x);
				  p=new char[l+1];
				  strcpy(p,x);
				}
				void show()
				{
				  cout<<"\nThe string is:"<<p;
				  cout<<"\nThe length of the string="<<l;
				}
				void stringlow();

};
void num :: stringlow()
{
	int i,k,t;
	for(i=0;i<l;i++)
	{
	  k=p[i];
	  t=p[i];
	  if(k>=65 && k<=90)
	  {
		 k=k+32;
		 p[i]=k;
	  }
	  if(t>=97 && t<=122)
	  {
		  t=t-32;
		  p[i]=t;
	  }
	}
}

void main()
{
	 num ob1("DIBYENDU");
	 num ob2("asitava");
	 num ob3("AmItAvA");
	 ob1.show();
	 ob1.stringlow();
	 ob1.show();
	 ob2.show();
	 ob2.stringlow();
	 ob2.show();
	 ob3.show();
	 ob3.stringlow();
    ob3.show();
}
