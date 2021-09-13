#include<iostream.h>
const int MAX =10;
class stack
{
	protected:
				int s[MAX];
				int top;
	public:
				stack()
				{
					top=-1;
				}
				void push(int num)
				{
					top++;
					s[top]=num;
				}
				int pop()
				{
					int num;
					num=s[top];
					top--;
					return(num);
				}
};
class stack1:public stack
{
	public:
			void push(int num)
			{
				if(top==MAX-1)
					cout<< "\nSTACK ISfull";
				else
					stack::push(num);
			}
			int pop()
			{
				if(top==-1)
				{
					cout<<"\n stack is empty";
					return NULL;
				}
				else
				{
					int n=stack::pop();
					return n;
				}
			}
			void display()
			{
				if(top==-1)
				{
					cout << "\nnothing to print";
					return;
				}
				for(int i=0;i<top;i++)
				{
					cout <<s[i]<<"  ";
				}
			}

};
void main()
{
	int n;
	stack1 stk;
	stk.push(100);
	stk.push(17);
	stk.push(1);
	stk.push(23);
	stk.push(10);
	stk.push(12);
	stk.display();
	n=stk.pop();
	cout << n << "deleted\n";
	n=stk.pop();
	cout << n << "deleted\n";
	stk.display();
}
