#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
	typedef struct node
		{
			struct node *prev;
			int data;
			struct node *next;
		}NODE;
	class dlist
		{
			private: NODE *root;
			public: dlist()
				{
					root=NULL;
				}
			void addend(int);
			void addbeg(int);
			void addaft(int,int);
			void display();
			int count();
			void del(int);
			void delbeg();
			void delend();
			void delaft(int);
		};
	void dlist :: addend(int item)
		{
			NODE *temp,*r;
			if(root==NULL)
				{
					root=new NODE;
					root->data=item;
					root->prev=NULL;
					root->next=NULL;
				}
			else
				{
					temp=root;
					while(temp->next!=NULL)
						temp=temp->next;
					r=new NODE;
					r->data=item;
					r->next=NULL;
					temp->next=r;
					r->prev=temp;
				}
		}
	void dlist :: addbeg(int item)
		{
			NODE *temp=new NODE;
			temp->data=item;
			temp->next=root;
			temp->prev=NULL;
			root->prev=temp;
			root=temp;
		}
	void dlist :: addaft(int item, int pos)
		{
			NODE *temp,*r;
			int i;
			temp=root;
			for(i=1;i<pos;i++)
				{
					if(temp==NULL)
						{
							cout<<"invalid pos";
							return;
						}
					temp=temp->next;
				}
			r=new NODE;
			r->data=item;
			r->next=temp->next;
			temp->next=r;
			r->prev=temp;
			r->next->prev=r;
		}
	void dlist :: display()
		{
			cout<<"\n";
			NODE *temp=root;
			while(temp!=NULL)
				{
					cout<<"->"<<temp->data;
					temp=temp->next;
				}
		}
	int dlist :: count()
		{
			int c=0;
			NODE *temp=root;
			while(temp!=NULL)
				{
					temp=temp->next;
					c++;
				}
			return c;
		}
	void dlist :: del(int item)
		{
			NODE *temp,*old;
			temp=root;
			while(temp!=NULL)
				{
					if(temp->data==item)
						{
							if(temp==root)
								{
									root=temp->next;
									root->prev=NULL;
									temp->next=NULL;
								}
							else
								{
									old->next=temp->next;
									old->next->prev=old;
								}
							delete(temp);
							return;
						}
					else
						{
							old=temp;
							temp=temp->next;
						}
				}
			cout<<"\n item not found";
		}
	void dlist :: delbeg()
		{
			NODE *temp=root;
			if(temp==NULL)
				cout<<"\n deletion impp";
			else
				{
					root=root->next;
					temp->next=NULL;
					root->prev=NULL;
					delete(temp);
				}
		}
	void dlist :: delend()
		{
			NODE *temp,*old;
			temp=root;
			if(temp==NULL)
				{
					cout<<"deletion immp";
					return;
				}
			while(temp->next!=NULL)
				{
					old=temp;
					temp=temp->next;
				}
			old->next=NULL;
			delete(temp);
		}
	void dlist :: delaft(int pos)
		{
			NODE *temp,*old;
			int i;
			temp=root;
			for(i=1;i<pos;i++)
				{
					if(temp==NULL)
						{
							cout<<"\n invalid position";
							return;
						}
					temp=temp->next;
				}
			old=temp->next;
			temp->next=old->next;
			old->next->prev=temp;
			delete(old);
		}
	void main()
		{
			dlist ob;
			int pos,ch,i;
			while(1)
				{
					clrscr();
					cout<<"\n menu for display dlist option";
					cout<<"\n1 for addend\n 2 for addbeg\n 3 for addaft\n 4 for del\n 5 for display\n6 for count\n 7 for delbeg\n 8 for delaft\n 9 for delend\o exit";
					cout<<"\n enter coice";
					cin>>ch;
					if(ch<0||ch>9)
						continue;
					switch(ch)
						{
							case 1: cout<<"\n enter item:";
										cin>>i;
										ob.addend(i);
										break;
							case 2: cout<<"\n enter item:";
										cin>>i;
										ob.addbeg(i);
										break;
							case 3:cout<<"\n enter item:";
										cin>>i;
										cout<<"\nenter position";
										cin>>pos;
										ob.addaft(i,pos);
										getch();
										break;
							case 4:cout<<"\n enter item:";
										cin>>i;
										ob.del(i);
										getch();
										break;
							case 5: cout<<"\n display";
										ob.display();
										getch();
										break;
							case 6:cout<<"\n no of node"<<ob.count();
										getch();
										break;
							case 7:ob.delbeg();
										getch();
										break;
							case 8:cout<<"\n enter position to delete";
										cin>>pos;
										ob.delaft(pos);
										getch();
										break;
							case 9: ob.delend();
										getch();
										break;
							case 0: cout<<"exiting";
										getch();
										exit(1);

						}
				}
	}
