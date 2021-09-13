//ok...2010 4th day 5) Design a class List that contains a singly linked list. Write a method that will take two objects(say obj1,obj 2) of class List and create a third object of List containing nodes from obj1 and obj 2 in sorted order.


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class list
{
  struct node
  {
    int data;
    node *next;
  } *p;
  public:
  list()
  {
    p=NULL;
  }
  void create();
  void display();
  void sort(list,list);
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
} //end of create

void list::display()
 {
  node *q;
  q=p;
  while(q!=NULL)
  {
    cout<<q->data<<"   ";
    q=q->next;
  }
}
void list::sort(list head1,list head2)
{
  node *q,*temp,*r,*s,*tr;
  int t;
  r=head1.p;
  s=head2.p;
  while(r!=NULL)
  {
    temp=new node;
    temp->data=r->data;
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
    r=r->next;
  }
  q=q->next;
  while(s!=NULL)
  {
    temp=new node;
    temp->data=s->data;
    temp->next=NULL;
    q->next=temp;
    q=q->next;
    s=s->next;
  }
for(q=p;q!=NULL;q=q->next)
{
  for(r=p;r->next!=NULL;r=r->next)
  {
    if(r->data>r->next->data)
    {
      t=r->data;
      r->data=r->next->data;
      r->next->data=t;
    }
  }
}
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
  head3.sort(head1,head2);
  cout<<"\n\n\t3rd list is..........\n\n";
  head3.display();
  getch();
}
