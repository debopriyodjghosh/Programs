#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
public:
int data;
node *next;
};

class linklist
{
private:
node *start;
public:
linklist()
{
start=NULL;
}
void insend();
void list();
void insbeg();
void insbet();
void del();
};
void linklist::insend()
{
node *c,*cur;
cur=new node();
cout<<"\n data: ";
cin>>cur->data;
cur->next=NULL;
if(start==NULL)
{
start=cur;
return;
}
c=start;
while(c->next!=NULL)
{
c=c->next;
}
c->next=cur;
}
  void linklist::list()
  {
  node *c;
  cout<<endl;
  for(c=start;c!=NULL;c=c->next)
  {
  cout<<c->data<<endl;
  }
  }

int main()
{
linklist z;
int v;
do
{
 cout<<"\n 1.insend";
 cout<<"\n 2.list";
 cout<<"\n 3.exit";
 cin>>v;
 switch(v)
 {
  case 1:
   z.insend();
   z.list();
   break;
  case 2:
    z.list();
 }
}
while(v!=3);
return 0;
}
