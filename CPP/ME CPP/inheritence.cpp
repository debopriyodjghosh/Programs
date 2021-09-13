#include<iostream.>
#include<string.h>
using namespace std;
class student
{
private:
int roll;
char name[100];
public:
void student_read()
{
cout<<"\n enter the student name: ";
cin>>name;
c out<<"\n enter the roll number: ";
cin>>roll;
}
void student_display()
{
cout<<"\n the student name is: "<<name;
cout<<"\n the roll number is: "<<roll;
}
};

class subject: public student
{
protected:
int math,phy,comp;
public:
void subject_read()
{
cout<<"\n enter the marks in math: ";
cin>>math;
cout<<"\n enter the marks in physics: ";
cin>>phy;
cout<<"\n enter the marks in computer science: ";
cin>>comp;
}

void subject_display()
{
cout<<"\n the marks of math: "<<math;
cout<<"\n the marks of physics: "<<phy;
cout<<"\n the marks of computer science: "<<comp;
}
};


class add_subject
{
protected:
int eng;
public:
void add_subject_read()
{
cout<<"\n enter the marks in english: ";
cin>>eng;
}

void add_subject_display()
{
cout<<"\n the marks of english: "<<eng;
}
};

class result: public subject,public add_subject
{
private:
int total;
float per;
public:
void grade_cal(int total)
{
total=math+phy+comp+eng;
per=total/4.00;
cout<<"\n the total marks is: "<<total;
cout<<"\n percentage is: "<<per<<"%";
cout<<"\n the grade is: ";
if(total<=400 && total>=380)
{
 cout<<"AA";
}
else if(total>=340)
{
 cout<<"A+";
}
else if(total>=300)
{
 cout<<"A";
}
else if(total>=260)
{
 cout<<"B+";
}
else if(total>=220)
{
 cout<<"B";
}
else if(total>=180)
{
 cout<<"C";
}
else
{
cout<<"D";
}
}
void result_display()
{
student_display();
subject_display();
add_subject_display();
grade_cal(total);
}
};

int main()
{
result r;
r.student_read();
r.subject_read();
r.add_subject_read();
r.result_display();
return 0;
}
