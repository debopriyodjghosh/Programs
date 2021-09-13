#include<iostream>
#include<conio.h>
typedef struct node
{
  int roll;
  int age;
  struct node * link;
}NODE;
class ivy
{
	private:
				 NODE * top;
	public:
			  void push(int,int);
			  void pop();

};
 void ivy :: push(int r,int a)
 {
	 NODE * temp;
	 temp=new NODE;
	 if(temp==NULL)
	 {
		cout<<"\nStack is full." ;
		return;
	 }
	 temp->roll=r;
	 temp->age=a;
    temp->link=top;
	 top=temp;
 }
 void ivy :: pop()
 {
	NODE *temp;
	int r,a;
	if(top==NULL)
	{
	  cout<<"\nStack is empty";
	  return;
	}
	temp=top;
	r=temp->roll;
	a=temp->age;
	top=top->link;
	delete(temp);
	cout<<"\nRoll poped="<<r<<"\nAge poped-="<<a;
  }

  void main()
  {
	  ivy ob1;
	  ob1.push(1,18);
	  ob1.push(2,22);
	  ob1.push(3,19);
	  ob1.push(4,36);
	  ob1.pop();
	  ob1.pop();
	  ob1.pop();
	  ob1.pop();
	  ob1.pop();
	  ob1.pop();

  }
