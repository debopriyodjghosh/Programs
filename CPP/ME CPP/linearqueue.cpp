/* LINEAR QUEUE USING ARRAY */
#include<iostream>
using namespace std;
#define MAX 10
class lq
{
	private:
		int front,rear,q[MAX];
	public:
		lq()
		{
			front=rear=-1;
		}
		void input(int);
		int del();
		void display();
};
void lq::input(int k)
{
	if(rear==MAX-1)
	{
		cout<<"\nQueue is full!!";
		return;
	}
	q[++rear]=k;
	if(front==-1)
	   front=0;
}
int lq::del()
{
	int temp;
	if(front==-1)
	{
		cout<<"\nQueue is empty!!!";
		return 0;
	}
	temp=q[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
		front++;
		return temp;
}
void lq::display()
{
	if(front==-1 && rear==-1)
	{
		cout<<"\nQueue is empty!!!";
		return;
	}
	cout<<"\nThe queue is : ";
	for(int i=0;i<=rear;i++)
	   cout<<q[i]<<"\t";
}
int main()
{
	lq ob;
	int ch,a;
	do
	{
		cout<<"\n\tLINEAR QUEUE OPERATION";
		cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		if(ch<1 || ch>3 )
		   continue;
		switch(ch)
		{
			case 1:
				
				cout<<"\nEnter a data to insert : ";
				cin>>a;
				ob.input(a);
				break;
			case 2:
				a=ob.del();
				cout<<"\nItem deleted : "<<a;
				break;
			case 3:
				ob.display();
				break;
			case 4:
				cout<<"\nExit";
		}
	}while(ch != 4);
	
	return 0;
}
