#include<iostream.h>
#include<conio.h>
class book
	{
	 int bookno;
	 char bookname[80];
	 float price;
	 public:
	 void getinfo(void);
	 void showinfo(void);
	};
void book::getinfo()
 {
  cout<<"\nENTER BOOK NO.	";
  cin>>bookno;
  cout<<"\nENTER BOOK NAME	";
  cin>>bookname;
  cout<<"\nENTER THE PRICE OF THE BOOK	";
  cin>>price;
 }
void book::showinfo()
 {
  cout<<"\nBook no  "<<bookno<<"\n\nBook name   "<<bookname<<"\n\nPrice  "<<price;
 }
void main()
 {
  static book*ptr;
  book ar[3];
  clrscr();
  for(int i=0;i<3;i++)
  {
  cout<<"\nENTER BOOK DETAILS\n";
  ar[i].getinfo();
  }
 // ptr->getinfo();
  cout<<"\n\n\nDETAILS OF THE BOOK\n";
  ptr=ar;
  for(i=0;i<3;i++)
  {
  ptr->showinfo();
  ptr++;
  }
  getch();
 }//end of main