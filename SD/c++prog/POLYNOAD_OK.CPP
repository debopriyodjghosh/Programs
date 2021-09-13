
#include "iostream.h"
#include <conio.h>
#define null 0

template<class t>
class node
{
  t data;
  int expo;
  node<t> *next;
  public:
	  node(){}
	  void createlist(node<t> &head);
	  void display(node<t> &head);
	  friend void  polyadd(node<t> &head1,node<t> &head2);
};


template<class t>
void node<t>::createlist(node<t> &head)
{
node<t> *ptr1;
node<t> *ptr2=null;
t x;
int e;
head.next=null;
cout<<"\nEnter coefficient :(0 for none)";
cin>>x;
cout<<"\nEnter exponent :";
cin>>e;

while(x!=0)
{
 ptr1=new node;
 ptr1->data=x;
 ptr1->expo=e;
 ptr1->next=null;
 if(head.next==null)
    head.next=ptr1;
 else
    ptr2->next=ptr1;
  ptr2=ptr1;

  cout<<"\nEnter another coefficient:(0 for none)\n";
  cin>>x;
  cout<<"\nEnter exponent :\n";
  cin>>e;

}
}
template<class t>
void node<t>::display(node<t> &head)
{
 node<t> *ptr;
 ptr=head.next;
 if (ptr != null)
	cout<<"  "<<ptr->data<<"X^"<<ptr->expo;
 ptr=ptr->next;
 while(ptr!=null)
  {
	if (ptr->data > 0)
		cout<<" + "<<ptr->data<<"X^"<<ptr->expo;
	else
		cout<<" "<<ptr->data<<"X^"<<ptr->expo;

	ptr=ptr->next;
  }
}
template<class t>
void polyadd (node<t> &head1,node<t> &head2)
{
node<t> *ptr1,*ptr2,*ptr,*ptr3=null,m;
node<t> head3;
t co;
int ex;
ptr1=head1.next;
ptr2=head2.next;
head3.next=null;
while (ptr1!=null && ptr2!=null)
{
	 if(ptr1->expo==ptr2->expo)
	 {
		co=ptr1->data + ptr2->data;
		ex=ptr1->expo;
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	 }
	 else if(ptr1->expo > ptr2->expo)
	 {
	  co=ptr1->data;
	  ex=ptr1->expo;
	  ptr1=ptr1->next;
	 }
	 else if(ptr1->expo < ptr2->expo)
	 {
	  co=ptr2->data;
	  ex=ptr2->expo;
	  ptr2=ptr2->next;
	  }
	 //create new node and then third list
		ptr=new node<t>;
		ptr->expo=ex;
		ptr->data=co;
		ptr->next=null;
		 if(head3.next==null)
			 head3.next=ptr;
		 else
			 ptr3->next=ptr;
		 ptr3=ptr;
 }  //end of while

  while(ptr1 != null)
	{
	ptr=new node<t>;
	ptr->data=ptr1->data;
	ptr->expo=ptr1->expo;
	ptr->next=null;
	ptr3->next=ptr;
	ptr3=ptr;
	ptr1=ptr1->next;
	}
 while(ptr2 !=null)
	{
	ptr=new node<t>;
	ptr->data=ptr2->data;
	ptr->expo=ptr2->expo;
	ptr->next=null;
	ptr3->next=ptr;
	ptr3=ptr;
	ptr2=ptr2->next;
	}
	m.display (head3);
}


void main()
{
clrscr();
node<int> head1,head2,m;
//node<int>head3;

m.createlist(head1);
cout<<"\n\n1st list is....\n\n";
m.display(head1);

m.createlist(head2);
cout<<"\n\n2nd list is....\n\n";
m.display(head2);


cout<<"\n\nList after addition is....\n\n";
 polyadd(head1,head2);
getch();
}
