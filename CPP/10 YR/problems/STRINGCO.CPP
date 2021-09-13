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
	   num operator+(num t)
	   {
	     num temp;
	     int m=strlen(t.s);
	     temp.s=new char[l+m+1];
	     strcpy(temp.s,s);
	     strcat(temp.s,t.s);
	     return temp;
	  }

} ;

 main()
{
  num ob1,ob2,ob3;
  //clrscr();
  ob1.input();
  ob2.input();
  ob1.show();
  ob2.show();
  ob3=ob1+ob2;
  ob3.show();
  getch();
}
