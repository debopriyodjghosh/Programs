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
				friend void merge(mergelist,mergelist);
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
	t=new node;
	t->data=item;
	if(root==NULL)
	{
		t->link=NULL;
		root=t;
	}
	else
	{
		while(q!=NULL)
		{
			if(item==q->data)
			{
				cout << "\nAlready Exists,Operation Failed,Try With New Value\n\n";
				return;
			}
			q=q->link;
		}
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
void merge(mergelist l1,mergelist l2)
{
	if(l1.root==NULL && l2.root==NULL)
		{
			cout<<"\n List is empty";
			return;
		}
	node *t1,*t2;
	mergelist l3;
	while(l1.root!=NULL && l2.root!=NULL)
	{
		if(l3.root==NULL)
		{
			t1=new node;
			t2=new node;
			l3.root=t1;
			t1->data=l1.root->data;
			t1->link=t2;
			t2->data=l2.root->data;
			t2->link=NULL;
			l1.root=l1.root->link;
			l2.root=l2.root->link;
		}
		else
		{
			if(l1.root->data != l2.root->data)
			{
				t1=new node;
				t2->link=t1;
				t2=new node;
				t1->data=l1.root->data;
				t1->link=t2;
				t2->data=l2.root->data;
				t2->link=NULL;
				l1.root=l1.root->link;
				l2.root=l2.root->link;
			}
			else
			{
				t2=new node;
				t2->data=l2.root->data;
				t2->link=NULL;
				l1.root=l1.root->link;
				l2.root=l2.root->link;
			}
		}
	}
	while(l1.root!=NULL)
	{
		t1=new node;
		t2->link=t1;
		t1->data=l1.root->data;
		t1->link=NULL;
		t2=t1;
		l1.root=l1.root->link;
	}
	while(l2.root!=NULL)
	{
		t1=new node;
		t2->link=t1;
		t1->data=l2.root->data;
		t1->link=NULL;
		t2=t1;
		l2.root=l2.root->link;
	}
	l3.display();
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
	mergelist l1,l2;
	l1.add_assend(9);
	l1.add_assend(10);
l1.add_assend(11);
l1.add_assend(12);
l1.add_assend(19);
l1.add_assend(20);
l1.add_assend(20);
l2.add_assend(9);
l2.add_assend(5);
l2.add_assend(3);
l2.add_assend(4);
l2.add_assend(10);
l2.add_assend(100);
l2.add_assend(100);
l1.add_assend(109);
l1.add_assend(1);
l1.add_assend(7);
l1.add_assend(14);
l1.display();
l2.display();
merge(l1,l2);
}
