#include<iostream>
using namespace std;
#define SIZE 4
template <class type>
class stack
{
	int top;
	type arr[SIZE];
 public:
	stack()
	{
		top=-1;
	}
	void push(type);
	type pop();
	void display();
	bool isEmpty();
	bool isFull();
	type element;
};
template <class type>
void stack<type>::push(type data)
{
	if(isFull())
		cout<<"\n overflow will occure..stack is full.";
	else
	{
		arr[++top]=data;
		cout<<"\n pushed element is : "<<data;
	}
}
template <class type>
type stack<type>::pop()
{
	type item;
 	item=arr[top--];
	return item;
}
template <class type>
bool stack<type>::isEmpty()
{
	if(top==-1)
		return true;
	else
		return false;
}
template <class type>
bool stack<type>::isFull()
{
	if(top==SIZE-1)
		return true;
	else
		return false;
}
template <class type>
void stack<type>::display()
{
	if(isEmpty())
		cout<<"\n stack is empty";
	else
	{
		cout<<"\n The elements are:\n"<<arr[top]<<"<--------------------top";
		for(int i=top-1;i>=0;i--)
			cout<<"\n"<<arr[i];
	}
}
int main()
{
	cout <<"\t\t\t-------------For float data type--------------";
	stack <float> f;
	int choice;
	do
	{
		cout<<"\n1-----push\n2-----pop\n3------display\n4-------exit\n enter your choice:  ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter your element : ";
				cin>>f.element;
				f.push(f.element);
				break;
			case 2:
				
				if(f.isEmpty())
				{
					cout<<"\n underflow will occure..there is no element to display..";
				}
				else
					cout<<"\n popped item is: "<<f.pop();
				break;
			case 3:
				f.display();
				break;
			case 4:
				break;
		}
	}while(choice!=4);
	cout <<"\t\t\t-------------For charecter data type-------------";
	stack <char> c;
	do
	{
		cout<<"\n1-----push\n2-----pop\n3------display\n4-------exit\n enter your choice:  ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter your element : ";
				cin>>c.element;
				c.push(c.element);
				break;
			case 2:
				
				if(c.isEmpty())
				{
					cout<<"\n underflow will occure..there is no element to display..";
				}
				else
					cout<<"\n popped item is: "<<c.pop();
				break;
			case 3:
				c.display();
				break;
			case 4:
				break;
		}
	}while(choice!=4);

	return 0;
}
