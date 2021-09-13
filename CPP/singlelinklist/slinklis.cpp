#include<iostream.h>
#include<conio.h>
template<class T>
class linklist
{
private:
struct node
{
T data;
node *link;
}*root;
public:
linklist();
~linklist();
void addend(T);
void addbeg(T);
void addafter(int,T);
void delnode(int);
void delitem(T);
void sort();
void reverse();
void delduplicate();
void display();
void count();
};
template<class T>
linklist<T>::linklist()
{
root=NULL;
}
template<class T>
linklist<T>::~linklist()
{
struct node *t;
while(root!=NULL)
{
t=root;
root=root->link;
delete t;
}
cout << "\n OBJECT DISTROYED \n";
}
template<class T>
void linklist<T>::addend(T item)
{
struct node *q,*t;
if(root==NULL)
{
root= new node;
root->link=NULL;
root->data=item;
}
else
{
q=root;
while(q->link!=NULL)
q=q->link;
t=new node;
t->link=NULL;
t->data=item;
q->link=t;
}
//display();
}
template<class T>
void linklist<T>::addbeg(T item)
{
node *q;
q= new node;
q->link=root;
q->data=item;
root=q;
//display();
}
template<class T>
void linklist<T>::addafter(int p,T item)
{
if(root==NULL)
{
cout << "\n Linklist is empty...";
return;
}
node *q=root,*t;
for(int i=1;i<p;i++)
{
q=q->link;
if(q==NULL)
{
cout << "\n There are not enough element\n";
return;
}
}
t=new node;
t->data=item;
t->link=q->link;
q->link=t;
//display();
}
template<class T>
void linklist<T>::delnode(int p)
{
node *q,*t;
int i=1;
q=root;
if(p==1)
{
root=q->link;
delete q;
display();
return;
}
t=q;
while(q!=NULL)
{
if(i==p)
{
t->link=q->link;
delete q;
//display();
return;
}
t=q;
q=q->link;
i++;
}
cout << "\n Node not present";
}
template<class T>
void linklist<T>::delitem(T item)
{
node *q,*t;
q=root;
if(root->data==item)
{
root=q->link;
delete q;
//display();
return;
}
t=q;
q=q->link;
while(q->link !=NULL)
{
if(q->data==item)
{
t->link=q->link;
delete q;
//display();
return;
}
t=q;
q=q->link;
}
cout << "\n Item not present";
}
template<class T>
void linklist<T>::display()
{
delduplicate();
node *q;
cout<< "\n List:- \n" ;
for(q=root;q!=NULL;q=q->link)
cout << q->data << "\t";
}
template<class T>
void linklist<T>::count()
{
if(root==NULL)
{
cout << "\n LIST IS EMPTY\n";
return;
}
node *q;
int c=0;
for(q=root;q!=NULL;q=q->link)
c++;
cout << "\nThe nuber of nodes" << c;
}
template<class T>
void linklist<T>::reverse()
{
node *q,*r,*s;
q=root;
r=NULL;
while(q!=NULL)
{
s=r;
r=q;
q=q->link;
r->link=s;
}
root=r;
//display();
}
template<class T>
void linklist<T>::sort()
{
node *q,*t;
int i,j,temp;
q=root;
while(q!=NULL)
{
i=q->data;
t=root;
while(t!=NULL)
{
j=t->data;
if(i>j)
{
temp=q->data;
q->data=t->data;
t->data=temp;
}
t=t->link;
}
q=q->link;
}
//display();
}
template<class T>
void linklist<T>::delduplicate()
{
	if(root==NULL)
	{
		cout << "\nLIST is empty";
		return;
	}
	node *q=root,*t,*z,*x;
	while(q!=NULL)
	{
		x=q;
		t=q->link;
		while(t!=NULL)
		{
			if(q->data == t->data)
			{
				x->link = t->link;
				z=t;
				t=x;
				delete z;
			}
			if(x->link->link==NULL)
			{
				t=x->link;
				if(q->data==t->data)
				{
					x->link=NULL;
					z=t;
					t=x;
					delete z;
					break;
				}
				break;
			}
			if(q->data==x->link->data)
			{
				t=x->link;
				continue;
			}


				x=t;
				t=x->link;

		}
		q=q->link;
	}
}
void main()
{
linklist <int> ob;
int item,pos,ch;
do
{
cout << "\n Press any key for menu" ;
getch();
cout << "\n MENU DRIVEN SINGLE LINKLIST OPERATION:- \n" ;
cout << "\n Press 1 to addend\n";
cout << "\n Press 2 to addbeg\n";
cout << "\n Press 3 to addafter\n";
cout << "\n Press 4 to delnode\n";
cout << "\n Press 5 to delitem\n";
cout << "\n Press 6 to display\n";
cout << "\n Press 7 to count\n";
cout << "\n Press 8 to reverse list\n";
cout << "\n Press 9 to sort\n";
cout << "\n Press 0 to exit\n";
cout << "\n Enter your choice:- ";
cin >> ch;
if(ch < 0 || ch > 9)
{
cout << "\n\n OUT OF OPTIONS!MAKE SURE YOU YOUR INPUT IS CORRECT OR NOT\n\n";
continue;
}
switch(ch)
{
case 1:
cout << "\n Insert element for addend= ";
cin >> item;
ob.addend(item);
break;
case 2:
cout << "\n Insert element for addbeg= ";
cin >> item;
ob.addbeg(item);
break;
case 3:
cout << "\n enter position: ";
cin >> pos;
cout << "\n Enter element: ";
cin >> item;
ob.addafter(pos,item);
break;
case 4:
cout << "\n enter node to delete: ";
cin >> pos;
ob.delnode(pos);
break;
case 5:
cout << "\n Enter element to delete: ";
cin >> item;
ob.delitem(item);
break;
case 6:
cout << "\n list: ";
ob.display();
getch();
break;
case 7:
ob.count();
getch();
break;
case 8:
cout << "\n Reverse list: ";
ob.reverse();
break;
case 9:
cout << "\n Sorted list: ";
ob.sort();
break;
case 0:
cout << "\n\n PROGRAM TERMINATED \n\n.....";
break;
}
}while(ch!=0);
cout << "\n THE-END \n";
}


