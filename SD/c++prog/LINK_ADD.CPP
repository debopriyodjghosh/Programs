/*ok.....2010 4th day 6)Write a class list that contains a singly linked list.
The nodes of the linked list contain one integer data and a link to the
next node. Overload + operator so that it operates on two objects of the
class and creates another object containing a singly linked list whose
elements are obtained by adding the corresponding node elements of two
operand lists (from two operand objects). If the operand lists are of
unequal length just copy excess elements of the longer list at the end
of the resultant list.*/

#include<iostream.h>
#include<conio.h>

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
    list operator +(list);
};

void list::create()
{
  node *q,*temp;
  int x;
  cout<<"\n\tEnter value(-999 to stop): ";
  cin>>x;

  if(x!=-999)
  {
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
list list::operator+(list head2)
{
   list head3;
   node *tr1,*tr2,*tr3,*temp;
   tr1=p;
   tr2=head2.p;
   while(tr1!=NULL && tr2!=NULL)
   {
      temp=new node;
      temp->data=tr1->data+tr2->data;
      temp->next=NULL;
      if(head3.p==NULL)
      {
	 head3.p=temp;
	 tr3=head3.p;
      }
      else
      {
	tr3->next=temp;
	tr3=tr3->next;
      }
      tr1=tr1->next;
      tr2=tr2->next;
   }
   while(tr1==NULL && tr2!=NULL)
  {
    temp=new node;
    temp->data=tr2->data;
    temp->next=NULL;
    tr3->next=temp;
    tr3=tr3->next;
    tr2=tr2->next;
  }
  while(tr2==NULL && tr1!=NULL)
  {
    temp=new node;
    temp->data=tr1->data;
    temp->next=NULL;
    tr3->next=temp;
    tr3=tr3->next;
    tr1=tr1->next;
  }
   return head3;
}

void main()
{
  list head1,head2,h3;
  clrscr();
  cout<<"\n\n\tEnter value for 1st list..........\n\n";
  head1.create();
  cout<<"\n\n\t1st list is............\n\n";
  head1.display();
  cout<<"\n\n\tEnter value for 2nd list..........\n\n";
  head2.create();
  cout<<"\n\n\t2nd list is..........\n\n";
  head2.display();
  h3=head1+head2;
  cout<<"\n\n\t3rd list is............\n\n";
  h3.display();
  getch();
}