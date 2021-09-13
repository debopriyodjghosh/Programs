#include<iostream.h>
#include<alloc.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
class employee
	      {
	       private:
		  int empno;
		  char name[80];
		  float salary;
		  char deprt[80];
	       public:
		  void getdata()
		   {
		     cout<<"\nEnter employee no.   ";
		     cin>>empno;
		     cout<<"\nEnter employee name\n	  ";
		     cin>>name;
		     cout<<"\nEnter salary    ";
		     cin>>salary;
		     cout<<"\nEnter department name      ";
		     cin>>deprt;
		   }
		  void showdata()
		   {
		    cout<<"\nEmployee no. is"<<empno;
		    cout<<"\nEmployee name is\n "<<name;
		    cout<<"\nSalary= "<<salary;
		    cout<<"\nDepartment name is"<<deprt;
		   }
	      };

void main()
 {
  employee *p;
  char ch;
  do
  {
   clrscr();
   p=new employee ;
   p->getdata();
   p->showdata();
   cout<<"\n\nENTER y FOR NEW EXECUTION PRESS ENTER FOR NOT";
   fflush(stdin);
   ch=getche();
  }while(ch=='y');
 }//end of main