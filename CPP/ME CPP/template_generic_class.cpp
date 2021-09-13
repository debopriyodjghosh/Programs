/* TEMPLATE - GENERIC CLASS */
#include<iostream>
using namespace std;
template<class T>
class stack
{
	private : 
		T a[10];
		int top;
	public :
	     stack()
		 {
			top=-1;
		 } 
		 void push(T);
		 T pop();
};

template<class T>
void stack<T>::push(T ob)
{
	if (top == 9)
	{
		cout<<"\nStack is full.";
		return ;
	}
	top++;
	a[top]=ob;
}

template<class T>
T stack<T>::pop()
{
	T item;
	if(top == -1)
	{
		cout<<"\nStack is empty.";
		return NULL;
	}
	item=a[top];
	top--;
	return item;
}

int main()
{
	stack<char> ob1;
	ob1.push('A');
	ob1.push('B');
	ob1.push('C');
	char d=ob1.pop();
	cout<<"\nItem poped = "<<d;
	
	stack<int> ob2;
	ob2.push(15);
	ob2.push(20);
	int s=ob2.pop();
	cout<<"\nItem poped = "<<s;
	
	return 0;
}
