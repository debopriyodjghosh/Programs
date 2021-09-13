
 //stack using linkedlist

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
#define null 0
#include <process.h>


template <class t>
class node
{
t data;
node<t> *next;

public:
node()
{
data=0;
next=null;
}
node(t x);
void push(node<t> &top);
void pop(node<t> &top);
void display(node<t> &top);
};

template <class t>
node<t>::node(t x)
{
data=x;
next=null;
}

template <class t>
void node<t>::push(node<t> &top)
{
node<t> *p;
t x;
cout<<"enter a value: ";
cin>>x;
if(top.next==null)
{
node<t> *p=new node<t>(x);
p->data=x;
p->next=null;
top.next=p;
}
else
{
node<t> *p=new node<t>(x);
p->data=x;
p->next=null;
p->next=top.next;
top.next=p;
}
}

template <class t>
void node<t>::pop(node<t> &top)
{
node<t> *p;
if(top.next==null)
{
cout<<"stack is underflow....";
getch();
}
else
{
p=top.next;
top.next=p->next;
delete(p);
}
}
template<class t>
void node<t>::display(node<t> &top)
{
node<t> *p;
p=top.next;
while(p != null)
{
cout<<p->data<<endl;
p=p->next;
}
}

void main()
{
node<int> head;
int ch;
do
{
clrscr();
cout<<"1.push\n 2. pop\n 3.display\n 4.exit\n Enter your choice:";
cin>>ch;
switch(ch)
{
case 1: head.push(head);
	break;
case 2: head.pop(head);
	break;
case 3: head.display(head);
	getch();
	break;
case 4: exit(0);

}
}while(1);

}
