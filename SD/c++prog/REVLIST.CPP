/*Create a class node and using this,design a class list which
implements a singly linked list.Use suitable constructors and
destructors in this class list.include member functions reverselist
(reverse a  list)and display(display the list).*/

#include"iostream.h"
#include<conio.h>
#include<process.h>

class node
  {
  public:
    int data;
    node *next;
  };

class list
  {
  public:
     void createlist(node *&head);
     void display(node *&head);
     void linkreverse(node *&head);
  };

void list::createlist(node *&head)
{
int c;
node *ptr,*ptr1;
cout<<"enter data:";
cin>>c;
while(c != 0)
{
ptr=new node;
ptr->data=c;
ptr->next=NULL;
if(head==NULL)
   head=ptr;
else
   ptr1->next=ptr;
  ptr1=ptr;
  cout<<"enter anathor data:";
  cin>>c;
}
}

void list::display(node *&head)
{
node * ptr2;
ptr2=head;
cout<<"\n\nElements are.....\n\n";
while(ptr2 != NULL)
{
 cout<<"   "<<ptr2->data;
 ptr2=ptr2->next;
}
}

void list::linkreverse(node *&head)
{
node *ptr,*ptr1;
ptr=NULL;
ptr1=head->next;
while(ptr1 != NULL)
{
 head->next=ptr;
 ptr=head;
 head=ptr1;
 ptr1=ptr1->next;
}
head->next=ptr;
}

void main()
{
clrscr();
list obj1;
node *head=NULL;
obj1.createlist(head);
obj1.display(head);
obj1.linkreverse(head);
cout<<"\n\nAfter reversing.....";
obj1.display(head);
getch();
}