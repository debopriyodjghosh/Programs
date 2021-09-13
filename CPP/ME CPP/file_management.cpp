#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
class student
{
char nm[20],ini[5];
int t,av,marks[6];
public:
void get();
void show();
};

void student::get()
{
int i;
t=0;
cout<<"\nstudent surname: ";
cin>>ini;
cout<<"\nstudent name: ";
cin>>nm;
cout<<"\nstudent 6 marks:\n";
for(i=0;i<6;i++)
{
	cin>>marks[i];
	t=t+marks[i];
}
av=t/6;
}

void student::show()
{
int j;
cout<<"\n"<<setw(18)<<"student name : "<<ini<<" "<<nm;
cout<<"\n"<<setw(18)<<"marks: ";


for(j=0;j<6;j++)
	cout<<marks[j]<<" ";
cout<<"\n"<<setw(18)<<"total marks : "<<t;
cout<<"\n"<<setw(18)<<"average marks : "<<av;
}

int main()
{
fstream tagi;
char ch='y';
tagi.open("student.txt",ios::in | ios::out | ios::binary);
student s;
while(ch=='y' || ch=='Y')
{
	s.get();
	tagi.write((char *)&s,sizeof s);
	cout<<"\ndo you want to cont. :";
	cin>>ch;
}
tagi.seekg(0);
int k=0;
while(tagi.read((char *)&s,sizeof s))
{
	if(k==3)
		k=0;
	k++;
	s.show();
	cout<<"\n----------------------------";
	if(k==3)
		getch();
}
return 0;
}
