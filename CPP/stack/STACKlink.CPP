/**************************************************************************
 * PROGRAM : STACK OPERATION                                              *
 * TOP IS NOT INITIALIZED TO NULL FOR THE FIRST TIME ,TOP POINTS THE NEW1.*
 * NEW1 BECME NULL WHEN IT WAS CREATED FOR THE LAST TIME.                 *
 * PROGRM IS OK ......................                                    *
 **************************************************************************/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define null 0
class stack
 {
  private:
   int data;
   stack *next;
  public:
 /* stack(void)  //constructor,top is initialized to null
   {
    top=null;
   }*/
  void push(int);
  int pop(void);
 } *top;// end of class
void stack::push(int x)
 {
  stack *new1;
  new1=new stack;
  new1->data=x;
  new1->next=null;
  new1->next=top;
  top=new1;
 }
int stack::pop()
 {
  int x;
  stack *ptr;
  if(top==null)
    return(-999);
  else
    {
     ptr=top;
     top=top->next;
     x=ptr->data;
     delete ptr;
     return(x);
    }
 }
void main()
 {
  stack obj;
  int ch,data,x;
  do
   {
    clrscr();
    cout<<"\n..........PROGRAM'S MENU..........\n\n";
    cout<<"\n PRESS 1 FOR PUSH OPERATION\n";
    cout<<"\n PRESS 2 FOR POP OPERATION\n";
    cout<<"\n PRESS 3 FOR EXIT OPERATION\n";
    cin>>ch;
    switch(ch)
     {
      case 1: cout<<"\n ENTER VALUE FOR PUSH IN TO STACK	";
	      cin>>x;
	      obj.push(x);
	      break;
      case 2: data=obj.pop();
	      if(data!=-999)
		cout<<"\nPOPED ITEM IS "<<data;
	      else
		cout<<"\nSTACK IS EMPTY";
		getch();
		break;
      case 3:cout<<"\n...... THE PROGRM IS WRITTEN BY RAJ ...... \n";
	     cout<<"\n..............THANK YOU...............";
	     getch();
	     exit(0);

     }//end of switch
   }while(1);
 }//end of main

