#include<iostream>
using namespace std;

template<class T>

class slink
{
	private:
		        typedef struct node
                {
	               T data;
	               struct node *link;
                }NODE;
    
        		NODE *p;
	public:
		slink()
		{
			p=NULL;
		}
		slink(T);
		void addend(T);
		void addbig(T);
		void addafter(int,T);
		void display();
		int count();
		void del(T);
};

template<class T>slink<T>::slink(T k)
{
	p=new NODE();
	p->data=k;
	p->link=NULL;
}

template<class T>void slink<T>::addend(T k)
{
	NODE *temp;
	if(p==NULL)
	{
		p=new NODE();
		p->data=k;
		p->link=NULL;
	}
	else
	{
		temp=p;
		while(temp->link!=NULL)
			temp=temp->link;
		temp->link=new NODE();
		temp=temp->link;
		temp->data=k;
		temp->link=NULL;
	}
}
template<class T>void slink<T> :: display()
{
	NODE *temp=p;
	cout<<"\n";
	while(temp)
	{
		cout<<"\t"<<temp->data;
		temp=temp->link;
	}
}

template<class T>void slink<T>::addbig(T k)
{
	NODE *temp;
	temp=new NODE();
	temp->data=k;
	temp->link=p;
	p=temp;
}

template<class T>void slink<T>::addafter(int pos,T k)
{
	int i;
	NODE * temp,*r;
	if(pos==0)
		addbig(k);
	temp=p;
	for(i=0;i<pos;i++)
	{
		if(temp==NULL)
		{
			cout<<"Invalid Position";
			return;
		}
		temp=temp->link;
	}
	r=new NODE();
	r->data=k;
	r->link=temp->link;
	temp->link=r;
}

template<class T>void slink<T>::del(T k)
{
	NODE *temp,*r;
	temp=p;
	while(temp)
	{
		if(temp->data==k)
		{
			if(temp==p)
				p=p->link;
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
	cout<<"\nData not found!!";
}

template<class T>int slink<T>::count()
{
	int c=0;
	NODE *temp=p;
	while(temp)
	{
		c++;
		temp=temp->link;
	}
	return c;
}

main()
{
	slink<int> ob;
	int c;
	ob.addend(15);
	ob.addend(17);
	ob.addend(19);
	ob.display();
	c=ob.count();
	cout<<"\nThere are "<<c<<" nodes available";
	ob.addbig(6);
	ob.addbig(8);
	ob.display();
    c=ob.count();
	cout<<"\nThere are "<<c<<" nodes available";
    ob.addafter(3,20);
	ob.addafter(4,25);
	ob.display();
	c=ob.count();
	cout<<"\nThere are "<<c<<" nodes available";
    ob.del(17);
	ob.display();
	c=ob.count();
	cout<<"\nThere are "<<c<<" nodes available";
    ob.del(99);	
    slink<char> ob1;
	
	ob1.addend('A');
	ob1.addend('B');
	ob1.addend('C');
	ob1.display();
	c=ob1.count();
	cout<<"\nThere are "<<c<<" nodes available";
	ob1.addbig('D');
	ob1.addbig('E');
	ob1.display();
    c=ob1.count();
	cout<<"\nThere are "<<c<<" nodes available";
    ob1.addafter(3,'R');
	ob1.addafter(4,'L');
	ob1.display();
	c=ob1.count();
	cout<<"\nThere are "<<c<<" nodes available";
    ob1.del('R');
	ob1.display();
	c=ob1.count();
	cout<<"\nThere are "<<c<<" nodes available";
    ob1.del('Y');	
}
