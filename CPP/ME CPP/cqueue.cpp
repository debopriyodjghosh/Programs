#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
class que
{
	int val[20];
	int front,rear;
	public:
		que()
		{
			front=rear=-1;
		}
		void ins();
		void del();
		void show();
};

void que::ins()
{
int n;
if((front==0) && (rear==19))
{
cout<<"\nOverflow\n";
rear=1;
return;
}
else if(front==-1)
{
front=rear=0;
cout<<"Enter the value: ";
cin>>n;
val[rear]=n;
}
else if(rear==19)
{
rear=0;
cout<<"Enter the value: ";
cin>>n;
val[rear]=n;
}
else
{
rear++;
cout<<"Enter the value: ";
cin>>n;
val[rear]=n;
}
}

void que::del()
{
if(front==-1)
{
cout<<"Underflow";
return;
}
cout<<"\nThe deleted element is : "<<val[front]<<"\n";
if(front==rear)
	front=rear=-1;
else if(front==19)
	front=0;
else
	front++;
}

void que::show()
{
int i;
if(front==-1)
{
cout<<"Queue is empty\n";
return;
}
if(rear>=front)
{
for(i=front;i<=rear;i++)
	cout<<"\n"<<val[i];
}
else
{
	for(i=front;i<19;i++)
		cout<<"\n"<<val[i];
	for(i=0;i<=rear;i++)
		cout<<"\n"<<val[i];
}
}

int main()
{
que q;
int k=0;
char c;
do
{
cout<<"\ni->insert\td->delete\tq->quit\n";
cout<<"Enter your choice: ";
do
{
c=getchar();
c=tolower(c);
}while(strchr("idq",c)==NULL);
cout<<"\nYour choice is : "<<c;
cout<<"\n";
switch(c)
{
case 'i':
q.ins();
cout<<"\nAfter inserting\n";
q.show();
break;
case 'd':
q.del();
cout<<"\nAfter deletion the queue is as follows\n";
q.show();
break;
case 'q':
k=1;
}
}while(!k);
}
