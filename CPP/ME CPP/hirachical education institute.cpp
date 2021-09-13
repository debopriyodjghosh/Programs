#include<iostream>
#include<string.h>
using namespace std;

class staff
{
protected:
int code;
char name[100];
public:
void staff_read();
void staff_display();
};

void staff::staff_read()
{
cout<<"\n please enter the staff name: ";
cin>>name;
cout<<"\n enter the code of the staff: ";
cin>>code;
}

void staff::staff_display()
{
cout<<"\n the name of the staff is: "<< name;
cout<<"\n the code of the staff is: "<< code;
}


class teacher:public staff
{
protected:
char subject[100],publication[100];
public:
void teacher_read();
void teacher_display();
};

void teacher::teacher_read()
{
cout<<"\n enter the subject of the teacher: ";
cin>>subject;
cout<<"\n enter the publication of the teacher: ";
cin>>publication;
}

void teacher::teacher_display()
{
cout<<"\n the subject of the teacher is: "<< subject;
cout<<"\n the publication of the teacher is: "<< publication;
}

class officer: public staff
{
protected:
char grade[10];
public:
void officer_read();
void officer_display();
};

void officer::officer_read()
{
cout<<"\n enter the grade of the officer: ";
cin>>grade;
}

void officer::officer_display()
{
cout<<"\n the grade of the officer is: "<< grade;
}

class typist:public staff
{
protected:
int speed;
public:
void typist_read();
void typist_display();
};

void typist::typist_read()
{
cout<<"\n enter the speed of the typist: ";
cin>>speed;
}

void typist::typist_display()
{
cout<<"\n the speed of the typist is: "<< speed;
}

class regular: public typist
{
protected:
int salary;
public:
void regular_read();
void regular_display();
};


void regular::regular_read()
{
cout<<"\n enter the salary of the typist: ";
cin>>salary;
}


void regular::regular_display()
{
 cout<<"\n the salary of the typist is: "<< salary;
}


class casual:public typist
{
private:
int daily_wages;
public:
void casual_read();
void casual_display();
};

void casual::casual_read()
{
cout<<"\n enter the daily wages of the casual typist: ";
cin>> daily_wages;
}

void casual::casual_display()
{
cout<<"\n the daily wages of the casual typist is: "<< daily_wages;
}



int main()
{
teacher t;
officer o;
casual b;
regular c;
 int x;
do
{
   cout<<"\n 1.regular 2. casual 3.exit";
   cout<<"\n enter your choice: ";
   cin>>x;
   switch(x)
   {
   case 1:
    c.staff_read();
    t.teacher_read();
    o.officer_read();
    c.typist_read();
    c.regular_read();
    c.staff_display();
    t.teacher_display();
    o.officer_display();
    c.typist_display();
    c.regular_display();
    break;
   case 2:
    b.staff_read();
    t.teacher_read();
    o.officer_read();
    b.typist_read();
    b.casual_read();
    b.staff_display();
    t.teacher_display();
    o.officer_display();
    b.typist_display();
    b.casual_display();
    break;
   }
   }while(x!=3);
   return 0;
}

