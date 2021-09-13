#include<iostream.h>
template<class T>
class poly
{
	private: struct polynode
	{
		T coeff;
		int pow;
		polynode *link;
	}*p;
	public:
			poly();
			~poly();
			void polyaddend(T,int);
			void polyadd(poly,poly);
			void display();
};
template<class T>
poly<T>::poly()
{
	p=NULL;
}
template<class T>
poly<T>::~poly()
{
	polynode *q;
	while(p!=NULL)
	{
		q=p;
	p=p->link;
	delete q;
	}
}
template<class T>
void poly<T>::polyaddend(T c,int pw)
{
	polynode *q=p,*ptr;
	ptr=new polynode;
	ptr->coeff=c;
	ptr->pow=pw;
	if(p==NULL || p->pow <pw)
	{
		ptr->link=p;
		p=ptr;
		return;
	}
	while(q!=NULL)
	{
		if(q->pow==pw)
		{
			cout << "\n Access Denied,allready present";
			return;
		}
		q=q->link;
	}
	q=p;
	while(q->link!=NULL)
	{
		if(q->pow > pw && q->link->pow <pw)
		{
			ptr->link=q->link;
			q->link=ptr;
			return;
		}
		q=q->link;
	}
	q->link=ptr;
	ptr->link=NULL;
}
template<class T>
void poly<T>::polyadd(poly l1,poly l2)
{
	polynode *z;
	if(l1.p==NULL && l2.p==NULL)
		return;
	polynode *temp1,*temp2;
	temp1=l1.p;
	temp2=l2.p;
	while(temp1!=NULL && temp2!=NULL)
	{
		if(p==NULL)
		{
			p=new polynode;
			z=p;
		}
		else
		{
			z->link=new polynode;
			z=z->link;
		}
		if(temp1->pow < temp2->pow)
		{
			z->coeff=temp2->coeff;
			z->pow=temp2->pow;
			temp2=temp2->link;
		}
		else
		{
			if(temp1->pow > temp2->pow)
			{
				z->coeff=temp1->coeff;
				z->pow=temp1->pow;
				temp1=temp1->link;
			}
			else
			{
				z->coeff=temp1->coeff+temp2->coeff;
				z->pow=temp1->pow;
				temp1=temp1->link;
				temp2=temp2->link;
			}
		}
	}
	while(temp1!=NULL)
	{
		if(p==NULL)
		{
			p=new polynode;
			z=p;
		}
		else
		{
			z->link=new polynode;
			z=z->link;
		}
		z->coeff=temp1->coeff;
		z->pow=temp1->pow;
		temp1=temp1->link;
	}
	while(temp2!=NULL)
	{
		if(p==NULL)
		{
			p=new polynode;
			z=p;
		}
		else
		{
			z->link=new polynode;
			z=z->link;
		}
		z->coeff=temp2->coeff;
		z->pow=temp2->pow;
		temp2=temp2->link;
	}
	z->link=NULL;
}
template<class T>
void poly<T>::display()
{
	polynode *temp=p;
	if(p==NULL)
	{
		cout<<"\n NOTHING TO PRINT";
		return;
	}
	while(temp!=NULL)
	{
		if(temp->coeff > 0)
			cout << "+";
		else
			cout << "-";
		if(temp->pow!=0)
			cout << temp->coeff << "X^" << temp->pow;
		else
			cout << temp->coeff ;
		temp=temp->link;
	}
	cout<<"\n";
}
void main()
{
	int pw,op,c1;
	float c2;
	char ch;
	poly<int>ob1;
	poly<int>ob2;
	poly<int>ob3;
	poly<float>ob4;
	poly<float>ob5;
	poly<float>ob6;
	do
	{
		cout << "\n Enter I for integer polynomial addition operation";
		cout << "\n Enter F for float polynomial addition operation";
				cout << "\n Enter E for exit";
		cout << "\nEnter your choice=";
		cin >> ch;
		if(ch!='I' && ch!='F' && ch!='E')
		{
			cout<<"\n Wrong choice enter ";
			continue;
		}
		else
			switch(ch)
			{
				case 'I':
							cout<<"\nYour options for int operation";
							cout <<"\n press 1 for first poly";
							cout <<"\n press 2 for second poly";
							cout <<"\n press 3 for addition";
							cout << "\n press 4 for display";
							cout<<"\nchoice:";
							cin >> op;
							switch(op)
							{
								case 1:
										cout << "\n Enter coeffcient=";
										cin >> c1;
										cout << "\n Enter power=";
										cin >> pw;
										ob1.polyaddend(c1,pw);
										break;
								case 2:
										cout << "\n Enter coeffcient=";
										cin >> c1;
										cout << "\n Enter power=";
										cin >> pw;
										ob2.polyaddend(c1,pw);
										break;
								case 3:
										ob3.polyadd(ob1,ob2);
										break;
								case 4:
										ob1.display();
										ob2.display();
										ob3.display();
										break;
							}
							break;
				case 'F':
							cout<<"\nYour options for float operation";
							cout <<"\n press 1 for first poly";
							cout <<"\n press 2 for second poly";
							cout <<"\n press 3 for addition";
							cout << "\n press 4 for display";
							cout<<"\nchoice:";
							cin >> op;
							switch(op)
							{
								case 1:
										cout << "\n Enter coeffcient=";
										cin >> c2;
										cout << "\n Enter power=";
										cin >> pw;
										ob4.polyaddend(c2,pw);
										break;
								case 2:
										cout << "\n Enter coeffcient=";
										cin >> c2;
										cout << "\n Enter power=";
										cin >> pw;
										ob5.polyaddend(c2,pw);
										break;
								case 3:
										ob6.polyadd(ob4,ob5);
										break;
								case 4:
										ob4.display();
										ob5.display();
										ob6.display();
										break;
							}
							break;
				case 'E':
							cout << "\nprogram ends" ;
							break;
			}
	}while(ch!='E');
}
