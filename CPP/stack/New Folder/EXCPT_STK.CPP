#include<iostream.h>

class stack
{
private:
	int arr[5];
	int top;
	public:
		stack(){top=0;}
		void push(int m)
		{
		  arr[top]=m;
		  top++;
		 //cout<<top<<endl;
		  cout<<"insertion of "<<m<<" successful"<<endl;
		}
		int pop()
		{
			 //cout<<"top="<<top<<endl;
		 int m=arr[top];
		//cout<<" Element="<<m;
		 top--;
		 return m;
		}
		int ret_top()
		{
		 return(top);
		}
};

class mystack:public stack
{
  public:
	  class sfull{}; //exception class
	  class sempty{}; //exception class
	  void dpush(int a)
	  {
		  int top1=ret_top();
		  if(top1>=5)
			throw sfull();
		  else
		  {
			 push(a);
		  }
	  }
	  void dpop()
	  {
		 int b;
		 int top2=ret_top();
		if(top2<0)
		  throw sempty();
		 else
		  b=pop();
		cout<<"element deleted was: "<<b<<endl;
	  }
};
void main()
{
  mystack m;
  try
  {
	  m.dpush(45);
	  m.dpush(56);
	  m.dpush(100);
	  m.dpush(23);
	  m.dpush(47);
	  m.dpush(14);
	  m.dpush(23);
  }
  catch(mystack::sfull)
  {
	 cout<<"stack overflow"<<endl;
  }
  try
  {
	  m.dpop();
	  m.dpop();
	  m.dpop();
	  m.dpop();
	  m.dpop();
	  m.dpop();
	  m.dpop();
  }
  catch(mystack::sempty)
  {
	 cout<<"stack underflow"<<endl;
  }
}