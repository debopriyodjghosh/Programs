/*Consider thata base class Stack is available.It does not take care of situations such as overflow or underflow.Write a program 
to enhance this class to Mystack,which raises an exception whenever overflow or underflow error occures.You also need to design
the base class with push and pop operations etc.Write any other auxiluary function if required*/


#include<iostream>
#include<conio.h>
using namespace std;
class stack
{
	protected:int a[10],top;
	public:
		stack()
		{
			top=-1;
		}
		virtual void push(int)=0;
		virtual int pop()=0;
};
class mystack:public stack
{
	public:
		
		void show();
		void push(int item)
		{
			try
			{
				if(top==9)
				
					throw top;
			    
					top++;
					a[top]=item;
					
			}
			catch(int p)
			{
				cout<<p<<"\nhas overflow position";
				cout<<"\nit cause an error";
			}
		}
		int pop()
		{
			int data;
			try
			{
				if(top==-1)
				 throw top;
				
					data=a[top];
					top--;
					return data;
				
			}
			catch(int p)
			{
				cout<<p<<"\nhas reached underflow situation";
				
			}
			return NULL;
		}
};
void mystack::show()
{
	int i;
	for(i=0;i<=top;i++)
	  cout<<" "<<a[i];
}
int main()
{
	mystack ob1;
	ob1.push(15);
	ob1.push(20);
	ob1.push(22);
	ob1.push(35);
	ob1.push(22);
	ob1.push(37);
	ob1.push(27);
	ob1.push(27);
	ob1.push(27);
	ob1.push(27);
	ob1.push(27);
	ob1.show();
	int i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	i=ob1.pop();
	cout<<"\n\nitem popped="<<i;
	
}
