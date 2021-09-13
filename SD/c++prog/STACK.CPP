//ok.....2010 4th day 2)Stack Using template

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10

template <class T>
class stack
{
  private:
    T s[MAX];
    int top;
  public:
    stack()
    {
      top=-1;
    }
    void push();
    void pop();
    void display();
};
template <class T>
void stack<T>::push()
{
  T x;
  if(top==MAX-1)
  {
    cout<<"\n\tStack Overflow";
    getch();
  }
  else
  {
    top++;
    cout<<"\n\tEnter value: ";
    cin>>x;
    s[top]=x;
  }
}
template <class T>
void stack<T>::pop()
{
  if(top==-1)
    cout<<"\n\tStack Underflow";
  else
  {
    cout<<s[top]<<" is deleted";
    top--;
  }
  getch();
}
template <class T>
void stack<T>::display()
{
  if(top==-1)
    cout<<"\n\tStack is empty";
  else
  {
    for(int i=0;i<=top;i++)
      cout<<"   "<<s[i];
  }
  getch();
}

void main()
{
  stack<float> item;
  int ch;
  while(1)
  {
    clrscr();
    cout<<"\n\t1.Push\n\t2.Pop\n\t3.Display\n\t0.Exit\n\tEnter your choice: ";
    cin>>ch;
    switch(ch)
    {
      case 1:item.push();
	     break;
      case 2:item.pop();
	     break;
      case 3:item.display();
	     break;
      case 0:exit(0);
      default:cout<<"\n\tWrong choice,try again";
	      getch();
    }
  }
}