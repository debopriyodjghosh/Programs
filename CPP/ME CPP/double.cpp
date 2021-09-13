#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
public:
int data;-
node *next,*prev;
};

class double_linklist
{
private:
node *start;
public:
double_linklist()
{
start=NULL;
}
void ins();
void list();
void del();
};



void double_linklist::ins()
{
int i,p;
node *cur,*c;
cur=new node();
cout<<"\n data: ";
cin>>cur->data;
cur->next=NULL;
cur->prev=NULL;
if(start==NULL)
{
start=cur;
return;
}
cout<<"\n possition: ";
cin>>p;
if(p==1)
{
cur->prev=NULL;
cur->next=start;
start->prev=cur;
start=cur;
return;
}
i=0;
for(c=start;c!=NULL;c=c->next)
{
i++;
if(i==p-1)
{
cur->next=c->next;
c->next=cur;
cur->prev=c;
if(cur->next!=NULL)
{
cur->next->prev=cur;
}
return;
}

}
cout<<"\n invalide podssition!!!"<<endl;
return;
}




void double_linklist::list()
{
node *c;
if(start!=NULL)
{
for(c=start;c->next!=NULL;c=c->next)
{
cout<<c->data<<"  ";
}
cout<<c->data<<endl;
while(c!=NULL)
{
    cout<<c->data<<"  ";
     c=c->prev;
}
cout<<endl;
}
}


void double_linklist::del()
{
int i,p;
node *c,*t;
if(start==NULL)
{
    cout<<"\n  list is empty!!!";
    return;
}
cout<<"\n possition: ";
cin>>p;
if(p==1)
{
t=start;
start=start->next;
if(start!=NULL)
{
    start->prev=NULL;
}
delete t;
return;
}
i=0;
for(c=start;c!=NULL;c=c->next)
{
    i++;
    if(i==p-1)
    {
       t=c->next;
       c->next=t->next;
       if(c->next!=NULL)
       c->next->prev=c;
       delete t;
       return;
    }
}
cout<<"\n invalid position!!";
return;
}





int main()
{
double_linklist d;
int v;
do
{
    cout<<"\n 1. insert ";
    cout<<"\n 2. list ";
    cout<<"\n 3. exit";
    cout<<"\n 4. del ";
    cout<<"\n enter your choice: ";
    cin>>v;
    switch(v)
    {
    case 1:
      d.ins();
      d.list();
      break;
      case 2:
      d.list();
      break;
      case 4:
      d.del();
      d.list();
      break;
    }
}
while(v!=3);
return 0;
}
