#include<iostream>
#include<conio.h>
using namespace std;
class cq
{
  private:
				struct node
				{
				 int data;
				 node*link;
				}*front,*rear;
  public:
			 cq();
			 void addcirq(int);
			 int delcirq();
			 void display();
			 ~cq();
};
cq :: cq()
{
 front=NULL;
 rear=NULL;
}
void cq :: addcirq(int item)
{
 node *q;
 q=new node;
 q->data=item;
 if(front==NULL)
	 front=q;
 else
	 rear->link=q;
 rear=q;
 rear->link=front;
}
int cq :: delcirq()
{
 node *q;
 int item;
 if(front==NULL)
	cout<<"\nQueue is empty";
 else
	 {
	  if(front==rear)
		{
		 item=front->data;
		 delete(front);
		 front=NULL;
		 rear=NULL;
		}
	  else
		{
		 q=front;
		 item=q->data;
		 front=front->link;
		 rear->link=front;
		 delete(q);
		}
	  return item;
	 }
 return NULL;
}
void cq :: display()
{
 node *q, *p;
 q=front;
 p=NULL;
 cout<<endl;
 while(q!=p)
 {
  cout<<q->data<<"\t";
  q=q->link;
  p=front;
 }
}
cq :: ~cq()
{
 node *q;
 while(front!=rear)
  {
	q=front->link;
	delete(front);
	front=q;
  }
 delete(rear);
}
 main()
{
 cq ob1;
// clrscr();
 ob1.addcirq(10);
 ob1.addcirq(20);
 ob1.addcirq(30);
 ob1.display();
 int c=ob1.delcirq();
 cout<<"\nitem deleted="<<c;
 c=ob1.delcirq();
 cout<<"\nitem deleted="<<c;
 getch();
}
