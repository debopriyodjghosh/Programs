#include<iostream.h>
#include<conio.h>
#include<stdio.h>

#define NULL 0

template <class T>
class Dlist
{
	struct node
	{
		int ele;
		node *flink;
		node *blink;
	}*start,*start1;
	public:
		Dlist(){}
		void create_dlist();
		void revlist();
		//void dis(Dlist);
		void dis(node *s)
		{
		 node *trav=s;
		 printf("|START|%d|->",trav);
		 while(trav!=NULL)
		 {
		if(trav->flink==NULL)
		 printf("|%d|%d|%d|",trav->ele,trav->blink,trav->flink);
		else
		 printf("|%d|%d|%d|->",trav->ele,trav->blink,trav->flink);
		trav=trav->flink;
		 }
	 }
};
template <class T>
void Dlist<T>::create_dlist()
{
  char ch;
  start=NULL;
  node *temp,*save;
  do
  {
     temp=new node;
     cout<<"enter value";
     cin>>temp->ele;
     temp->flink=NULL;
     temp->blink=NULL;
     if(start==NULL)
     {
       start=temp;
       save=start;
     }
     else
     {
       temp->blink=save;
       save->flink=temp;
       save=save->flink;
     }
     cout<<"do you want to continue"<<endl;
     cin>>ch;
  }
  while(ch=='Y'||ch=='y');
  dis(start);
}
template <class T>
void Dlist<T>::revlist()
{
  node *trav,*temp;
  trav=start;
  start1=NULL;
  while(trav!=NULL)
  {
    temp=new node;
    temp->ele=trav->ele;
    temp->flink=NULL;
    temp->blink=NULL;
    if(start1==NULL)
      start1=temp;
    else
    {
      start1->blink=temp;
      temp->flink=start1;
      start1=temp;
    }
    trav=trav->flink;
  }
  dis(start1);
}
void main()
{
  clrscr();
  Dlist <int> D1;
  D1.create_dlist();
  cout<<endl;
  cout<<"after reversal of list"<<endl;
  D1.revlist();
  cout<<endl;
  getche();
}
