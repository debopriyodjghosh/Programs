/*Write a class that contains a singly linked list.
Write a member that will take two objects (say,obj1 and obj2)
of the class and create a third objects containing the nodes from
obj1 and obj2 in decending order.Write any other auxiliary functions
if required.*/

#include "iostream.h"
#include <conio.h>

class node
{
int data;
node *next;
public:
friend void createlist(node &head);
friend void display(node &head);
node decenmerge(node &head1,node &head2);
friend void decenobj(node &head);
};

void createlist(node &head)
{
node *ptr1,*ptr2;
int x;
head.next=NULL;
cout<<"\nEnter data :(0 for none)";
cin>>x;
while(x!=0)
{
 ptr1=new node;
 ptr1->data=x;
 ptr1->next=NULL;
 if(head.next==NULL)
    head.next=ptr1;
 else
    ptr2->next=ptr1;
  ptr2=ptr1;
  cout<<"\nenter another data:(0 for none)";
  cin>>x;
}
}

void display(node &head)
{
 node *ptr;
 ptr=head.next;
 while(ptr!=NULL)
  {
   cout<<"  "<<ptr->data;
   ptr=ptr->next;
  }
}

node node::decenmerge(node &head1,node &head2)
{
node *ptr1,*ptr2,*ptr,*ptr3,head3;
ptr1=head1.next;
ptr2=head2.next;
head3.next=NULL;
while(ptr1!=NULL && ptr2!=NULL)
{
  ptr=new node;
  ptr->next=NULL;
  if(ptr1->data>ptr2->data)
      {
      ptr->data=ptr1->data;
      ptr1=ptr1->next;
      }
  else
     {
      ptr->data=ptr2->data;
      ptr2=ptr2->next;
     }
  if(head3.next==NULL)
     head3.next=ptr;
  else
     ptr3->next=ptr;
  ptr3=ptr;
 }//end of while
 while(ptr1 != NULL)
   {
   ptr=new node;
   ptr->data=ptr1->data;
   ptr->next=NULL;
   ptr3->next=ptr;
   ptr3=ptr;
   ptr1=ptr1->next;
   }
 while(ptr2 !=NULL)
   {
   ptr=new node;
   ptr->data=ptr2->data;
   ptr->next=NULL;
   ptr3->next=ptr;
   ptr3=ptr;
   ptr2=ptr2->next;
   }
   return head3;
}

void decenobj(node &head)
{
  node *ptr,*ptr1;
  int temp;
  ptr=head.next;

  while(ptr->next != NULL)
  {
  ptr1=ptr->next;

  while(ptr1 !=NULL)
     {
      if(ptr->data<ptr1->data)
	  {
	   temp= ptr->data;
	   ptr->data=ptr1->data;
	   ptr1->data=temp;
	  }
	ptr1=ptr1->next;
     }
     ptr=ptr->next;
  }//end of outer while
}
void main()
{
clrscr();
node head1,head2,head3;

createlist(head1);
cout<<"\n\n1st list is....\n\n";
display(head1);

createlist(head2);
cout<<"\n\n2nd list is....\n\n";
display(head2);

decenobj(head1);
cout<<"\n\n1st list in descending order is....\n\n";
display(head1);

decenobj(head2);
cout<<"\n\n2nd list in descending order is....\n\n";
display(head2);

head3=head3.decenmerge(head1,head2);
cout<<"\n\nList after merging in descending order is....\n\n";
display(head3);

getch();
}
