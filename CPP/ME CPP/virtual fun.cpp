#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<stdio.h>

class student
{
char nm[30],sex,branch[20];
long hino;
public:
virtual void get();
virtual void show();
};

class exam:public student
{
char subnam[10][10];
int marks[10],t,size,av;
public:
exam(int s)
{
	size=s;
	t=0;
	av=0;
}
void get();
void show();
};

void student::get()
{
cout<<"\nEnter student name: ";
cin>>nm;
cout<<"\nEnter sex(m/f): ";
cin>>sex;
cout<<"\nEnter hallticket no.: ";
cin>>hino;
cout<<"\nEnter branch: ";
gets(branch);
}

void student::show()
{
cout<<"\n"<<setw(18)<<"student name:  "<<nm;
cout<<"\n"<<setw(18)<<"sex:  "<<sex;
cout<<"\n"<<setw(18)<<"hallticket no:  "<<hino;
cout<<"\n"<<setw(18)<<"branch:  "<<branch;
}

void exam::get()
{
int i;
for(i=0;i<size;i++)
{
	if(i==0)
		cout<<"\npracticals:  \n";
	else if(i==2)
		cout<<"\nwritten papers:\n";
	cout<<"\nEnter subject "<<i+1<<" name : ";
	cin>>subnam[i];
	cout<<"\nEnter marks "<<i+1<<" :";
	cin>>marks[i];




	t=t+marks[i];
}
av=t/size;
}

void exam::show()
{
int i;
for(i=0;i<size;i++)
{
	cout<<"\n"<<setw(15)<<subnam[i]<<":";
	cout<<marks[i];
}
cout<<"\n"<<setw(18)<<"total marks : "<<t;
cout<<"\n"<<setw(18)<<"average marks : "<<av;
}

int main()
{
int i;
student one;
exam two(7);
student *stptr[]={&one,&two};
for(i=0;i<2;i++)
	stptr[i]->get();
for(i=0;i<2;i++)
	stptr[i]->show();
getch();
}
