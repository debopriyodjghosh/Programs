#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct addnode;
struct subnode
{
	struct addnode *add1;
	struct subnode *add2;
}*head1;
class addnode
{
	int vertex,status;
	class addnode *link1;
	struct subnode *link2;
	public:
		void create(void);
		void display(void);
		void list(int );
		addnode *getnode(int x)
		{
			addnode *new1;
			new1=new(addnode);
			new1->vertex=x;
			new1->status=1;
			new1->link1=NULL;
			new1->link2=NULL;
			return(new1);
		}
		subnode *getnode1(addnode *ptr1)
		{
			subnode *new2;
			new2=new(subnode);
			new2->add1=ptr1;
			new2->add2=NULL;
			return(new2);
		}
		void status1(addnode *ptr);
}*head,*ptr;
struct queue
{
      addnode *a[50];
      int top;
}*sp;
void main()
{
	addnode a;
	int ch;
	sp->top=-1;
	clrscr();

	do
	{
		cout<<"\t\t M E N U:--> \n\n\t\t1.Create the Adjacency List of a Graph\n\t\t2.Display the List\n\t\t3.Exit\n\n";
		cout<<"\t\tEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				a.create();
				break;
			case 2:
				a.display();
				break;
			case 3:
				exit(0);
		}
	}while(1);
}
void addnode::create()
{
	int x,y;
	addnode *new1;
	cout<<"Enter the name of the vertex:(-999 to stop)\n";
	cin>>x;
	head=NULL;
	while(x!=-999)
	{
		new1=getnode(x);
		new1->link1=NULL;
		if(head==NULL)
			head=new1;
		else
		{
			ptr=head;
			while(ptr->link1!=NULL)
				ptr=ptr->link1;
			ptr->link1=new1;
		}
		cout<<"Enter the name of the vertex:(-999 to stop)\n";
		cin>>x;
	}
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<"Enter which vertices are connected with "<<ptr->vertex<<"(-999 to stop)\n";
		cin>>y;
		head1=NULL;
		while(y!=-999)
		{
			list(y);
			cout<<"Enter which vertices are connected with "<<ptr->vertex<<"(-999 to stop)\n";
			cin>>y;
		}
		ptr=ptr->link1;
	}
}
void addnode::list(int y)
{
	subnode *new2,*ptr2;
	addnode *ptr1;
	ptr1=head;
	while(y!=ptr1->vertex)
		ptr1=ptr1->link1;
	new2=getnode1(ptr1);
	new2->add2=NULL;
	if(head1==NULL)
		head1=new2;
	else
	{
		ptr2=head1;
		while(ptr2->add2!=NULL)
			ptr2=ptr2->add2;
		ptr2->add2=new2;
	}
	if(ptr->link2==NULL)
		ptr->link2=new2;
}
void addnode::display()
{
	addnode z;
	int x;
	subnode *ptr1;
	ptr=head;
	z.status1(ptr);
	ptr=head;
	cout<<"From where U want to search:\n";
	cin>>x;
	while(ptr->vertex!=x)
		ptr=ptr->link1;
	if(ptr->status==1)
	{
	    sp->top++;
	    sp->a[sp->top]=ptr;
	    ptr->status++;
	}
	while(sp->top!=-1)
	{
		ptr=sp->a[sp->top];
		sp->top--;
		if(ptr->status==2)
			cout<<ptr->vertex;
		ptr1=ptr->link2;
		while(ptr1!=NULL)
		{
			if(ptr1->add1->status==1)
			{
				sp->top++;
				sp->a[sp->top]=ptr1->add1;
				ptr1->add1->status++;
			}
			ptr1=ptr1->add2;
		}
	}
}
void addnode::status1(addnode *ptr)
{
	while(ptr!=NULL)
	{
		ptr->status=1;
		ptr=ptr->link1;
	}
}
