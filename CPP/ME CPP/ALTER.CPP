#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define NULL 0
class slist
{
     struct node
     {
	int ele;
	node *link;
     }*start;
   public:
	  slist(){start=NULL;}
	  void create_list();
	  void dis();
	  friend slist altnode(slist,slist);
};
void slist::create_list()
{
   start=NULL;
   int m;
   char ch;
   node *temp,*save;
   do
   {
     temp=new node;
     cout<<"enter value"<<endl;
     cin>>m;
     temp->ele=m;
     temp->link=NULL;
     if(start==NULL)
     {
      start=temp;
      save=start;
     }
     else
     {
       save->link=temp;
       save=save->link;
     }
     cout<<"do you want to continue"<<endl;
     cin>>ch;
   }
   while(ch=='Y'||ch=='y');
}
void slist::dis()
{
  node *trav=start;
   while(trav!=NULL)
  {
    if(trav->link==NULL)
     printf("|%d|%d|",trav->ele,trav->link);
    else
     printf("|%d|%d|->",trav->ele,trav->link);
     trav=trav->link;
  }
}
slist altnode(slist s2,slist s1)
{
  node *trav1,*trav2,*temp,*save;
  slist s3;   ;
  s3.start=NULL;
  int i=1;
  trav1=s1.start;//odd list
  trav2=s2.start; //even list
  while(trav1!=NULL&&trav2!=NULL)
  {
     temp=new node;
     temp->link=NULL;
     if(i%2==0)
     {
       temp->ele=trav2->ele;
       if(s3.start==NULL)
       {
	 s3.start=temp;
	 save=s3.start;
       }
       else
       {
	 save->link=temp;
	 save=save->link;
       }
       i++;
       trav2=trav2->link;
     }
     else
     {
       temp->ele=trav1->ele;
       if(s3.start==NULL)
       {
	 s3.start=temp;
	 save=s3.start;
       }
       else
       {
	 save->link=temp;
	 save=save->link;
       }
       i++;
       trav1=trav1->link;
     }
  }
  while(trav1!=NULL)
  {
     temp=new node;
     temp->link=NULL;
     temp->ele=trav1->ele;
     save->link=temp;
     save=save->link;
     trav1=trav1->link;
  }
   while(trav2!=NULL)
  {
     temp=new node;
     temp->link=NULL;
     temp->ele=trav2->ele;
     save->link=temp;
     save=save->link;
     trav2=trav2->link;
  }
 return s3;
}
void main()
{
  slist s1,s2,s3;
  clrscr();
  s1.create_list();
  cout<<endl;
  s1.dis();
  cout<<endl;
  s2.create_list();
  cout<<endl;
  s2.dis();
  cout<<endl;
  getche();
  s3=altnode(s1,s2);
  s3.dis();
  getche();
}