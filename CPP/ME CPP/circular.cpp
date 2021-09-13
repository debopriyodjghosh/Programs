#include<iostream.h>
class linklist
{
	private:
				struct node
				{
					int data;
					node *link;
				}*root;
	public:
				linklist();
				~linklist();
				void addbeg(int);
				void addend(int);
				void delete_item(int);
				void display_count();
};
linklist::linklist()
{
	root=NULL;
}
linklist::~linklist()
{
	node *q,*image=root;
	while(root->link!=image)
	{
		q=root;
		root=root->link;
		delete q;
	}
	//delete root;
	q=root;
	delete q;
}
void linklist::addbeg(int item)
{
	node *q,*t,*image;
	t=new node;
	t->data=item;
	if(root==NULL)
	{
		t->link=t;
		root=t;
	}
	else
	{
		t->link=root;
		image=root;
		root=t;
		q=root->link;
		while(q->link!=image)
			q=q->link;
		q->link=root;
	}
}
void linklist::addend(int item)
{
	node *q,*t;
	t=new node;
	t->data=item;
	if(root==NULL)
	{
		t->link=t;
		root=t;
	}
	else
	{
		q=root;
		while(q->link!=root)
		{
			q=q->link;
		}
		q->link=t;
		t->link=root;
	}
}
void linklist::display_count()
{
	int c=1;
	node *q;
	q=root;
	cout << "ROOT-> ";
	while(q->link!=root)
	{
		cout << q->data << "\t";
		q=q->link;
		c++;
	}
	cout << q->data << "-> NULL";
	cout << "\nNUMBER OF NODES= " << c << "\n";
}
void linklist::delete_item(int item)
{
	if(root==NULL)
	{
		cout << "\nLIST IS EMPTY\n";
		return;
	}
	node *q,*image,*x;
	if(root->data==item)
	{
		image=q=root;
		cout << q->data << " DELETED ";
		root=root->link;
		delete q;
		q=root;
		while(q->link!=image)
			q=q->link;
		q->link=root;
		return;
	}
	x=q=root->link;
	while(q!=root)
	{
		if(q->data==item)
		{
			image=q;
			x->link=q->link;
			delete image;
			return;
		}
		x=q;
		q=q->link;
	}
	cout << "\n ITEM NOT FOUND \n";
}
void main()
{
	linklist ob;
	ob.addbeg(5);
	ob.addbeg(6);
	ob.addbeg(1);
	ob.addbeg(2);
	ob.addbeg(3);
	ob.addbeg(9);
	ob.display_count();
	ob.addend(10);
	ob.addend(7);
	ob.addend(8);
	ob.addend(4);
	ob.display_count();
	ob.delete_item(9);
	ob.display_count();
	ob.delete_item(5);
	ob.delete_item(6);
	ob.display_count();
	ob.delete_item(4);
	ob.display_count();
}
