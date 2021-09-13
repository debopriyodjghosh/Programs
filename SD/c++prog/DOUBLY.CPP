//Ordered insertion, deletion, reverse of a doubly linked list using template

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

template<class T>
class node
{
  T data;
  node<T> *prev;
  node<T> *next;
  public:
  void create(node<T> *&head);
  void display(node<T> *&head);
  void del(node<T> *&head);
  void reverse(node<T> *&head);
  node<T>* getnode(T);
  int count(node<T> *&head);
};
template<class T>
node<T>* node<T>::getnode(T x)
{
  node<T> *ptr;
  ptr=new node;
  ptr->next=NULL;
  ptr->data=x;
  ptr->prev=NULL;
  return (ptr);
}
template<class T>
int node<T>::count(node<T> *&head)
{
   int c=0;
   node *ptr;
   ptr=head;
   while(ptr!=NULL)
   {
      ptr=ptr->next;
      c++;
   }
   c=c/2;
   return c;
}
template<class T>
void node<T>::display(node<T> *&head)
{
  node *ptr;
  ptr=head;
  while(ptr!=NULL)
  {
    cout<<"   "<<ptr->data;
    ptr=ptr->next;
  }
}
template<class T>
void node<T>::create(node<T> *&head)
{
    T x;
    node<T> *temp,*tr,*tr1;
    cout<<"\n\tEnter value (-999 to stop): ";
    cin>>x;
    if(x!=-999)
    {
      while(x!=-999)
      {
	temp=getnode(x);
	if(head==NULL)
	  head=temp;
	else
	{
	  tr=head;
	  tr1=head;
	  while(tr!=NULL)
	  {
	     if(tr->data<temp->data)
	     {
		tr1=tr;
		tr=tr->next;
	     }
	     else
	       break;
	   }
	 if(tr1==tr)
	  {
	    temp->next=head;
	    head=temp;
	  }
	  else if(tr->data>=temp->data)
	  {
	    temp->prev=tr1;
	    tr1->next=temp;
	    temp->next=tr;
	    tr->prev=temp;
	  }
	  else
	  {
	     tr1->next=temp;
	     temp->prev=tr1;
	  }

	}
	cout<<"\n\tEnter value (-999 to stop): ";
	cin>>x;
      }
    }
}
template<class T>
void node<T>::del(node<T> *&head)
{
  T x;
  node<T> *tr,*tr1;
  int y=1;

  while(y!=0)
  {
     if(head==NULL)
  {
    cout<<"\n\tList is empty..........";
    getch();
    exit(0);
  }
  cout<<"\n\tEnter value for deletion: ";
  cin>>x;
  tr1=tr=head;
  while(tr!=NULL)
  {
    if(tr->data!=x)
    {
      tr1=tr;
      tr=tr->next;
    }
    else
      break;
  }
  if(tr==NULL)
  {
    cout<<"\n\tValue not found..........";
  }
  else
  {
    if(tr1==tr)
    {
      head=head->next;
      head->prev=NULL;
    }
    else
    {
      tr1->next=tr->next;
      tr1->next->prev=tr1;
    }
    cout<<"\n\t"<<tr->data<<" is deleted........";
    delete tr;
    cout<<"\n\tNow the list is.........";
    display(head);
   }
    cout<<"\n\tDo you want to delete another record (1 for yes & 0 for no): ";
    cin>>y;
  }
}
template<class T>
void node<T>::reverse(node<T> *&head)
{
   node *p,*q;
   int ns,i=0;       //ns=No. of swapping
   T t;
   p=head;
   q=head;
   while(p->next!=NULL)
     p=p->next;
   ns=count(head);
   while(i!=ns)
   {
     t=q->data;
     q->data=p->data;
     p->data=t;
     q=q->next;
     p=p->prev;
     i++;
   }
  cout<<"\n\tReverse list is........";
  display(head);
}
void main()
{
  node<int> *head,obj;
  head=NULL;
  clrscr();
  obj.create(head);
  cout<<"\n\tOriginal list is..........";
  obj.display(head);
  obj.reverse(head);
  obj.del(head);
  getch();
}

