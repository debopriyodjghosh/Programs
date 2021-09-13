#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

template<class T>
class link
{
	public:
		T data;
		link <T> *next;
		link()
		{
			data=0;
			next=NULL;
		}
};


template<class T>
class Node
{
	private:
		link <T> *head;
	public:
		Node()
		{
			head=NULL;
		}
		Node <T> operator+(int n)
		{
			link <T> *n1,*p;
			n1=new link<T>;
			n1->data=n;
			n1->next=NULL;
			if(this->head==NULL)
				this->head=n1;
			else
			{
				p=this->head;
				while(p->next!=NULL)
					p=p->next;
				p->next=n1;
			}
			return *this;
		}
		Node <T> operator-(int n)
		{
			link <T> *p,*p1;
			p=p1=this->head;
			while(p1->data != n && p1!=NULL)
			{
				p=p1;
				p1=p1->next;
			}
			if(p1==NULL)
			{
				cout<<"\n DATA TO BE DELETED NOT FOUND IN THE LIST:";
				getch();
//				return NULL;
			}
			else if(p==p1)
			{
				this->head=this->head->next;
				delete p;
			}
			else
			{
				p->next=p1->next;
				delete p1;
			}
			return *this;
		}

		Node <T> *operator+(Node node)
		{
			link <T> *p1,*p2,*new1,*ptr;

			Node <T> *temp;
			temp=new Node<T>;
			T x;
			p1=this->head;
			p2=node.head;
			while(p1!=NULL && p2!=NULL)
			{
				x=p1->data+p2->data;
				new1=new link<T>;
				new1->data=x;
				new1->next=NULL;
				if(temp->head==NULL)
					temp->head=new1;
				else
				{
					ptr=temp->head;
					while(ptr->next!=NULL)
						ptr=ptr->next;
					ptr->next=new1;
				}


				p1=p1->next;
				p2=p2->next;
			}
			while(p1!=NULL)
			{
				x=p1->data;
				new1=new link<T>;
				new1->data=x;
				new1->next=NULL;
				if(temp->head==NULL)
					temp->head=new1;
				else
				{
					ptr=temp->head;
					while(ptr->next!=NULL)
						ptr=ptr->next;
					ptr->next=new1;
				}


				p1=p1->next;
			}
			while(p2!=NULL)
			{
				x=p2->data;
				new1=new link<T>;
				new1->data=x;
				new1->next=NULL;
				if(temp->head==NULL)
					temp->head=new1;
				else
				{
					ptr=temp->head;
					while(ptr->next!=NULL)
						ptr=ptr->next;
					ptr->next=new1;
				}


				p2=p2->next;
			}
			return temp;

		}



		void display()
		{
			link <T> *p;
			p=this->head;
			while(p!=NULL)
			{
				cout<<p->data<<"=>";
				p=p->next;
			}
			cout<<"NULL";
		}


};


void main()
{
	int n;
	char ans;
	Node <int> node1,node2,*node3;
	clrscr();
	cout<<"\n WANT TO ENTER NUMBERS IN FIRST LINKLIST?(Y/N) ";
	fflush(stdin);
	cin>>ans;
	while(ans=='y' || ans=='Y')
	{
		cout<<"\n ENTER THE NO:";
		cin>>n;
		node1=node1+n;
		cout<<"\n WANT TO ENTER MORE NUMBERS?(Y/N)";
		fflush(stdin);
		cin>>ans;
	}
	cout<<"\n FIRST LINKED LIST:\n";
	node1.display();
	getch();
	clrscr();
	cout<<"\n WANT TO DELETE NUMBERS FROM FIRST LINKLIST?(Y/N) ";
	fflush(stdin);
	cin>>ans;
	while(ans=='y' || ans=='Y')
	{
		cout<<"\n ENTER THE NO:";
		cin>>n;
		node1=node1-n;
		cout<<"\n WANT TO DELETE MORE NUMBERS?(Y/N)";
		fflush(stdin);
		cin>>ans;
	}
	clrscr();

	cout<<"\n WANT TO ENTER NUMBERS IN SECOND LINKLIST?(Y/N) ";
	fflush(stdin);
	cin>>ans;
	while(ans=='y' || ans=='Y')
	{
		cout<<"\n ENTER THE NO:";
		cin>>n;
		node2=node2+n;
		cout<<"\n WANT TO ENTER MORE NUMBERS?(Y/N)";
		fflush(stdin);
		cin>>ans;
	}
	cout<<"\n SECOND LINKED LIST:";
	node2.display();
	getch();
	clrscr();

	cout<<"\n WANT TO DELETE NUMBERS IN SECOND LINKLIST?(Y/N) ";
	fflush(stdin);
	cin>>ans;
	while(ans=='y' || ans=='Y')
	{
		cout<<"\n ENTER THE NO:";
		cin>>n;
		node2=node2-n;
		cout<<"\n WANT TO DELETE MORE NUMBERS?(Y/N)";
		fflush(stdin);
		cin>>ans;
	}
	clrscr();
	cout<<"\n\n FIRST LINKLIST MEMBERS ARE:\n";
	node1.display();
	cout<<"\n\n SECOND LINKLIST MEMBERS ARE:\n";
	node2.display();
	node3=node1+node2;
	cout<<"\n\n THIRD LINKLIST MEMBERS ARE:\n";
	node3->display();

	getch();
}
