#include<iostream.h>
#include<conio.h>
#include<process.h>
#define max 100

class bank
	{
	 private:
		 int accno;
		 char name[30];
		 double balance;
	 public:
		 void getinfo();
		 void deposit();
		 void withdraw();
		 void display();
	};

void bank::withdraw()
 {
  int x;
  cout<<"\n\nENTER AMMOUNT FOR WITHDRAW      ";
  cin>>x;
  balance=balance-x;
  cout<<"\n\nNEW BALANCE IS  "<<balance<<"   FOR ACCNO. "<<accno;
  getch();
 }

void bank::deposit()
 {
  int x;
  cout<<"\n\nENTER AMMOUNT     ";
  cin>>x;
  balance=balance+x;
  cout<<"\n\nNEW BALANCE IS  "<<balance<<"   FOR ACCNO. "<<accno;
  getch();
 }

void bank::getinfo()
 {
  cout<<"\nENTER ACCOUNT NO.	";
  cin>>accno;
  cout<<"\nENTER NAME	";
  cin>>name;
  cout<<"\nENTER AMMOUNT FOR FIRST DEPOSIT    ";
  cin>>balance;
 }
void bank::display()
 {
  cout<<accno<<"          "<<name<<"                      "<<balance<<"\n";
 }
int main()
 {
  int ch,n,dno;
  bank manager[max];
  do
	{  clrscr();
	 cout<<".......PROGRAM MENU.......\n";
	 cout<<"\nEnter 1 for creat account";
	 cout<<"\nEnter 2 for enter deposit";
	 cout<<"\nEnter 3 for withdraw balace";
	 cout<<"\nEnter 4 for display accounts ";
	 cout<<"\nEnter 5 for exit\n";
	 cout<<"\n ENTER YOUR CHOISE >>";
	 cin>>ch;
	 switch(ch)
	  {
		 case 1:cout<<"\n How many account do you want to creat  ";
			cin>>n;
			for(int i=1;i<=n;i++)
		{
		 cout<<"\nEnter details of account \n";
		 manager[i].getinfo();
		}
			break;
		 case 2:cout<<"\n\nENTER ACCOUNT NO. FOR DEPOSIT    ";
			cin>>dno;
			manager[dno].deposit();
			break;
		 case 3:cout<<"\n\nENTER ACCOUNT NO. FOR BALANCE WITHDRAW    ";
			cin>>dno;
			manager[dno].withdraw();
			break;
		 case 4:cout<<"\n\nDISPLAY ALL ACCOUNTS\n\n";
			cout<<"Ac.NO.     NAME                   BALANCE\n\n";
			for(i=1;i<=n;i++)
			 manager[i].display();
			 getch();
			break;
		 case 5:exit(0);
	  }
	}while(1);//end of while
 }//end of main


