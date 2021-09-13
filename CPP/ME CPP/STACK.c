#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#define MAX 3

 class STACK
  {
   private:
    char data[MAX+1];
    int top;
   public:
    STACK();
    void PUSH(char);
    char POP();
    void DISPLAY();
   };

 STACK::STACK()
  {
   top=-1;
   cout<<"Initially Stack is empty."<<endl;
   for(int i=0;i<MAX;i++)
    data[i]='#';
  }

 void STACK::PUSH(char item)
  {
   if(top>=MAX-1)
     cout<<"\nSTACK is OVERFLOW"<<endl;
   else
    {
     top=top+1;
     data[top]=item;
    }
  }

 char STACK::POP()
  {
   if(top<=-1)
    {
     cout<<"\nSTACK is UNDERFLOW"<<endl;
     return(0);
    }
   else
    {
     char item=data[top];
     data[top]='#';
     top=top-1;
     return(item);
    }
  }

 void STACK::DISPLAY()
  {
   cout<<"Now,the situation of the stack is as follows:"<<endl;
   for(int i=0;i<MAX;i++)
    cout<<" ["<<data[i]<<"] ";
  }

 int main()
  {
   STACK A;
   char ans;

   do
    {
     A.DISPLAY();
     cout<<"\n1.PUSH INTO THE STACK.";
     cout<<"\n2.POP FROM THE STACK.";
     cout<<"\n*.OTHERWISE EXIT.";
     int cho;

     cout<<"\nEnter the no.of choice:";
     cin>>cho;

     switch(cho)
      {
       case 1:
	char item;
	cout<<"\nPUSH element into stack: ";
	cin>>item;
	A.PUSH(item);
       break;
       case 2:
	item=A.POP();
	if(item)
             {
	   cout<<"\nPOP element from stack: ";
               cout<<item<<endl;
	  }
       break;
       default:
	exit(0);
      }
     cout<<"\Do you continue?(y/n)";
     cin>>ans;
    }while(tolower(ans)=='y');

   A.DISPLAY();
   getch();
   return(0);
  }

