//2006-2nd day//
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>

class queue
{
 private: int item,info,count;
	 char ans;
			queue *link,*p,*f,*r;
 public: queue()
		  {
			 f=NULL;
			 r=NULL;
			 }
			 void insertion();
			 void deletion();
			 void display();
			 void length();
  };
  void queue::insertion()
  {

	 while(1)
	 {
		p=new queue;
		if(p==NULL)
		{
		  cout<<"overflow";
		  break;
		  }
		  cout<<"enter the item to be inserted";
		  cin>>item;
		  p->info=item;
		  p->link=NULL;
		  if(f== NULL && r==NULL)
			  f=r=p;
		 else
		 {
			// p->link=r;
			 //r=p;
			r->link=p;
			r=p;
		  }
		  //if(f==NULL)
		    //f=f->link;
			cout<<"do u want to continue";
			  cin>>ans;
			if(ans!='Y' && ans!='y')
				break;
		  }
 }


 void queue::length()
 {  count=0;
	queue *ptr;
	ptr=f;

	while(ptr!=NULL)
	{
	  ptr=ptr->link;
	  count=count+1;
	}
	cout<<"\n the length is"<<count;
  }

  void queue::display()
 {
	queue *ptr;
	ptr=f;
	while(ptr!=NULL)
	{
	//  cout<<"the elements are";
		cout<<ptr->info<<"=>";
	    ptr=ptr->link;
	  }
	  cout<<"NULL";

  }

  void queue::deletion()
  {
	  queue *ptr;
	  ptr=f;
	  f=f->link;
	  cout<<"\n DELETED ITEM="<<ptr->info;
	  delete ptr;
  }


/*	  cout<<"do u want to continue";
	  cin>>ans;
	  if(ans!='Y'&& ans!='y')
		return;
*/



	 void main()
	 {
	  clrscr();
	  queue q;
	  q.insertion();
	  cout<<"\n";
	  q.display();
	  cout<<"\n";
	  q.deletion();
	  //q.display();
	  cout<<"\n";
	  q.length();
	  getch();
	  }