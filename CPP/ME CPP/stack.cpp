#include<iostream>
using namespace std;
class stack
{
	int val[20];
	int top,flag;
	public:
		stack()
		{
			top=-1;
			flag=0;
		}
		void push();
		void pop();
		void show();
};

void stack::push()
{
int n;
cout<<"Enter the value: ";
cin>>n;
if(top==19)
flag=0;
else
{
flag=1;
++top;
val[top]=n;
}
}

void stack::pop()
{
if(top==-1)
flag=0;
else
{
flag=1;
cout<<"\nThe deleted element is : "<<val[top]<<"\n";
--top;
}
}

void stack::show()
{
int i;
if(top==-1)
{
cout<<"stack is empty\n";
return;
}
for(i=top;i>=0;i--)
	cout<<"\n"<<val[i];
}

int main()
{
stack q;
int c;
do
{
    cout<<"\nOperation on stack\n";
    cout<<"\n1->insert\t2->delete\t3->quit\n";
    cout<<"Enter your choice: ";
    cin>>c;
switch(c)
{
    case 1:
                q.push();
                cout<<"\nAfter inserting\n";
                q.show();
                break;
    case 2:
                q.pop();
                cout<<"\nAfter deletion the queue is as follows\n";
                q.show();
                break;
    case 3:
                break;
}
}while(c!=3);
}
