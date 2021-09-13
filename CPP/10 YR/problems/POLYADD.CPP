#include<iostream>
#include<conio.h>
using namespace std;
template<class t>
class poly
{
	private:struct polynode
		{
			t coeff;
			int exp;
			polynode * link;
		}*root;
	public:poly();
		~poly();
		void insert(t, int);
		void display();
		void add(poly , poly );
};
template<class t>poly<t>::poly()
{
	root=NULL;
}
template<class t>void poly<t>::insert(t c,int e)
{
	polynode *r, *temp;
	temp=root;
	if(root==NULL || e>root->exp)
	{
		root=r=new polynode;
		root->coeff=c;
		root->exp=e;
		root->link=temp;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->exp == e)
			{
				temp->coeff+= c;
				return;
			}
			if(temp->exp >e && (temp->link->exp<e|| temp->link==NULL))
			{
				r=new polynode;
				r->coeff=c;
				r->exp=e;
				r->link=temp->link;
				temp->link=r;
				return;
			}
			temp=temp->link;
		}
		r->link=NULL;
		temp->link=r;
	}
}
template<class t>void poly<t>::display()
{
	polynode *temp=root;
	int f=0;
	cout<<endl;
	while(temp)
	{
		if(f!=0)
		{
			if(temp->coeff>0)
			{
				cout<<"+";
			}
			else
			{
				cout<<" ";
			}
		}
		if(temp->exp !=0)
		   cout<<temp->coeff<<" x^ "<<temp->exp;
		else
		   cout<<temp->coeff;
		temp= temp->link;
		f=1;

	}
}

template<class t> void poly<t>::add(poly l1, poly l2)
{
	polynode *z, *temp1, *temp2;
	if(l1.root==NULL && l2.root==NULL)
	{
		cout<<"\n Addition is not possible";
		return;
	}
	temp1=l1.root;
	temp2=l2.root;
	while(temp1!=NULL && temp2!=NULL)
	{
		if(root==NULL)
		{
			root= new polynode;
			z=root;
		}
		else
		{
			z->link=new polynode;
			z=z->link;
		}
		if(temp1->exp<temp2->exp)
		{
			z->coeff=temp2->coeff;
			z->exp=temp2->exp;
			temp2= temp2->link;
		}
		else
		{
			if(temp1->exp>temp2->exp)
			{
				z->coeff= temp1->coeff;
				z->exp=temp1->exp;
				temp1=temp1->link;
			}
			else
			{
				if(temp1->exp==temp2->exp)
				{
					z->coeff=temp1->coeff + temp2->coeff;
					z->exp=temp1->exp;
					temp1= temp1->link;
					temp2= temp2->link;
				}
			}
		}
	}
	while(temp1!=NULL)
	{
		if(root==NULL)
		{
			root=new polynode;
			z=root;
		}
		else
		{
			z->link= new polynode;
			z=z->link;
		}
		z->coeff= temp1->coeff;
		z->exp=temp1->exp;
		temp1= temp1->link;
	}
	while(temp2!=NULL)
	{
		if(root==NULL)
		{
			root=new polynode;
			z=root;
		}
		else
		{
			z->link=new polynode;
			z=z->link;
		}
		z->coeff=temp2->coeff;
		z->exp=temp2->exp;
		temp2= temp2->link;
	}
	z->link=NULL;

}
template<class t>poly<t>::~poly()
{
	polynode *temp;
	while(root!=NULL)
	{
		temp=root->link;
		delete root;
		root=temp;
	}
	cout<<"\n Object destroyed";
}
 main()
{
	poly<int>ob1;
	poly<int>ob2;
	poly<int>ob3;
	//clrscr();
	ob1.insert(15,5);
	ob1.insert(20, 4);
	ob1.insert(8,2);
	ob1.insert(7,0);
	cout<<"\n First polynomial";
	ob1.display();
	ob2.insert(11,5);
	ob2.insert(6,3);
	ob2.insert(4,2);
	ob2.insert(3,1);
	cout<<"\n Second polynomial";
	ob2.display();
	ob3.add(ob1, ob2);
	cout<<"\n Resultent polynomial";
	ob3.display();
	getch();
}



