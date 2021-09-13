#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node * link;
}NODE;
typedef struct queue
{
  struct node * front;
  struct node * rear;
}QUEUE;
class list
{
  QUEUE * a;
  public : list()
	   {
	     a->front=NULL;
	     a->rear =NULL;
	   }

	    int delq()
	    {
	      NODE * temp;
	      int item;
	      if(a->front==NULL)
	      {
		cout<<"Queue is empty";
		return NULL;
	      }
	      item=a->front->data;
	      temp=a->front;
	      a->front=a->front->link;
	      delete(temp);
	      return(item);
	    }
	    void addq(int);
	    void display();
	    ~list();

};
void list :: addq(int item)
	   {
	     NODE * temp;
	     temp=new NODE;
	     if(temp==NULL)
	     {
	       cout<<"overflow";
	       return;
	     }
	     temp->data=item;
	     temp->link=NULL;
	     if(a->front==NULL)
	     {
	       a->front=temp;
	       a->rear=temp;
	       return;
	     }
	     a->rear->link=temp;
	     a->rear=a->rear->link;

	   }
void list::  display()
	    {
	      NODE * temp;
	      temp=a->front;
	      while(temp)
	      {
		cout<<temp->data<<"\t";
		temp=temp->link;
	      }
	    }

 list ::   ~list()
	    {
	      NODE * temp;
	      if(a->front==NULL)
	      return;
	      while(a->front!=NULL)
	      {
		temp=a->front;
		a->front=a->front->link;
		delete(temp);
	      }
	    }
void main()
{
 list q;
 int ch,i;
 while(1)
 {
   clrscr();
   cout<<"\nPress 1 to insert";
   cout<<"\nPress 2 to delete";
   cout<<"\nPress 3 to display";
   cout<<"\nPress 4 to exit";
   cout<<"\nEnter ypur choice";
   cin>>ch;
   switch(ch)
   {
     case 1:cout<<"\nEnter value to insert";
	    cin>>i;
	    q.addq(i);
	    getch();
	    break;
     case 2:i=q.delq();
	    cout<<i<<" is deleted";
	    getch();
	    break;
     case 3:q.display();
	    getch();
	    break;
     case 4:exit(0);
	    getch();
	    break;
    }
  }
}