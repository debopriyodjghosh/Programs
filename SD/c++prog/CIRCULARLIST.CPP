/* circuler linkedlist using linked list*/

#include<iostream.h>
#include<process.h>
#include<conio.h>
#define NULL 0

template <class t>
class node
{
t data;
node<t> *next;
public:
    node(t x);
    void createlist(node<t> &h);
    void displaylist(node<t> &h);
node()
{
data=0;
next=NULL;
}
};

template <class t>
node<t>::node(t x)
{
data=x;
next=NULL;
}

template <class t>
void node<t>::createlist(node<t> &h)
{
t x;
node<t> *p;
cout<<"enter the data(0 for stop):";
cin>>x;
while (x!=0)
{
 p=new node<t>(x);
 p->data=x;
 p->next=NULL;
 if (h.next==NULL)
    {
    h.next=p;
    p->next=h.next;
    }
else
    {
    p->next=h.next->next;
    h.next->next=p;
    h.next=p;
    }

cout<<"Enter data(0 for stop):";
cin>>x;
}
}

template <class t>
void node<t>::displaylist(node<t> &h)
{
node<t> *p;
p=h.next->next;
while(p != h.next)
{
cout<<p->data<<endl;
p=p->next;
}
cout<<p->data;
}

void main()
{
clrscr();
node<int> head;
head.createlist(head);
cout<<"\n\nElements are.....\n\n";
head.displaylist(head);
getch();
}
