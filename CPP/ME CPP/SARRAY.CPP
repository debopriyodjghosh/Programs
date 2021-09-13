#define MAX 10
#include<iostream.h>
#include<conio.h>
template <class t>
class stack
{
  private: t *data;
	   int top;
  public: stack()
	  {
	    top=-1;
	    data=new t[MAX];
	  }
	  void push(t &);
	  void pop();
	  void display();
};
template <class t> void stack<t>::push(t &x)
{
 if(top==MAX-1)
 {
   cout<<"\nOverflow";
   return;
 }
 top++;
 data[top]=x;
}
template <class t> void stack<t>::pop()
{
  if(top==-1)
  {
   cout<<"Underflow";
   return;
  }
  t x;
  x=data[top];
  cout<<"\n item popped "<<x;
  top--;
}
template<class t>void stack<t>::display()
{
  if(top==-1)
  {
   cout<<"stack is empty";
   return;
  }
  else
  {
    for(int i=0;i<=top;i++)
    cout<<"\t"<<data[i];
  }
}
void main()
{
  stack<int>ob;
  int x,ch;
  do
  {
    clrscr();
    cout<<"Menu for stack operation is";
    cout<<"\n 1 for Push";
    cout<<"\n 2 for pop";
    cout<<"\n 3 for display";
    cout<<"\n 0 for exit";
    cout<<"\n Enter your choice";
    cin>>ch;
    if(ch<0 || ch>4)
    continue;
    switch(ch)
    {
      case 1:cout<<"\nEnter value ";
	     cin>>x;
	     ob.push(x);
	     getch();
	     break;
      case 2:ob.pop();
	     getch();
	     break;
      case 3:ob.display();
	     getch();
	     break;
      case 0:cout<<"\n Exiting from Program";
     }
  }while(ch!=0);
}
