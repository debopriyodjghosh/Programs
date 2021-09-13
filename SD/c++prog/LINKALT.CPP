//ok...2010 3rd day 6)  Write a program to create a class for a singly linked list. Provide a friend function take altnode() that will work on two objects of the class and create a singly linked list(as a member of a 3rd object) taking elements alternatively from the two lists.

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

class node
  {
    public:
      int data;
      node *next;
  };

class list
 {
  node *p;
  public:
  list()
  {
    p=NULL;
  }
  void create();
  void display();
  friend list altnode(list,list);
};

void list::create()
{
  node *q,*temp;
  int x;
  cout<<"\n\tEnter value(-999 to stop): ";
  cin>>x;
    while(x!=-999)
    {
      temp=new node;
      temp->data=x;
      temp->next=NULL;
      if(p==NULL)
	 p=temp;
      else
      {
	 q=p;
	 while(q->next!=NULL)
	     q=q->next;
	 q->next=temp;
      }
      cout<<"\n\tEnter value(-999 to stop): ";
      cin>>x;
  }
}
void list::display()
{
  node *q;
  q=p;
  while(q!=NULL)
  {
    cout<<q->data<<"    ";
    q=q->next;
  }
}

list altnode(list head1,list head2)
{
  list h3;
  node *tr1,*tr2,*tr3,*temp;
  tr1=head1.p;
  tr2=head2.p;
  while(tr1!=NULL && tr2!=NULL)
  {
    temp=new node;
    temp->data=tr1->data;
    temp->next=NULL;
    tr1=tr1->next;
    if(h3.p==NULL)
    {  h3.p=temp;tr3=h3.p;}
    else
    {
       tr3=tr3->next;
       tr3->next=temp; tr3=tr3->next;
    }
    temp=new node;
    temp->data=tr2->data;
    temp->next=NULL;
    tr3->next=temp;
    tr2=tr2->next;
  }
  while(tr1==NULL && tr2!=NULL)
  {
    temp=new node;
    temp->data=tr2->data;
    temp->next=NULL;
    tr3=tr3->next;
    tr3->next=temp;
    tr2=tr2->next;
  }
  while(tr2==NULL && tr1!=NULL)
  {
    temp=new node;
    temp->data=tr1->data;
    temp->next=NULL;
    tr3=tr3->next;
    tr3->next=temp;
    tr1=tr1->next;
  }
  return (h3);
}


void main()
{
  list head1,head2,head3;
  clrscr();
  cout<<"\n\n\tEnter value for 1st list..........\n\n";
  head1.create();
  cout<<"\n\n\t1st list is............\n\n";
  head1.display();
  cout<<"\n\n\tEnter value for 2nd list..........\n\n";
  head2.create();
  cout<<"\n\n\t2nd list is..........\n\n";
  head2.display();
  head3=altnode(head1,head2);
  cout<<"\n\n\t3rd list is...........\n\n";
  head3.display();
  getch();
}
