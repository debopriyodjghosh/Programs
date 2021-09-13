#include<iostream>
using namespace std;

class que
{
	int val[5];
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
    if((front==0 && rear==4)||(front==rear+1))
    {
        cout<<"\nOverflow\n";
        return;
    }
else if(front==-1)
    {
        front=rear=0;
        cout<<"Enter the value: ";
        cin>>n;
        val[rear]=n;
    }
else if(rear==4)
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
else if(front==4)
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
        for(i=front;i<=4;i++)
            cout<<"\n"<<val[i];
        for(i=0;i<=rear;i++)
            cout<<"\n"<<val[i];
    }
}

int main()
{
que q;
int c;
cout<<"\toperation on circular queue\n";
do
{
    cout<<"\n1 ->insert\t2 ->delete\t3 ->quit\n";
    cout<<"Enter your choice: ";
    cin>>c;
    cout<<"\n";
switch(c)
{
case 1:
            q.ins();
            cout<<"\nAfter inserting\n";
            q.show();
            break;
case 2:
            q.del();
            cout<<"\nAfter deletion the queue is as follows\n";
            q.show();
            break;
case 3:
            break;
}
}while(c!=3);
}

