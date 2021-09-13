#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class poly
{
	private:
		struct polynode
		{
			float coeff;
			int exp;
			polynode *link;
		}*p;
	public:
		poly();
		void addend(float, int);
		void display();
		void mult(poly &, poly &);
		void add(float, int);
	      //	~poly();
};

poly::poly()
{
	p = NULL;
}

void poly::display()						//display function//
{
    polynode *q=p;
	while(q != NULL)
	{
		if(q->coeff < 0)
		{
			if(q->exp != 0)
				cout<<q->coeff<<"x^"<<q->exp;
			else
				cout<<" "<<q->coeff;
		}
		else
		{
			if(q->coeff == 0)
				break;
			else
			{
				if(q->exp != 0)
					cout<<" +"<<q->coeff<<"x^"<<q->exp;
				else
					cout<<" +"<<q->coeff;
			}
		}
		q = q->link;
	}
}

void poly::addend(float c, int e)
{
	polynode *temp;
	temp=p;
	if(temp == NULL)
	{
		temp = new polynode;
		p=temp;
	}
	else
	{
	       while(temp->link != NULL)
		 temp = temp->link;
		temp->link = new polynode;
		temp = temp->link;

	}
	temp->coeff=c;
	temp->exp=e;
	temp->link=NULL;
}

void poly::mult(poly &p1, poly &p2)
{
	polynode*temp1, *temp2;
	float f1, e1;
	temp1 = p1.p;
	temp2 = p2.p;
	if(temp1 == NULL && temp2 == NULL)
		return;
	if(temp1 == NULL)
		p=p2.p;
	else
	{
		if(temp2 == NULL)
			p = p1.p;
		else
		{
			while(temp1)
			{
				while(temp2)
				{
					f1 = temp1->coeff * temp2->coeff;
					e1 = temp1->exp + temp2->exp;
					temp2 = temp2->link;
					add(f1, e1);
				}
				temp2 = p2.p;
				temp1 = temp1->link ;
			}
		}
	}
}

void poly::add(float c, int e)
{
	polynode *r, *temp;
	temp = p;
	if(temp == NULL || e > temp->exp)
	{
		r = new polynode;
		r->coeff = c;
		r->exp = e;
		if(p == NULL)
		{
			r->link = NULL;
			p = r;
		}
		else
		{
			r->link = temp;
			p = r;
		}
	}
	else
	{
		while(temp)
		{
			if(temp->exp == e)
			{
				temp->coeff =temp->coeff+ c;
				return;
			}
			if(temp->exp > e && (temp->link->exp<e || temp->link == NULL))
			{
				r = new polynode;
				r->coeff = c;
				r->exp = e;
				r->link = temp->link;
				temp->link = r;
				return;
			}
			temp = temp->link;
		}
		r->link = temp->link;
		temp->link = r;
	}
}

void main()
{
	clrscr();
	poly p1, p2;
	p1.addend(3,5);
	p1.addend(2,4);
	p1.addend(1,2);
	p1.display();
	cout<<"\n";
	p2.addend(4,6);
	p2.addend(2,5);
	p2.addend(3,5);
	p2.display();
	cout<<"\n";
	poly p3;
	p3.mult(p1,p2);
	p3.display();
	cout<<"\n" ;
	getch();
}
