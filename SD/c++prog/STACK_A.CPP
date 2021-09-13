#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 50
class stack
	  {
	   private:
	    int a[max];
	    int top;
	   public:
	    stack(){top=-1;}
	    void push()
	     {
	      if(top<max-1)
	       {
		cout<<endl<<endl<<" Enter the element to PUSH: ";
		int ele;
		cin>>ele;
		top++;
		a[top]=ele;
		cout<<endl<<endl<<" PUSH Successful....";
	       }
	      else
		cout<<endl<<endl<<"Stack is overflow!!!!";
	      getch();
	     }
	    void pop()
	     {
	      if(top!=-1)
	       {
		cout<<endl<<endl<<" POP-ED element is: "<<a[top];
		top--;
	       }
	      else
	       cout<<endl<<endl<<"Stack is underflow!!!";
	      getch();
	     }
	    void tos()
	     {
	      if(top!=-1)
	       {
		cout<<endl<<endl<<" TOP-OF-STACK element is: "<<a[top];
	       }
	      else
	       cout<<endl<<endl<<"Stack is underflow!!!";
	      getch();
	     }
	  };
void main(void)
{
 stack l;
 int ch,flag=0;
 clrscr();
 do
  {
   do
    {
     flag=0;
     clrscr();
     cout<<endl<<"****\t\tMENU\t\t****";
     cout<<endl<<endl<<" PUSH ELEMENT\t\t-->PRESS 1.";
     cout<<endl<<endl<<" POP ELEMENT \t\t-->PRESS 2.";
     cout<<endl<<endl<<" TOP-OF-STACK\t\t-->PRESS 3.";
     cout<<endl<<endl<<" EXIT \t\t\t-->PRESS 4.";
     cout<<endl<<endl<<" Now enter your choice: ";
     cin>>ch;
     if(ch<1||ch>4)
      {
       cout<<endl<<" wrong choice entered...!!!! Try again...";
       getch();
       flag=1;
      }
    }while(flag);
   clrscr();
   switch(ch)
    {
     case 1:
       l.push();
       break;
     case 2:
       l.pop();
       break;
     case 3:
      l.tos();
      break;
     case 4:
      exit(0);
    }
  }while(1);
}


