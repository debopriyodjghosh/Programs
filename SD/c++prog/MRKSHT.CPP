/*ok....2010 1st day 4)Develop an object oriented program in c++ to
prepare the mark sheet of students of a university exam,
assuming that the following data can be read from keyboard:
Name of the student, roll number, subject code, subject name,
internal marks, external marks. Design a base class consisting of
the first three data items. The derived class consists of the rest
data items. The program should have facilities to carry out the
following methods: build a master table, list the entries of the table,
insert a new entry,display a particular entry on the basis of roll no. */


#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

class B
{
  protected:
    char name[20];
    int roll,subcode;
};
class D:public B
{
  protected:
    char subname[20];
    int intmrk,extmrk;
  public:
    void getdata()
    {
      fflush(stdin);
      cout<<"\n\tEnter name: ";
      gets(name);
      cout<<"\n\tEnter roll: ";
      cin>>roll;
      cout<<"\n\tEnter subject code: ";
      cin>>subcode;
      fflush(stdin);
      cout<<"\n\tEnter subject name: ";
      gets(subname);
      cout<<"\n\tEnter internal marks: ";
      cin>>intmrk;
      cout<<"\n\tEnter external marks: ";
      cin>>extmrk;
    }
    void display()
    {
     cout.width(15);
     cout<<"\n"<<name;
     cout.width(5);
     cout<<"        "<<roll;
     cout.width(5);
     cout<<"        "<<subcode;
     cout.width(15);
     cout<<"        "<<subname;
     cout.width(5);
     cout<<"        "<<intmrk;
     cout.width(5);
     cout<<"        "<<extmrk;
    }
    int chk(int);
};
int D::chk(int r)
{
  if(r==roll)
   return 1;
  else return 0;
}

void main()
{
  D obj[100];
  int n=0,ch,flag=0,r;
  while(1)
  {
     clrscr();
     cout<<"\n\t\t\t\tMENU\n\t\t---------------------------------\n\n";
     cout<<"\t1.Built Master Table with records\n\t2.List the entries of the table\n\t3.Insert a new entry\n\t4.Display a particular entry\n\t0.Exit\n\n\tEnetr your choice: ";
     cin>>ch;
     switch(ch)
     {
	case 1: cout<<"\n\tEnter no. of records: ";
		cin>>n;
		for(int i=0;i<n;i++)
		{
		   obj[i].getdata();
		   cout<<"\n\tRecord "<<i+1<<" is inserted.........\n";
		   getch();
		}
		break;
	case 2: cout<<"\n\tEntered Records are..........";
		cout<<"\nNAME      ROLL      SUB_CODE      SUB_NAME      INTR_MRK      EXTR_MRK\n--------------------------------------------------------------------";
		for(i=0;i<n;i++)
		   obj[i].display();
		getch();
		break;
	case 3: obj[n].getdata();
		cout<<"\n\tRecord Inserted..........";
		n++;
		getch();
		break;
	case 4: cout<<"\n\tEnter a roll number: ";
		cin>>r;
		for(i=0;i<n;i++)
		{
		   flag=obj[i].chk(r);
		   if(flag==1)
		     break;

		   //if(obj[i].roll==r)
		  // {
		    //  flag=1;
		    //  break;
		  // }
		}
		if(flag==1)
		{
		  cout<<"\nNAME      ROLL      SUB_CODE      SUB_NAME      INTR_MRK      EXTR_MRK\n-------------------------------------------------------------";
		  obj[i].display();
		  getch();
		}
		else
		  cout<<"\n\tRoll no. not found.........";
		getch();
		break;

	 case 0: exit(0);
	 default: cout<<"\n\tWrong choice,try again.........";
		  getch();
     }
   }
}