/* PROGRAM CRITERIA :

	CREATE A CLASS BOOK WITH CLASS MEMBER bookno, book name, price. INCLUDE
	MEMBER FUNCTION TO TAKING INPUT AND PURCHASE N NO OF COPPYS. WAP TO CREATE
	ARRAY OF BOOK AND PRINT THE BILL FOR SELECTED bookno.                      */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class book
	{
	 int bookno;
	 char bookname[80];
	 float price;
	 public:
	 void getinfo();
	 void show();
	 float purchase(int);
	};
void book::getinfo()
 {
  cout<<"\nENTER BOOK NO.	";
  cin>>bookno;
  cout<<"\nENTER BOOK NAME	";
  cin>>bookname;
  cout<<"\nENTER PRICE FOR THE BOOK	";
  cin>>price;
 }
void book::show()
 {
 cout<<"\nBook no.  "<<bookno<<"\nBook name   "<<bookname<<"\nPrice  "<<price;
 }
float book::purchase(int x)
{
return(x*price);
}
void main()
 {
  book ar[100];
  int n,x;
  double pr=0.0;
  char ch;
  clrscr();
  cout<<"\nHOW MANY BOOKS WANT TO INSERT ?	";
  cin>>n;
  for(int i=0;i<n;i++)
	  ar[i].getinfo();
  do
	{
	 cout<<"\nDETAILS OF AVAILABLE BOOKS\n\n";
	 for(i=0;i<n;i++)
	  ar[i].show();
	  for(i=0;i<n;i++)
	  {
		cout<<"\nCHOIS FOR BOOK NO. "<<i+1<<" HOW MANY COPPY WANT TO  BUY ?";
		cin>>x;
		pr+=ar[i].purchase(x);

	  }
	  cout<<"\n\nYOUR BILL IS   "<<pr;
	  cout<<"\n\npress y for again   ENTER for exit  ";
	  fflush(stdin);
	  ch=getche();
	}while(ch=='y');
	cout<<"\n\n\n ........THANK YOU FOR VISIT........";
	cout<<"\n  .......PLZ COME AGAIN.......";
 }