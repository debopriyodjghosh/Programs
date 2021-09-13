//programme for stack using linked list of a student data
#include<iostream.h>
#include<stdlib.h>
class snode
{
	int roll,age;
	snode *top;
	public:
			snode()
			{
				top=NULL;
			}
			snode * getnode(int r,int a)
			{
				snode *ptr;
				ptr=new snode;
				ptr->roll=r;
				ptr->age=a;
				ptr->top=NULL;
				return ptr;
			}
			void push();
			void pop();
			void display();
};
void snode::push()
{
	snode *p;
	int a,r;
	cout<<"\n Enter age and roll of student\n";
	cin>>a>>r;
	p=getnode(r,a);
	if (top==NULL)
		top=p;
	else
	{
		p->top=top;
		top=p;
	}
}
void snode::pop()
{
	snode *p;
	p=new snode;
	p=top;
	if (top==NULL)
	{
		cout<<"\n list not exists\n";
		return;
	}
	if (top->top==NULL)
		top=NULL;
	else
	{
		top=top->top;
		p->top=NULL;
	}
	cout<<"\n Popped age and roll of student is  ";
	cout<<p->age<<"  "<<p->roll<<" respectively\n";
	delete p;
}
void snode::display()
{
	snode *p;
	p=new snode;
	p=top;
	cout<<"\n List of Students is\n";
	for (int i=1;p!=NULL;i++)
	{
		cout<<"Student"<<i<<"\n";
		cout<<"\t ROLL  \n";
		cout<<"\t "<<p->roll<<"\n";
		cout<<"\t AGE  \n";
		cout<<"\t "<<p->age<<"\n";
		cout<<"\n";
		p=p->top;
	}
	cout<<"\n";
	delete p;
}
int main()
{
	snode stack;
	int ch;
	do
	{
		cout<<"\n1.push\n2.pop\n3.display\n4.exit\n";
		cout<<"\t Enter your chioce\t";
		cin>>ch;
		switch(ch)
		{
			case 1:
						stack.push();
						break;
			case 2:
						stack.pop();
						break;
			case 3:
						stack.display();
						break;
			case 4:
						exit(0);
						break;
			default: cout<<"\n Wrong argument\n";
		}
	}while(1);
	return 0;
}






