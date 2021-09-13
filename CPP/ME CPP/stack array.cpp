#include<iostream>
using namespace std;


class stack
{
private:
int a[20],top,size;
public:
void push(int);
int pop();
void put_data();
stack();
stack(int);
};

stack::stack()
{
top=-1;
size=5;
}

stack::stack(int a)
{
top=-1;
size=a;
}

void stack::push(int p)
{
if(top==size-1)
{
cout<<"\n stack is full!!!";
return;
}
top++;
a[top]=p;
return;
}

int stack::pop()
{
int q=0;
if(top==-1)
{
cout<<"\n stack is empty!!!";
return(0);
}
q=a[top];
top--;
return(q);
}

void stack::put_data()
{
for(int i=top;i>=0;i--)
{
cout<<a[i]<<"\n";
}
}

int main()
{
int m,k,w;
stack s;
do
{
cout<<"\n 1. push 2.pop 3.exit";
cout<<"\n enter your choice: ";
cin>>m;
switch(m)
{
case 1:
cout<<"\n enter the number: ";
cin>>k;
s.push(k);
s.put_data();
break;
case 2:
w=s.pop();
cout<<"\n poped data: "<<w<<endl;
s.put_data();
}
}
while(m!=3);
return 0;
}
