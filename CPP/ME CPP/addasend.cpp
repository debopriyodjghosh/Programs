//INSERT IN ASSENDING ORDER
#include<iostream.h>
#include<conio.h>
class linklist
{
	private:
				struct node
				{
					int data;
					struct node *link;
				}*root;
	public:
				linklist();
				~linklist();
				void add_assend(int);
				void display();
};
linklist::linklist()
{
	root=NULL;
}
linklist::~linklist()
{
	node *q;
	while(root)
	{
		q=root;
		root=root->link;
		delete q;
	}
}
void linklist::add_assend(int item)
{
	node *r,*t=root;
	r=new node;
	r->data=item;
	if(root==NULL || root->data > item)
	{
		root=r;
		root->link=t;
	}
	else
	{
		while(t->link!=NULL)
		{
			if(t->data <= item && t->link->data > item)
			{
				r->link=t->link;
				t->link=r;
				return;
			}
			t=t->link;
		}
		r->link=t->link;
		t->link=r;
	}
}
void linklist::display()
{
	node *q;
	q=root;
	cout << "ROOT->\t";
	while(q)
	{
		cout << q->data <<"\t";
		q=q->link;
	}
	cout << "->NULL";
}
void main()
{
	linklist ob;
	int ch,item;
	do
	{
		cout << "\n MENU \n";
		cout << "\n PRESS 1 TO INSERT AND DISPLAY \n";
		cout << "\n PRESS 0 TO EXIT \n";
		cout << "\n ENTER YOUR CHOICE= ";
		cin >> ch;
		switch(ch)
		{
			case 1:
					cout << "\n ENTER ITEM: ";
					cin >> item;
					ob.add_assend(item);
					ob.display();
					getch();
					break;
			case 0:
					cout << "\n PROGRAM TERMINATED \n";
					break;
		}
	}while(ch!=0);
}
