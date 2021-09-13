/* CIRCULAR LINKED LIST WITH TEMPLATE */
#include<iostream>
using namespace std;
#include<stdio.h>

template<class T>class clink
{
	private: typedef struct node
	              {
	         	  T data;
	         	  struct node *link;
	              }NODE;
	NODE *p;
	public: clink()
	            {
	        	p=NULL;
		}
		clink(T);
		void addend(T);
		void addbeg(T);
		void addafter(int,T);
		int count();
		void display();
		void del(T);
};
template<class T>clink<T>::clink(T ob)
{
	p=new NODE();
	p->data=ob;
	p->link=p;
}
template<class T>void clink<T>::addend(T ob)
{
	NODE *temp;
	if(p==NULL)
	{
	temp=new NODE();
	temp->data=ob;
	temp->link=temp;
	p=temp;
	}
	else
	{
		temp=p;
		while(temp->link!=p)
		temp=temp->link;
		temp->link=new NODE();
		temp=temp->link;
		temp->data=ob;
		temp->link=p;
	}
}
template<class T>void clink<T>::addbeg(T ob)
{
	NODE *temp,*r;
	r=p;
	while(r->link!=p)
	  r=r->link;
	temp=new NODE();
	temp->data=ob;
	temp->link=p;
	p=temp;
	r->link=p;
}
template<class T>void clink<T>::addafter(int pos,T ob)
{
	int i;
	NODE *temp,*r;
	if(pos==0)
	addbeg(ob);
	temp=p;
	for(i=1;i<pos;i++)
	{
		if(temp->link==p)
		{
			cout<<"\n Invlid Position.";
			return;
		}
		temp=temp->link;
	}
	r=new NODE();
	r->data=ob;
	r->link=temp->link;
	temp->link=r;
}
template<class T>int clink<T>::count()
{
	NODE *temp;
	int c=0;
	temp=p;
	if(temp==NULL)
	 return c;
	while(temp->link!=p)
	{
		c++;
		temp=temp->link;
	}
	c++;
	return c;
}
template<class T>void clink<T>::display()
{
	NODE *temp;
	temp=p;
	cout<<"\n\n";
	while(temp->link!=p)
	{
		cout<<"\t"<<temp->data;
		temp=temp->link;
	}
	cout<<"\t"<<temp->data;
}
template<class T>void clink<T>::del(T ob)
{
	NODE *temp,*r,*k;
	temp=p;
	while(temp->link!=p)
	{
		if(temp->data==ob)
		{
			if(temp==p)
			{
		                 k=p;
			  while(k->link!=p)
			    k=k->link;
			  p=p->link;
			  k->link=p;

	    	}
			else
			r->link=temp->link;
			delete(temp);
			return;
		}
		else
		{
			r=temp;
			temp=temp->link;
		}
	}
	cout<<"\n Data not found.";
}
int main()
{
	clink<char>ob1;
	ob1.addend('a');
	ob1.addend('b');
	ob1.addend('c');
	ob1.display();
	ob1.addbeg('d');
	ob1.addafter(4,'e');
	ob1.addend('f');
	ob1.display();
	int c=ob1.count();
	cout<<"\n There are "<<c<<" nodes are available.";
	ob1.del('d');
	ob1.display();
	ob1.del('h');

	clink<int>ob2;
	ob2.addend(11);
	ob2.addend(22);
	ob2.addend(33);
	ob2.display();
	ob2.addbeg(44);
	ob2.addafter(4,55);
	ob2.addend(66);
	ob2.display();
	int n=ob2.count();
	cout<<"\n There are "<<n<<" nodes are available.";
	ob2.del(44);
	ob2.display();
	ob2.del(77);

	return 0;
}
