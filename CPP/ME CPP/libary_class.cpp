#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
const int size = 30;
class library_member
{
protected: /*Provides inheritence capabilities*/
int member_id;
char mem_name[size];
public:
library_member()
{
member_id=0;
strcpy(mem_name, "");
}
void getdata();
virtual void show(); /*Virtual function used for display*/
};
void library_member::getdata()
{
cout<<"\nEnter member_id: ";
cin>>member_id;
cout<<"Enter name: ";
cin>>mem_name;
}
void library_member::show()
{
cout<<"\nMember_id: "<<member_id;
cout<<"\nMember_name: "<<mem_name;
}
class student:public library_member
{
int rollno;
char stream[size];
public:
student()
{
library_member();
rollno=0;
strcpy(stream, "");
}
void getdata();
void show();
};
void student::getdata()
{
library_member::getdata();
cout<<"Enter rollno: ";
cin>>rollno;
cout<<"Enter stream: ";
gets(stream);
}
void student::show()
{
library_member::show();
cout<<"\n\nStudent record:-";
cout<<"\nRollno: "<<rollno;
cout<<"\nStream: "<<stream<<endl;
}
class employee:public library_member
{
int emp_id;
char designation[size];
public:
employee()
{
emp_id=0;
strcpy(designation, "");
}
void getdata();
void show();
};
void employee::getdata()
{ library_member::getdata(); /*Calls base class function*/
cout<<"Enter emp_id: ";
cin>>emp_id;
cout<<"Enter designation: ";
gets(designation);
}
void employee::show()
{
library_member::show(); /*Calls base class function*/
cout<<"\n\nEmployee record:-";
cout<<"\nEmp_id: "<<emp_id;
cout<<"\nDesignation: "<<designation<<endl;
}
int main()
{ library_member *ptr;
student s;
employee e;
s.getdata();
ptr = &s;
ptr->show();
e.getdata();
ptr = &e;
ptr->show();
return 0;
} //end main

