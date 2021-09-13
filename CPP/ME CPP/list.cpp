/*Write a progarm to merge two non-contiguous lists.Elements are inserted into the list dynamically*/


#include<iostream>
#include<conio.h>
using namespace std;
typedef struct node
{
	int data;
	struct node * link;
}NODE;
class list
{
	private:NODE *p;
	public:
		list()
		{
			p=NULL;
		}
		void add(int);
		void merge(list,list);
		void display();
};
void list::add(int item)
{
	NODE *temp,*r;
	if(p==NULL||p->data>item)
	{
		temp=new NODE;
		temp->data=item;
		temp->link=p;
		p=temp;
	}
	else
	{
		temp=p;
		while(temp!=NULL)
		{
			if(temp->data<=item  && (temp->link==NULL || temp->link->data>item))
			{
			r=new NODE;
			r->data=item;
			r->link=temp->link;
			temp->link=r;
			return;
		
			}
		temp=temp->link;
		}
	}
}
void list::merge(list t1,list t2)
{
	NODE *z;
	NODE *temp1;
	NODE *temp2;
	temp1=t1.p;
	temp2=t2.p;
	if(t1.p==NULL&&t2.p==NULL)
		return;
	while(temp1!=NULL && temp2!=NULL)
	{
		if(p==NULL)
		{
			p=new NODE;
			z=p;		
		}
		else
		{
			z->link=new NODE;
			z=z->link; 
		}
		if(temp1->data<temp2->data)
		{
			z->data<temp1->data;
			temp1=temp1->link;	
		}
		else if(temp1->data>temp2->data)
		{
			z->data=temp2->data;
			temp2=temp2->link;
		}
		else
		{
			z->data=temp1->data;
			temp1=temp1->link;
			temp2=temp2->link;	
		}	
	}
	while(temp1)
	{
			if(p==NULL)
			{
				p=new NODE;
				z=p;
			}
			else
			{
				z->link=new NODE;
				z=z->link;
			}
			z->data=temp1->data;
			temp1=temp1->link;	
		
	}
	while(temp2)
	{
			if(p==NULL)
			{
				p=new NODE;
				z=p;
			}
			else
			{
				z->link=new NODE;
				z=z->link;
			}
			z->data=temp2->data;
			temp2=temp2->link;	
		
			
	}	
	z->link=NULL;	
}
void list::display()
{
	NODE * temp=p;
	cout<<"\n\n";
	while(temp)
	{
		cout<<"  "<<temp->data;
		temp=temp->link;
	}
}
int main()
{
	list ob1,ob2,ob3;
	ob1.add(15);
	ob1.add(20);
	ob1.add(17);
	ob1.add(21);
	ob1.add(35);
	ob1.add(25);
	ob1.add(37);
	ob1.add(43);
	ob1.display();
	ob2.add(34);
	ob2.add(46);
	ob2.add(32);
	ob2.add(19);
	ob2.add(21);
	ob2.add(36);
	ob2.add(30);
	ob2.add(17);
	ob2.add(15);
	ob2.display();
	ob3.merge(ob1,ob2);
	ob3.display();
	return 0;	
}
