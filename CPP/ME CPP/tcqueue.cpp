#include<iostream>
using namespace std;
#define SIZE 4
template <class type>
class cq
{
	int front,rear;
	type arr[SIZE];
	public:
	cq()
	{
		front=-1;
		rear=-1;
	}
	void insert(type);
	type del();
	void display();
	bool isEmpty();
	bool isFull();
	type item;
};
template <class type>
void cq<type>::insert(type data)
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
		cout<<"rear= "<< rear<<"front= "<< front;
		arr[rear]=data;
	}
	
}
template <class type>
type cq<type>::del()
{
	type temp;
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
template <class type>
void cq<type>::display()
{
	cout<<"front is= "<< front <<" rear is= "<< rear;
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
template <class type>
bool cq<type>::isFull()
{
	if((rear==SIZE-1 && front==0) || (front==rear+1))
		return true;
	else
		return false;
}
template <class type>
bool cq<type>::isEmpty()
{
	if(front==-1 && rear==-1)
		return true;
	else
		return false;
}	
	
int main()
{
	cout<<"\t\t\t---------------For float data type---------------";
	cq <float> f;
	int choice;
	do
	{
		cout<<"\n1----CQinsert\n2----CQdelete\n3----CQdisplay\n4----Exit\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter a element ";
				cin>>f.item;
				f.insert(f.item);
				break;
			case 2:
				if(f.isEmpty())
				{
					cout<<"\n----queue is empty-----";
				}
				else
					cout<<"\ndeleted item is "<<f.del();
				break;
			case 3:
				f.display();
				break;
			case 4:
				break;
			default:
				cout<<"\nenter correct choice ";
				break; 
		}
	
	}while(choice!=4);
	cout<<"\t\t\t---------------For charecter data type----------------";
	cq <char> c;
	do
	{
		cout<<"\n1----CQinsert\n2----CQdelete\n3----CQdisplay\n4----Exit\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter a element ";
				cin>>c.item;
				c.insert(c.item);
				break;
			case 2:
				if(c.isEmpty())
				{
					cout<<"\n----queue is empty-----";
				}
				else
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
