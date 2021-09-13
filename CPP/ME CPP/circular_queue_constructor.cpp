#include<iostream>
using namespace std;
#define max 5
class queue
{
	private : int q[max],front,rear;
	public : queue();
			void insert();
			int del(void);
			void display();
};
queue :: queue()
{
	front=-1;
	rear=-1;
}
void queue :: insert()
{
	int val,rear1;
	cout<<"Enter the value into queue="<<endl;
	cin>>val;
	rear1=rear;
	rear=(rear+1)%max;
	if(front==rear)

	{
		cout<<"queue is overflow"<<endl;
		rear=rear1;
	}
	else
	{
		q[rear]=val;
	}

}
int queue :: del()
{
	int temp;
	if(front==-1 && rear==-1)
	{
		cout<<"Queue is underflow"<<endl;
		return -1;
	}
	else
    {
        front=(front+1)%max;
        temp=q[front];
        return temp;
    }

}
void queue :: display()
{

	int i;
	cout<<endl;
	if(front==-1 && rear==-1)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		if(front<rear)
		{
			for(i=front;i<=rear;i++)
			{
				cout<<q[i]<<" ";
			}
		}
		else
		{
			for(i=front;i<max;i++)
			{
				cout<<q[i]<<" ";
			}
			for(i=0;i<=rear;i++)
			{
				cout<<q[i]<<" ";
			}
		}
	}
	cout<<endl;
}
int main()
{
	int c,val;
	queue obj=queue();
	do
	{
		cout<<"press 1 for insert"<<endl;
		cout<<"press 2 for delete"<<endl;
		cout<<"press 3 for display"<<endl;
		cout<<"press 4 for exit"<<endl;
		cout<<"Enter your choice="<<endl;
		cin>>c;
		switch(c)
		{
			case 1:obj.insert();
					break;
			case 2:val=obj.del();
					if(val!=-1)
					cout<<"The number deleted is :"<<val<<endl;
					break;
			case 3:obj.display();
					break;
			case 4:return 0;
			default :cout<<"please enter a proper choice"<<endl;
						break;
		}
	}while(1);
return 0;
}
