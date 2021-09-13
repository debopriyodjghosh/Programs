/* DOUBLE LINKED LIST WITH TEMPLATE */
#include<iostream>
using namespace std;
#include<stdio.h>

template<class T>
class slink
{
	private: typedef struct node
	         {
	            T data;
	            struct node *next;
	            struct node *prev;
	         }NODE;
	NODE *p;
	public: slink()
	             {
	        	   p=NULL;
		}
		slink(T);
		void addend(T);
		void addbeg(T);
		void addafter(int,T);
		int count();
		void display();
		void del(T);
};
template<class T>slink<T>::slink(T ob)
{
	p=new NODE();
	p->data=ob;
	p->next=NULL;
	p->prev=NULL;
}
template<class T>void slink<T>::addend(T ob)
{
	NODE *temp,*r;
	if(p==NULL)
	{
	p=new NODE();
	p->data=ob;
	p->next=NULL;
	p->prev=NULL;
	}
	else
	{
		temp=p;
		while(temp->next!=NULL)
		temp=temp->next;
		r=new NODE();
		r->next=NULL;
		r->data=ob;
		r->prev=temp;
		temp->next=r;
	}
};
template<class T>void slink<T>::addbeg(T ob)
{
	NODE *temp;
	temp=new NODE();
	temp->data=ob;
	temp->next=p;
	temp->prev=NULL;
	temp->next->prev=temp;
	p=temp;
}
template<class T>void slink<T>::addafter(int pos,T ob)
{
	int i;
	NODE *temp,*r;
	if(pos==0)
	addbeg(ob);
	if(pos==count())
	addend(ob);
	temp=p;
	for(i=1;i<pos;i++)
	{
		if(temp==NULL)
		{
			cout<<"\n Invlid Position.";
			return;
		}
		temp=temp->next;
	}
	r=new NODE();
	r->data=ob;
	r->next=temp->next;
	r->next->prev=r;
	r->prev=temp;
	temp->next=r;
}
template<class T>int slink<T>::count()
{
	NODE *temp;
	int c=0;
	temp=p;
	while(temp)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
template<class T>void slink<T>::display()
{
	NODE *temp;
	temp=p;
	cout<<"\n\n";
	while(temp)
	{
		cout<<"\t"<<temp->data;
		temp=temp->next;
	}
}
template<class T>void slink<T>::del(T ob)
{
	NODE *temp,*r;
	temp=p;
	while(temp)
	{
		if(temp->data==ob)
		{
			if(temp==p)
			{
				p=p->next;
				p->prev=NULL;
		              }
			else
			{
			   r->next=temp->next;
			   r->next->prev=temp;
		               }
			delete(temp);
			return;
		    }
		else
		{
			r=temp;
			temp=temp->next;
		}
	}
	cout<<"\n Data not found.";
}
int main()
{
	slink<char>ob1;
	ob1.addend('a');
	ob1.addend('b');
	ob1.addend('c');
	ob1.display();
	ob1.addbeg('d');
	ob1.display();
	ob1.addafter(4,'e');
	ob1.display();
	ob1.addend('f');
	ob1.display();
	int c=ob1.count();
	cout<<"\n There are "<<c<<" nodes are available.";
	ob1.del('d');
	ob1.display();
	ob1.del('h');

	slink<int>ob2;
	ob2.addend(11);
	ob2.addend(22);
	ob2.addend(33);
	ob2.display();
	ob2.addbeg(44);
	ob2.addafter(3,55);
	ob2.addend(66);
	ob2.display();
	int n=ob2.count();
	cout<<"\n There are "<<n<<" nodes are available.";
	ob2.del(44);
	ob2.display();
	ob2.del(77);

	return 0;
}
