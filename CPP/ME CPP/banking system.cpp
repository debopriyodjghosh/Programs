#include<iostream.>
#include<string.h>
using namespace std;


class account
{
private:
int acno;
char holder[100];
protected:
    int balance;
public:
void acc_input();
void acc_display();
};

class savings: public account
{
private:
float amount;
public:
void withdraw();
void diposit();
};


void account::acc_input()
{
cout<<"\n enter account number : ";
cin>>acno;
cout<<"\n enter account holder name: ";
cin>>holder;
cout<<"\n balance :";
cin>>balance;
}


void account::acc_display()
{
cout<<"\n account number: "<<acno;
cout<<"\n account holder name: "<<holder;
cout<<"\n balance is "<<balance;
}


void savings::diposit()
{
cout<<"\n enter the amount for diposit: ";
cin>>amount;
if(amount>=100)
  balance=balance+amount;
else
  cout<<"\n not possible";
cout<<"\n balance is: "<<balance;
}


void savings::withdraw()
{
cout<<"\n enter the amount for withdrawn: ";
cin>>amount;
if(balance-amount>=1000)
  balance=balance-amount;
else
  cout<<"\n not possible";
cout<<"\n amount is: "<<balance;

}



int main()
{
int y;
savings s;
  s.acc_input();
  s.acc_display();
do
{
 cout<<"\n 1.diposit 2.withdraw 3.exit";
 cout<<"\n enter your choice: ";
 cin>>y;
 switch(y)
 {
  case 1:
  s.diposit();
  break;
  case 2:
  s.withdraw();
  break;
 }
}
while(y!=3);
return 0;
}
