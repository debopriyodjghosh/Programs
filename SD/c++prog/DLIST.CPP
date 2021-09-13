// Doubly linked list......

#include<iostream.h>
#include<conio.h>
#include<process.h>

template <class T>
class Dlist
{
	private:
				T x;
				Dlist *prev,*next;
	public:
				Dlist()
				{
					prev=NULL;
					next=NULL;
				}
				void insertion(Dlist<T> **f,Dlist<T> **r,T y);
				void deletion(Dlist<T> **f,Dlist<T> **r,T y);
				void display(Dlist<T> *f);
};

template<class T>
void Dlist<T>::insertion(Dlist<T> **f,Dlist<T> **r,T y)
{
	Dlist<T> *temp,*s,*p;
	temp=new Dlist;
	temp->x=y;
	if((*f)==NULL)
	{
		(*f)=temp;
		(*r)=temp;
	}
	else
	{
		s=(*f);
		while(s!=NULL)
		{
			if(s->x<temp->x)
			{
				p=s;
				s=s->next;
			}
			else
			{
				if((*f)==s)
				{
					temp->next=s;
					s->prev=temp;
					(*f)=temp;
				}
				else
				{
					p->next=temp;
					temp->prev=p;
					temp->next=s;
					s->prev=temp;
				}
				break;
			}
		}//while
	}
	if(s==NULL)
	{
		(*r)->next=temp;
		temp->prev=(*r);
		(*r)=(*r)->next;
	}
}
template<class T>
void Dlist<T>::deletion(Dlist<T> **f,Dlist<T> **r,T y)
{
	Dlist<T> *s,*p;
	s=(*f);
	p=s;
	while(s!=NULL)
	{
		if(s->x==y)
		{
			if((*f)==s)
			{
				(*f)=(*f)->next;
				(*f)->prev=NULL;
				delete(s);
			}
			else if((*r)==s)
			{
				(*r)=(*r)->prev;
				(*r)->next=NULL;
				delete(s);
			}
			else
			{
				p->next=s->next;
				s->next->prev=p;
				delete(s);
			}
			break;
		}//outer if
		else
		{
			p=s;
			s=s->next;
		}
	}//while
}

template <class T>
void Dlist<T>::display(Dlist<T> *f)
{
	Dlist *s;
	cout<<"\n\nElements are.....\n";
	for(s=f;s!=NULL;s=s->next)
		cout<<s->x<<"\t";
	cout<<endl;
	getch();
}

void main()
{
	Dlist<int>obj;
	Dlist<int>*f,*r;
	int ch,y;
	f=NULL;
   r=NULL;
	do
	{
		clrscr();
		cout<<"MENU\n";
		cout<<"1.Insert\n";
		cout<<"2.Delete\n";
		cout<<"3.Display\n";
		cout<<"4.Exit\n";
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
					cout<<"enter the element to be inserted: ";
					cin>>y;
					obj.insertion(&f,&r,y);
					break;
			case 2:
					cout<<"enter the element to be deleted: ";
					cin>>y;
					obj.deletion(&f,&r,y);
					break;
			case 3:
					obj.display(f);
					break;
			case 4:
					exit(0);
		}
	}while(1);
}
