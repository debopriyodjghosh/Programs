#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#define NULL 0
class node;
node *h1;
class node1;
class node
 {
  protected:
   char vertex;
   node *left;
   node1 *right;
  public:
   void getdata();
   void link(node *ptr,node *p);
   void create(node *ptr);
 };
void node::getdata()
 {
  cout<<endl<<"Enter value for vertex  ";
  cin>>vertex;
  left=NULL;
  right=NULL;
 }
void node::link(node *ptr,node *p)
 {
  ptr=h1;
  while(ptr->left!=NULL)
   ptr=ptr->left;
  ptr->left=p;
 }
void node::create(node *ptr)
 {
  char x;
  node *p;
  cout<<"Do you want to continue?(Y/y) ";
  cin>>x;
  while(x=='y' || x=='Y')
   {
    p=new node;
    p->getdata();
    if(h1==NULL)
     h1=p;
    else
     ptr->link(ptr,p);
    cout<<endl<<"Do you want to continue?(y/Y)";
    cin>>x;
   }
 }

class node1
 {
  private:
   node1 *add1;
   node *add2;
  public:
   void join(node1 *ptr1);
   void display(node1 *ptr1,node *ptr);
   void getdata1(node *ptr,node1 *ptr1)
    {
     ptr1->add1=NULL;
     ptr1->add2=ptr;
    }
 };
void node1::display(node1 *ptr1,node *ptr)
 {
  ptr=h1;
  while(ptr!=NULL)
   {
    cout<<endl<<"The vertex directly connected with "<<" are ";
    if(ptr->right==NULL)
     cout<<"NULL";
    else
     {
      ptr1=ptr->right;
      while(ptr1!=NULL)
       {
	cout<<ptr1->add2->vertex<<",";
	ptr1=ptr1->add1;
       }
     }
    ptr=ptr->left;
   }
 }
void node1::join(node1 *ptr1)
 {
  char m,b,v;
  node *ptr=h1;
  while(ptr!=NULL)
   {
    cout<<"Press (Y/y) if any vertex directly connected with "<<ptr->vertex;
    cin>>b;
    if(b=='y' ||b=='Y')
     {
      cout<<endl<<"Enter the name of the vertex directly connected with ";
      cin>>m;
      if(ptr->vertex!=m)
       {
	node *ptr2=h1;
	while(ptr2->left!=NULL && ptr2->vertex!=m)
	 ptr2=ptr2->left;
	ptr1=new node1;
	ptr1->getdata1(ptr,ptr1);
	ptr->right=ptr1;
	node1 *ptr3=ptr->right;
	cout<<"Press z for stop";
	cin>>v;
	while(v!='z')
	 {
	  cout<<endl<<"Enter the name of the vertex directly connected with "<<ptr->vertex;
	  cin>>m;
	  node *ptr2=h1;
	  while(ptr2->left!=NULL && ptr2->vertex!=m)
	   ptr2=ptr2->left;
	  ptr1=new node1;
	  ptr1->getdata1(ptr,ptr1);
	  ptr3->add1=ptr1;
	  ptr3=ptr3->add1;
	  cout<<"Press z for stop";
	  cin>>v;
	 }
       }
     }
    ptr=ptr->left;
   }
 }
void main()
 {
  clrscr();
  node *ptr;
  node1 *ptr1;
  ptr1->create(ptr);
  ptr1->join(ptr1);
  ptr1->display(ptr1,ptr);
  getch();
 }