#include<iostream>
#include<conio.h>
using namespace std;
template<class t>

class list
{
  private : 
              typedef struct node
	    {
	      t data;
	      struct node * link;
	    }NODE;
             NODE * root;
  public : list();
	   ~list();
	   void add(t);
	   void display();
};
template<class t>list<t>::list()
{
  root=NULL;
}
template<class t>list<t>::~list()
{
  NODE *temp;
  while(root)
  {
    temp=root;
    root=root->link;
    delete(temp);
  }
  cout<<"Object destroyed";
}
template<class t>void list<t>::add(t item)
{
  NODE *r,*temp;
  temp=root;
  r=new node;
  r->data=item;
  if(root==NULL || root->data > item)
  {
    root=r;
    root->link=temp;
  }
  else
  {
    while(temp)
    {
      if(temp->data<=item && (temp->link->data>item || temp->link==NULL))
      {
	r->link=temp->link;
	temp->link=r;
	return;
      }
      temp=temp->link;
    }
  }

}
template<class t>void list<t>::display()
{
  NODE *q;
  q=root;
  cout<<"\n";
  while(q)
  {
    cout<<q->data<<"\t";
    q=q->link;
  }
}
 main()
{
  list<int>ob;
  int ch,item;
  do
  {
   // clrscr();
    cout<<"\n Menu for link list operation";
    cout<<"\nPress 1 to insert value in accending";
    cout<<"\nPress 2 display";
    cout<<"\nPress 0 to exit";
    cout<<"\nEnter your choice";
    cin>>ch;
    switch(ch)
    {
      case 1:cout<<"\nEnter item ";
	     cin>>item;
	     ob.add(item);
	     //getch();
	     break;
      case 2:cout<<"\nDisplay";
	     ob.display();
	     //getch();
	     break;
      case 0:cout<<"\nExit";
	     break;
      default:cout<<"\nInvalid choice";
    }
   }while(ch!=0);
}

