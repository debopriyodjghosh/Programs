#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node
{
  int data;
  struct node*link;
}NODE;
class stack
{
  NODE*s;
  public:stack()
	 {
	   s=NULL;
	 }
	 int pop()
	 {
	    NODE*temp;
	    int item;
	    if(s==NULL)
	    {
	      cout<<"\nStack is empty";
	      return NULL;
	    }
	    else
	    temp=s;
	    item=temp->data;
	    s=s->link;
	    delete(temp);
	    return item;
	 }
	 void push(int);
	 void display();
	 ~stack()
	 {
	   NODE*temp;
	   if(s==NULL)
	   return;
	   else
	   {
	     temp=s;
	     s=s->link;
	     free(temp);
	   }
	 }

};
void stack::push(int item)
{
  NODE*temp;
  temp=new NODE;
  if(temp==NULL)
  {
    cout<<"\n Stack is full";
    return;
  }
  else
  temp->data=item;
  temp->link=s;
  s=temp;
}
void stack::display()
{
  NODE * temp;
  temp=s;
  while(temp!=NULL)
  {
   cout<<"\t"<<temp->data;
   temp=temp->link;
  }
}
 main()
{
  stack ob1;
  int i,ch;
  while(1)
  {
    //clrscr();
    cout<<"\nPress 1 to push";
    cout<<"\nPress 2 to delete";
    cout<<"\nPress 3 to display";
    cout<<"\nPress 4 to exit";
    cout<<"\nEnter your choice";
    cin>>ch;
    switch(ch)
    {
      case 1:cout<<"\nEnter value to push";
	     cin>>i;
	     ob1.push(i);
	     getch();
	     break;
      case 2:i=ob1.pop();
	     cout<<i<<" is deleted";
	     getch();
	     break;
      case 3:ob1.display();
	     getch();
	     break;
      case 4:exit(0);
	     getch();
	     break;
      default:cout<<"\nWronginput";
	      getch();
	      break;
    }
  }
}

