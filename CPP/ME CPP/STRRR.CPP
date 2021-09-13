#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class num
{
   private : char *s;
	     int l;
   public : num()
	    {
	      l=0;
	      s=new char[l+1];
	    }
	    ~num()
	    {
	       cout<<"\n object destroyed";
	       delete(s);
	       l=0;
	     }
	      num(char *);
	      void insert();
	      void del();
	      int find(char *);
	      void display();
};

num::num(char *x)
{
  int k,m;
  l=strlen(x);
  s=new char[l+1];
  strupr(x);
  strcpy(s,x);
  for(int i=0;i<l-2;i++)
  {
    for(int j=0;j<=l-2-i;j++)
    {
      k=s[j];
      m=s[j+1];
      if(k>m)
      {
	char ch=s[j];
	s[j]=s[j+1];
	s[j+1]=ch;
      }
    }
  }
}
void num::insert()
{
   char *x;
   cout<<"\nenter string:";
  // cin>>x;
   gets(x);
   l=strlen(x);
   s=new char[l+1];
   strupr(x);
   strcpy(s,x);
   for(int i=0;i<=l-2;i++)
   {
     for(int j=0;j<=l-2-i;j++)
     {
       int k=s[j];
       int m=s[j+1];
       if(k>m)
       {
	 char ch=s[j];
	 s[j]=s[j+1];
	 s[j+1]=ch;
       }
     }
   }
}
void num::del()
{
  delete(s);
  l=0;
  cout<<"\nobject destroyed";
}
int num::find(char *x)
{
  static int k=l;
  static int m=strlen(x);
  if(m==0)
    return 1;
  if(k==0)
    return 0;
  if(x[m-1]==s[k-1])
  {
     k--;
     m--;
     return find(x);
  }
  k--;
  return find(x);
}
void num::display()
{cout<<"\nString is:\n";
cout<<s;
}


void main()
{
num ob1("rajesh Nandy");
clrscr();
ob1.display();
ob1.del();
ob1.insert();
ob1.display();
cout<<"\nEnter a seqence for matching:";
char *x;
cin>>x;
strupr(x);
int i;
i=ob1.find(x);
if(i==1)
cout<<"\nyes present sequence";
else
cout<<"\nno trace";
getch();
}
