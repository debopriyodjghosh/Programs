/*ok....2009 2nd day 3)Create a class 'node' and using this,
create a class  'list' which implements a singly linked list.
Use constructors and destructor in this class list.
Include member functions reverselist (reverse the direction of linked list),
and display (display the list) */

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
   public:
     void create(node *&head);
     void display(node *&head);
     void reverselist(node *&head);
     node* getdata(int &x);
  };

void list::reverselist(node *&head)
{
   node *p,*q,*s;
  p=head;
  q=NULL;
  while(p!=NULL)
  {
    s=q;
    q=p;
    p=p->next;
    q->next=s;
  }
  head=q;
  cout<<"\n\n\tReverse list is.......... \n\n";
  display(head);
}

void list::create(node *&head)
{
   int x;
   node *temp,*p;
   cout<<"\n\tEnter value (-999 to stop): ";
   cin>>x;
  while(x!=-999)
  {
    temp=getdata(x);
    if(head==NULL)
      head=temp;
    else
    {
      p=head;
      while(p->next!=NULL)
	p=p->next;
      p->next=temp;
    }
    cout<<"\n\tEnter value (-999 to stop): ";
    cin>>x;
  }
}
 node* list::getdata(int &x)
  {
    node *ptr;
    ptr=new node;
    ptr->data=x;
    ptr->next=NULL;
    return (ptr);
  }
void list::display(node *&head)
{
    node *p;
    if(head==NULL)
      cout<<"\n\tList is empty";
    else
    {
      p=head;
      while(p!=NULL)
      {
	 cout<<"   "<<p->data;
	 p=p->next;
       }
     }
}

void main()
{
  node *head;
  head=NULL;
  list obj;
  clrscr();
  obj.create(head);
  cout<<"\n\n\tOriginal list is........... \n\n";
  obj.display(head);
  obj.reverselist(head);
  getch();
}