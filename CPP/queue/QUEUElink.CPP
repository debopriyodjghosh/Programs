/************************************************************************
 * PROGRAM : QUEUE OPERATION                                            *
 * WE USED THR LOGIC OF CIRCULER LINKED-LIST                            *
 * PROGRAM IS OK                                                        *
 ************************************************************************/
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define null 0
class queue
 {
  private:
    int data;
    queue *next;
  public:
    void insert(int);
    int qdelete();
    void display();
 }*rear,*front,*qptr;    		//insert at rear
void queue::insert(int x)
 {
  queue *new1;
  new1=new queue;
  new1->next=null;
  new1->data=x;
  if(qptr==null)
   {
    qptr=new1;
    new1->next=qptr;
   }
  else
  {
   rear=qptr;
   while(rear->next!=qptr)
      rear=rear->next;
   new1->next=qptr;
   qptr=new1;
   rear->next=qptr;
  }
 }
int queue::qdelete()
 {
   queue *ptr,*ptr2;
   int x;
   if(qptr==null)
    return(-999);
   ptr=qptr;
   while(ptr->next!=qptr)
   {
    ptr2=ptr;
    ptr=ptr->next;
   }
   if(ptr==qptr)
    {
     x=qptr->data;
     delete ptr;
     qptr=null;
     return(x);
    }
   x=ptr->data;
   delete ptr;
   ptr2->next=qptr;
   return(x);
 }
void queue::display()
 {
  queue *ptr;
  if(qptr==null)
   {
    cout<<"\nQUEUE IS EMPTY\n";
    getch();
    return;
   }
  ptr=qptr;
  cout<<"\nDISPLAY OF YOUR QUEUE\n\n";
  while(ptr->next!=qptr)
    {
     cout<<"  "<<ptr->data;
     ptr=ptr->next;
    }
   cout<<"  "<<ptr->data;
   getch();
 }
void main()
 {
  int ch,x;
  queue obj;
  do
   {
    clrscr();
    cout<<"\n.........PROGRAM'S MENU..........\n\n";
    cout<<"\n PRESS 1 FOR INSERT IN TO THE QUEUE\n";
    cout<<"\n PRESS 2 FOR DELETE IN TO THE QUEUE\n";
    cout<<"\n PRESS 3 FOR DISPLAY THE QUEUE\n";
    cout<<"\n PRESS 4 FOR EXIT\n";
    cin>>ch;
    switch(ch)
     {
      case 1: cout<<"\n ENTER THE VALUE FOR INSERT IN THE QUEUE	         ";
	      cin>>x;
	      obj.insert(x);
	      break;
      case 2: x=obj.qdelete();
	      if(x!=-999)
		cout<<"\n DELETED ELEMENT IS	 "<<x;
	      else
		cout<<"\n QUEUE IS EMPTY";
	      getch();
	      break;
      case 3: obj.display();
	      break;
      case 4:cout<<"\n\n.....THE PROGRAM IS WRITTEN BY RAJ.....\n";
	     cout<<"\n...............THANK YOU...............";
	     getch();
	     exit(0);
     }//end of switch
   }while(1);


 }
