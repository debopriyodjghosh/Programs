#include<iostream>
#include<string.h>
using namespace std;

class account
{
private:
int acno;
char holder[100];
protected:
float amount, balance;
public:
void acc_read();
void acc_display();
};

void account::acc_read()
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
cout<<"\n account number is: "<<acno;
cout<<"\n account holder name is: "<<holder;
cout<<"\n balance is "<<balance;
}

class savings: public account
{
public:
void diposit();
void withdraw();
void interest();
};

void savings::diposit()
{
cout<<"\n please enter the amount for diposit: ";
cin>>amount;
if(amount>=100.00)
{
balance=balance+amount;
}
else
{
cout<<"\n diposit not possible!!!";
}
cout<<"\n balance is: "<<balance;
}


void savings::withdraw()
{
cout<<"\n please enter the amount for withdraw: ";
cin>>amount;
if(balance-amount>=1000.00)
{
balance=balance-amount;
}
else
{
cout<<"\n withdraw not possible!!!";
}
cout<<"\n balance is: "<<balance;
}

void savings::interest()
{
float interest;
if(balance>=2000.00 && amount>=100.00)
{
interest=balance*0.05;
balance=balance+interest;
cout<<"\n balance with interest is: "<<balance;
}
else
{
cout<<"\n no interest possible!!!";
}
}



class current: public account
{
private:
int cheque;
public:
void diposit();
void withdraw();
};

void current::diposit()
{
cout<<"\n please enter the amount for diposit: ";
cin>>amount;
if(amount>=1000.00)
{
balance=balance+amount;
}
else
{
cout<<"\n diposit not possible!!!";
}
cout<<"\n balance is: "<<balance;
}


void current::withdraw()
{
cout<<"\n please enter the cheque book number: ";
cin>>cheque;
cout<<"\n please enter the amount for withdraw: ";
cin>>amount;
if(balance-amount>=2000.00)
{
balance=balance-amount-25.00;
cout<<"\n balance is: "<<balance;
cout<<"\n 25 RS/- for service tax";
}
else
{
cout<<"\n withdraw not possible!!!";
cout<<"\n balance is: "<<balance;
}
}

int main()
{
savings s;
current c;
int x,p,q;
do
{
cout<<"\n 1. savings account 2. current account 3.exit";
cout<<"\n enter your choice: ";
cin>>x;
switch(x)
{
case 1:
s.acc_read();
s.acc_display();
do
{
 cout<<"\n 1.savings acc_diposit 2.savings acc_withdraw 3.exit";
 cout<<"\n enter your choice: ";
 cin>>p;
switch(p)
{
case 1:
s.diposit();
s.interest();
break;
case 2:
s.withdraw();
break;
}
}
while(p!=3);
break;
case 2:
c.acc_read();
c.acc_display();
do
{
cout<<"\n 1.current acc_diposit 2.current acc_withdraw 3.exit";
cout<<"\n enter your choice: ";
cin>>q;
switch(q)
{
case 1:
c.diposit();
break;
case 2:
c.withdraw();
break;
}
}
while(q!=3);
break;
}
}
while(x!=3);
return 0;
}
