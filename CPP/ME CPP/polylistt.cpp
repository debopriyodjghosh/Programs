//programme for ploynomial addition using linked list 
#include<iostream>
using namespace std;
template <class T>
class pnode
{
	T coeff;
	int power;
	pnode<T> *next;
	public:
			pnode<T>()
			{
				next=NULL;
			}
			
			pnode<T>* getnode(T c,int p)
			{
				pnode<T>* ptr=new pnode<T>;
				ptr->coeff=c;
				ptr->power=p;
				ptr->next=NULL;
				return ptr;
			}
			void createlist();
			void display(char a);
		    pnode<T> operator +(pnode<T> n);
};
template <class T>
void pnode<T>::createlist()
{
	T c;
	int po;
	char ch;
	pnode<T> *p,*q;
	do
	{	
		cout<<"\nEnter Coefficient And Power part\n";
		cin.sync();
		cin>>c>>po;
		p=getnode(c,po);
		if (next==NULL)
			next=p;
		else
			q->next=p;	
		q=p;
		cout<<"\n Do you Want to continue?(y/n)\n";
		cin.sync();
		cin>>ch;
			
	}while(ch=='Y'||ch=='y'); 
}
template <class T>
void pnode<T>::display(char a)
{
	pnode<T> *ptr;
	ptr=next;
	cout<<"\n Expression is \n";
	while(ptr!=NULL)
	{
		if (ptr->power==0)
		{
			if (ptr->coeff<0)
				cout<<" - "<<ptr->coeff<<" ";
			else
				cout<<" + "<<ptr->coeff<<" ";
		}
		else
		{
			if (ptr->coeff<0)
				cout<<" - "<<(-1)*ptr->coeff<<" "<<a<<"^"<<ptr->power;
			else
				cout<<" + "<<ptr->coeff<<" "<<a<<"^"<<ptr->power;
		}
		ptr=ptr->next;
	}
	cout<<"\n";
}
template <class T>
pnode<T> pnode<T>::operator +(pnode<T> n)
{
	pnode<T> tmp;
	pnode<T> *p=next;
	pnode<T> *q=n.next;
	pnode<T> *tp,*tp2;
	while(p!=NULL && q!=NULL )
	{
		if (p->power==q->power)
			{
				T t=p->coeff+q->coeff;
	
				tp=getnode(t,p->power);
				if (tmp.next==NULL)
					tmp.next=tp;
				else
					tp2->next=tp;	
				tp2=tp;
				p=p->next;
				q=q->next;
			}
		else
			{
				
				tp=getnode(p->coeff,p->power);
				if (tmp.next==NULL)
					tmp.next=tp;
				else
					tp2->next=tp;	
				tp2=tp;
				p=p->next;
				
				tp=getnode(q->coeff,q->power);
				if (tmp.next==NULL)
					tmp.next=tp;
				else
					tp2->next=tp;	
				tp2=tp;
				q=q->next;
			}		
	}
	if(p!=NULL)
		q=p;
	while(q!=NULL)
	{
		
		tp=getnode(q->coeff,q->power);
		if (tmp.next==NULL)
			tmp.next=tp;
		else
			tp2->next=tp;	
		tp2=tp;
		q=q->next;	
	}		
	return tmp;	
	
}





int main()
{
	pnode<int> m,n;
	cout<<"\n First Expression\n";
	m.createlist();
	cout<<"\n Second Expression\n";
	n.createlist();
	cout<<"\n Enter Base\n";
	char a;
	cin.sync();
	cin>>a;
	pnode<int> g=m+n;
	cout<<"\n First \n";
	m.display(a);
	cout<<"\n Second \n";
	n.display(a);
	cout<<"\n Total  \n";
	g.display(a);
	return 0;
	
	
	

}
