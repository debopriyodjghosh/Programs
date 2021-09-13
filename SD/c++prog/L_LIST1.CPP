 #include"iostream.h"
 #include<stdio.h>
 #include<conio.h>
  class node
   {
   private:
    int p;
    node *next;

   public:
    node(int n)
     {
     p=n;
     next=NULL;
     }
     node * getdata(int x)
      {
      node *pt;
      pt=new node(x);
      return(pt);
      }
	void creatlist(node *&head);
	void dis(node *&head);

   };
    void node::dis(node *&head)
	 {
	 node *ptr;
	 ptr=head;
	 cout<<"\n\nElements are....\n\n";
	 while(ptr!=NULL)
	  {
	  cout<<ptr->p<<"  ";
	  ptr=ptr->next;
	  }
	  getch();
	 }
    void node::creatlist(node *&head)
	{
	int x;
	node *ptr,*ptr1;
	cout<<"\nEnter values(-999 to stop)";
	cin>>x;
	do
	 {
	 ptr=getdata(x);
	 if(head==NULL)
	  {
	  head=ptr;
	  ptr1=head;
	  }
	 else
	  {
	  ptr1->next=ptr;
	  ptr1=ptr;
	  }
	  cout<<"\nEnter values(-999 to stop)";
	  cin>>x;
	 }  while(x!=-999) ;
	}


   void main()
    {
    clrscr();
    node *head,obj(4);
    head=NULL;
    obj.creatlist(head);
    obj.dis(head);
    }