#include<string.h>
#include<iostream>
#include<conio.h>
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
	     char *x;
	     cout<<"\nEnter a string:";
	     cin>>x;
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

} ;
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
 main()
{
  num ob1("DIBYENDU");
  //clrscr();
  ob1.show();
  ob1.strenthpass();
  ob1.input();
  ob1.strenthpass();
  getch();
}
