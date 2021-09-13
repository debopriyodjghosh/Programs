#include<iostream.h>
#include<conio.h>
#include<process.h>
class list
	{
	 typedef struct node
			{
			  int info;
			  struct node *next;
			} *nodeptr;
		  nodeptr head;
	  public:
	     list();
	     ~list();
	     int emptylist();
	     void creatlist();
	     void insertmid(int,int);
	     void insertbeg(int);
	     void insertend(int);
	     void delmid(int);
	     void delfirst();
	     void displist();
	};
list::list()
	{
	 head=0;
	}
list::~list()
	{
	 nodeptr p,q;
	 if(emptylist())
	    return ;
	 for(p=head,q=p->next;p!=0;p=q,q=p->next)
	    delete p;
	}
int list::emptylist()
	{
	 return(head==0);
	}
void list::creatlist()
	{
	 nodeptr p,q;
	 int x;
	  cout<<"\nENTER VALUE FOR LIST (-999 to stop)		";
	  cin>>x;
	  while(x!=-999)
	   {
	    p=new node;
	    p->info=x;
	    p->next=0;
	    if(head==0) //for first time insert
	      head=p;
	    else
	      {
		 q=head;
		 while(q->next!=0)
		  q=q->next;
		 q->next=p;
	      }
	    cout<<"\nENTER VALUE FOR LIST (-999 to stop)		";
	    cin>>x;
	   }
	}
void list::insertmid(int exvalue,int value)
	{
	 nodeptr q,p;
	 p=head;
	 while(p!=0&&p->info!=exvalue)
	    p=p->next;
	 if(p==0)
	  {
	   cout<<"\nERROR :  entered ex_value value is not exsits";
	   getch();
	   return;
	  }
	 q=new node;
	 q->info=value;
	 q->next=p->next;
	 p->next=q;
	}
void list::insertend(int value)
	{
	 nodeptr p,q;
	 p=head;
	 while(p->next!=0)
	  p=p->next;
	  q=new node;
	  q->info=value;
	  q->next=p->next;
	  p->next=q;
	}
void list::insertbeg(int value)
	{
	 nodeptr p;
	 p=new node;
	 p->info=value;
	 p->next=head;
	 head=p;
	}
void list::delmid(int value)
	{
	 nodeptr p,q;
	 q=0;
	 p=head;
	 while(p!=0&&p->info!=value)
	  {
	   q=p;
	   p=p->next;
	  }
	 if(p==0)
	  {
	    cout<<"\nERROR : entered value is not exist";
	    getch();
	    return;
	  }
	 if(q==0)//del first node
	   head=p->next;
	 else
	     q->next=p->next;//del mid node
	 delete p;
	}
void list::delfirst()
	{
	 nodeptr p;
	 if(emptylist())
	   {
	    cout<<"\nERROR : the list is empty";
	    getch();
	    return;
	   }
	 p=head;
	 head=p->next;
	 delete p;
	}
void list::displist()
	{
	  nodeptr p;
	  p=head;
	  while(p!=0)
	    {
	     cout<<"   "<<p->info;
	     p=p->next;
	    }
	   getch();
	}
int main(void)
 {
  int ch,x;
  list obj;
  do
   {
    clrscr();
    cout<<"\n........PROGRAM'S MENU........\n\n";
    cout<<"\nPress 1 for creat a new list";
    cout<<"\nPress 2 for insert at middle of the list";
    cout<<"\nPress 3 for insert at the first positon of the list";
    cout<<"\nPress 4 for insert at the end position of the list";
    cout<<"\nPress 5 for delete a value in middle of the list";
    cout<<"\nPress 6 for delete the first valueof the list";
    cout<<"\nPress 7 for display the list";
    cout<<"\nPress 8 for exit";
    cout<<"\n\nENTER YOUR CHOISE :	";
    cin>>ch;
    switch(ch)
     {
      case 1:obj.creatlist();
	     break;
      case 2:cout<<"\nENTER VALUE FOR LIST:	";
	     cin>>x;
	     cout<<"\nEnter the value after which want to insrt:	";
	     int y;
	     cin>>y;
	     obj.insertmid(y,x);
	     break;
      case 3:cout<<"\nENTER VALUE FOR LIST:	";
	     cin>>x;
	     obj.insertbeg(x);
	     break;
      case 4:cout<<"\nENTER VALUE FOR LIST:	";
	     cin>>x;
	     obj.insertend(x);
	     break;
      case 5:cout<<"\nENTER VALUE FOR DELETE FROM MIDDLE OF THE LIST:	  ";
	     cin>>x;
	     obj.delmid(x);
	     break;
      case 6:obj.delfirst();
	     break;
      case 7:cout<<"\n\nDISPLAY OF YOUR LIST\n\n\n";
	     obj.displist();
	     break;
      case 8:exit(0);
     }
   }while(1);
 }//end of main