#include<string.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
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
	     char *x;
	     cout<<"\nEnter a string:";
	     gets(x);
	     l=strlen(x);
	     s=new char[l+1];
	     strcpy(s,x);

	   }
	   void show()
	   {
	     cout<<"\nThe string is:" ;
	     cout<<s;
	   }
	   void strenthpass();
	   void split();

} ;
void num :: split()
{
  int i,j=0;
  cout<<"\n\t" ;
  for(i=0;i<l;i++)
  {
    if(s[i]==' '||s[i+1]=='\0')
    {
      for(j;j<=i;j++)
	cout<<s[j];
      cout<<"\n\t";
    }
  }
}
void num :: strenthpass()
	   {
	     int f=0,k;
	     for(int i=0;i<l;i++)
	     {
	       k=s[i];
	       if(k>=65 && k<=90)
	       {
		 f=1;
		 //break;
	       }
	     }
	     if(f==0)
	       cout<<"\nStrong password";
	     else
	       cout<<"\nWeak p\assord";
	   }
void main()
{
  num ob1("DIBYENDU IS A GOOD BOY");
  clrscr();
  ob1.show();
  ob1.split();
  ob1.strenthpass();
  ob1.input();
  ob1.split();
  ob1.strenthpass();
  getch();
}