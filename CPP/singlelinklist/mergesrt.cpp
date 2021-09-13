//MERGE TWO SINGLE LINKED LIST IN ASSENDING ORRDER
#include<iostream.h>
#include<conio.h>
class mergelist
{
	private:
				struct node
				{
					int data;
					node *link;
				}*root;
	public:
				mergelist();
				~mergelist();
				void add_assend(int);
				void merge(mergelist &,mergelist &);
				void display();
};
mergelist::mergelist()
{
	root=NULL;
}
mergelist::~mergelist()
{
	node *q;
	while(root!=NULL)
	{
		q=root;
		root=root->link;
		delete q;
	}
}
void mergelist:: add_assend(int item)
{
	node *q=root,*t;
	//t=new node;
	//t->data=item;
	if(root==NULL)
	{
		t=new node;
		t->data=item;
		t->link=NULL;
		root=t;
	}
	else
	{
		while(q->link!=NULL)
		{
			if(item==q->data)
			{
				cout << "\nalready exists,operation failed,try with new value\n\n";
				return;
			}
			q=q->link;
		}
		t=new node;
		t->data=item;
		q=root;
		if(item < q->data)
		{
			t->link=root;
			root=t;
			return;
		}
		while(q->link!=NULL)
		{
			if(q->data < item && item < q->link->data)
			{
				t->link=q->link;
				q->link=t;
				return;
			}
			q=q->link;
		}
		t->link=NULL;
		q->link=t;
	}
}
void mergelist::merge(mergelist &l1,mergelist &l2)
{
	node *z,*t;
	if(l1.root==NULL && l2.root==NULL)
		return;
	while(l1.root!=NULL && l2.root!=NULL)
	{
		if(root==NULL)
		{
			t=new node;
			t->link=NULL;
			root=z=t;
		}
		else
		{
			t=new node;
			t->link=NULL;
			z->link=t;
			z=z->link;
		}
		if(l1.root->data < l2.root->data)
		{
				t->data=l1.root->data;
				l1.root=l1.root->link;
		}
		else
		{
			if(l1.root->data > l2.root->data)
			{
				t->data=l2.root->data;
				l2.root=l2.root->link;
			}
			else
			{
				t->data=l2.root->data;
				l1.root=l1.root->link;
				l2.root=l2.root->link;
			}
		}
	}

	while(l1.root!=NULL)
	{
		t=new node;
		t->data=l1.root->data;
		t->link=z->link;
		z->link=t;
		z=z->link;
		l1.root=l1.root->link;
	}
	while(l2.root!=NULL)
	{
		t=new node;
		t->data=l2.root->data;
		t->link=z->link;
		z->link=t;
		z=z->link;
		l2.root=l2.root->link;
	}
}
void mergelist::display()
{
	node *q;
	q=root;
	while(q!=NULL)
	{
		cout << q->data << "\t";
		q=q->link;
	}
	cout << "\n";
}
void main()
{
	mergelist l1,l2,l3;
	l1.add_assend(9);
	l1.add_assend(10);
l1.add_assend(11);
l1.add_assend(12);
l1.add_assend(19);
l1.add_assend(20);
l2.add_assend(9);
l2.add_assend(5);
l2.add_assend(3);
l2.add_assend(4);
l2.add_assend(2);
l2.add_assend(10);
l2.add_assend(100);
l2.add_assend(19);
l2.add_assend(2);
l1.display();
l2.display();
l3.merge(l1,l2);
l3.display();
}

