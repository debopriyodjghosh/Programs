#include<iostream>
using namespace std;
#define SIZE 5
class cq
{
	int front,rear,arr[SIZE];;
	public:
	cq()
	{
		front=-1;
		rear=-1;
	}
	void insert(int);
	int del();
	void display();
	bool isEmpty();
	bool isFull();
};
void cq::insert(int data)
{
	if(isFull())
		cout<<"\n-----queue is full----";
	else
	{
		if(rear==-1 && front ==-1)
		{

			front=0;
		}
		rear=(rear+1)%SIZE;
		cout<<"rear="<<rear;
		arr[rear]=data;
	}

}
int cq::del()
{
	int temp;
	if(isEmpty())
	{
		cout<<"\n----queue is empty-----";
		return -9999999;
	}
	else
	{
		cout<<"front="<<front;
		temp=arr[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
			front=(front+1)%SIZE;
		return temp;
	}

}
void cq::display()
{
	cout<<"front is="<<front<<"rear is="<<rear;
	int i;
	if(isEmpty())
		cout<<"\n----queue is empty-----";
	else if(front==rear)
	{
		cout<<"front-------------->"<<arr[front]<<"<--------------------rear";
	}
	else
	{
		cout<<"\nThe elelments are"<<"\n";
		cout<<arr[front]<<"<----------------front";
		for(int k=front+1;k!=rear;k++,k%=SIZE)
			cout<<"\n"<<arr[k];
		cout<<"\n"<<arr[rear]<<"<------------rear";
	}
}
bool cq::isFull()
{
	if((rear==SIZE-1 && front==0) || (front==rear+1))
		return true;
	else
		return false;
}
bool cq::isEmpty()
{
	if(front==-1 && rear==-1)
		return true;
	else
		return false ;
}

int main()
{
	cq c;
	int item,choice;
	do
	{
		cout<<"\n1----CQinsert\n2----CQdelete\n3----CQdisplay\n4----Exit\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter a element ";
				cin>>item;
				c.insert(item);
				break;
			case 2:
				cout<<"\ndeleted item is "<<c.del();
				break;
			case 3:
				c.display();
				break;
			case 4:
				break;
			default:
				cout<<"\nenter correct choice ";
				break;
		}

	}while(choice!=4);
return 0;
}
