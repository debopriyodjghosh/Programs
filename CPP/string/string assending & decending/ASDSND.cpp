#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class sort
{
  private:
	    char *s;
	    int l;
  public:
	  sort()
	  {
	    l=0;
	    s=new char[l+1];
	  }
	  sort(char *x)
	  {
	    l=strlen(x);
	    s=new char[l+1];
	    strcpy(s,x);
	  }
	  void show()
	  {
	    cout<<"\nThe sting is:"<<s;
	  }
	  void input()
	  {
	    char *x;
	    cout<<"\nEnter string:";
	    cin>>x;
	    l=strlen(x);
	    s=new char[l+1];
	    strcpy(s,x);
	  }
	  void asnd();
	  void dsnd();
};
void sort::asnd()
{
  int k,m;
  for(int i=0;i<=l-2;i++)
  {
    for(int j=0;j<=l-2-i;j++)
    {
      if(s[j]>s[j+1])
      {
	char ch=s[j];
	s[j]=s[j+1];
	s[j+1]=ch;
      }
    }
  }
}
void sort::dsnd()
{
  int k,m;
  for(int i=0;i<=l-2;i++)
  {
    for(int j=0;j<=l-2-i;j++)
    {
      if(s[j]<s[j+1])
      {
	char ch=s[j];
	s[j]=s[j+1];
	s[j+1]=ch;
      }
    }
  }
}
 main()
{
  sort ob("dibyendu");
  //clrscr();
  ob.show();
  ob.asnd();
  ob.show();
  ob.dsnd();
  ob.show();
  ob.input();
  ob.show();
  ob.asnd();
  ob.show();
  ob.dsnd();
  ob.show();
  getch();
}
