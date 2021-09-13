#include<iostream.h>
class dllist
{
	private:
			  struct node
			  {
				node *prev;
				int data;
				node *next;
			  }*head,*tail;
	public:
			 dllist();
			 ~dllist();
			 void addbeg(int);
			 void addend(int);
			 void addpos(int,int);
			 void delpos(int);
			 void delitem(int);
			 void show_count();
};
dllist::dllist()
{
	head=tail=NULL;
}
dllist::~dllist()
{
	node *t;
	while(head!=NULL)
	{
		t=head;
		head=head->next;
		delete t;
	}
	cout << "\n Object destroyed";
}
void dllist::addbeg(int item)
{
	node *temp;
	temp=new node;
	temp->data=item;
	if(head==NULL)
	{

		temp->prev=NULL;
		temp->next=NULL;
		head=tail=temp;
		return;
	}

		temp->prev=NULL;
		temp->next=head;
		head->prev=temp;
		head=temp;
}
void dllist::addpos(int pos,int item)
{
	if(head==NULL)
	{
		cout << "\nList is empty";
		return;
	}
	node *temp,*ptr,*ptr1;
	temp=new node;
	if(temp==NULL)
	{
		cout << "\nAccess denied,not enough space.clear some memory";
		return;
	}
	if(pos==1)
	{
		temp->data=item;
		temp->prev=NULL;
		temp->next=head;
		head->prev=temp;
		head=temp;
		return;
	}
	ptr=head;
	for(int i=1;i<pos;i++)
	{
		if(ptr->next==NULL && i==pos-1)
		{
			temp->data=item;
			temp->prev=tail;
			temp->next=NULL;
			tail->next=temp;
			tail=temp;
			return;
		}
		ptr1=ptr;
		ptr=ptr->next;
		if(ptr==NULL)
		{
			cout <<"\nPosition not found";
			return;
		}
	}
	temp->data=item;
	temp->prev=ptr->prev;
	temp->next=ptr;
	ptr->prev=temp;
	ptr1->next=temp;
}
void dllist::delpos(int pos)
{
	node *temp,*ptr,*ptr1;
	if(head==NULL)
	{
		cout<<"\nLinklist is empty";
		return;
	}
	if(pos==1)
	{
		temp=head;
		head=head->next;
		head->prev=NULL;
		cout<<temp->data<<"\n Deleted";
		delete temp;
		return;
	}
	temp=head;
	for(int i=1;i<pos;i++)
	{
		temp=temp->next;
		if(temp==NULL)
		{
			cout<<"\nnot enough element";
			return;
		}
	}
	if(temp==tail)
	{
		tail=tail->prev;
		tail->next=NULL;
		cout<<temp->data<<"deleted";
		delete temp;
	}
	else
	{
	temp -> prev -> next = temp -> next;
	temp -> next -> prev = temp -> prev;
	cout<<temp->data<<"deleted";
	delete temp;
	}
}
void dllist::delitem(int item)
{
	node *temp;
	if(head==NULL)
	{
		cout<< "\nNothing to delete";
		return;
	}
	if(item==head->data)
	{
		temp=head;
		head=head->next;
		head->prev=NULL;
		cout << temp->data << "Deleted";
		delete temp;
		return;
	}
	temp=head->next;
	while(temp!=tail)
	{
		if(temp->data==item)
		{
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
         //return;
		}
		temp=temp->next;
	}
	if(temp->data==item)
	{
		tail=tail->prev;
		tail->next=NULL;
		cout<<temp->data<<"DELETED";
		delete temp;
	}
	else
	cout<<item<<"\nnot present";
}
void dllist::show_count()
{
	node *temp,*ptr;
	int c=0;
	temp=head;
	ptr=tail;
	while(temp!=NULL)
	{
		c++;
		cout << temp->data << "\t";
		temp=temp->next;
	}
	cout << "\nCount= "<<c<<"\n";
	c=0;
			while(ptr!=NULL)
		{
		c++;
		cout << ptr->data << "\t";
		ptr=ptr->prev;
	}
	cout << "\nCount= "<<c<<"\n";
	}
void main()
{
	dllist ob;
	ob.addbeg(2);
		ob.show_count();
	ob.addbeg(4);
		ob.show_count();
	ob.addbeg(7);
	ob.show_count();
	ob.addpos(1,1);
	ob.addpos(3,9);
	ob.addpos(6,10);
	ob.show_count();
	ob.delpos(1);
	ob.show_count();
	ob.delpos(5);
	ob.show_count();
	ob.delpos(2);
		ob.show_count();
		ob.addbeg(2);
		ob.show_count();
	ob.addbeg(4);
		ob.show_count();
	ob.addbeg(7);
	ob.show_count();
	ob.addpos(1,1);
	ob.addpos(3,9);
	ob.delitem(5);
	ob.show_count();
	ob.delitem(1);
		ob.show_count();
	ob.delitem(2);
		ob.show_count();
	ob.delitem(2);
		ob.show_count();
	ob.delitem(4);
		ob.show_count();
}
