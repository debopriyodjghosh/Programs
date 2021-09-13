#include<iostream.h>
#include<conio.h>
typedef struct node
 {
	int data;
	struct node*link;
 }NODE;
class circle
{
  private:
				NODE *p;
  public:
			 circle()
			 {
			  p=NULL;
			 }
			 void addend(int);
			 void addbeg(int);
			 void addafter(int,int);
			 void display();
			 int count();
			 void del(int);
};
void circle :: addend(int item)
{
 NODE *temp,*r;
 if(p==NULL)
 {
  temp=new NODE;
  temp->data=item;
  temp->link=temp;
  p=temp;
 }
 else
 {
  temp=p;
  while(temp->link!=p)
	 temp=temp->link;
  r=new NODE;
  r->data=item;
  r->link=p;
  temp->link=r;
 }
}
void circle :: addbeg(int item)
{
	NODE *temp=new NODE;
	temp->data=item;
	temp->link=p;
	NODE *r=p;
	p=temp;
	temp=r;
	while(temp->link!=r)
		temp=temp->link;
	temp->link=p;
}
void circle :: addafter(int pos,int item)
{
 int c=count();
 int i;
 NODE *temp, *r;
 if(c==pos)
	{
	 temp=p;
	 while(temp->link!=p)
		temp=temp->link;
	 r=new NODE;
	 r->data=item;
	 r->link=p;
	 temp->link=r;
	}
  else
	{
	 temp=p;
	 for(i=1;i<pos;i++)
	  {
		temp=temp->link;
		if(temp==p)
		 {
		  cout<<"\ninvalid position";
		  return;
		 }
	  }
	r=new NODE;
	r->data=item;
	r->link=temp->link;
	temp->link=r;
	}
}
void circle :: display()
{
 cout<<"\n";
 NODE *temp=p;
 while(temp->link!=p)
  {
	cout<<"\t"<<temp->data;
	temp=temp->link;
  }
 cout<<"\t"<<temp->data;
}
int circle :: count()
{
 int c=0;
 NODE *temp=p;
 while(temp->link!=p)
 {
  c++;
  temp=temp->link;
 }
 c++;
 return c;
}
void circle :: del(int item)
{
 NODE *temp,*old;
 NODE *front,*rear;
 front=p;
 temp=p;
 while(temp->link!=front)
	 temp=temp->link;
 rear=temp;
 temp=p;
 while(temp->link!=p)
  {
	 if(temp->data==item)
	 {
		if(temp==p)
		 {
			p=temp->link;
			rear->link=p;
			temp->link=NULL;
		 }
		 else
		 {
		  old->link=temp->link;
		  temp->link=NULL;
		 }
		 delete(temp);
		 return;
	 }
  else
	{
		 old=temp;
		 temp=temp->link;
	}

 }
 if(temp->data==item)
  {
	old->link=temp->link;
	temp->link=NULL;
	delete(temp);
	return;
  }
 cout<<"\nitem is not present";
}
void main()
{
 circle ob1;
 ob1.addend(15);
 ob1.addend(20);
 ob1.display();
 cout<<"\nno.of node="<<ob1.count();
 ob1.addbeg(5);
 ob1.addbeg(12);
 ob1.display();
 cout<<"\nno.of node="<<ob1.count();
 ob1.addafter(2,16);
 ob1.display();
 ob1.del(5);
 ob1.display();
 ob1.del(20);
 ob1.display() ;
 cout<<"\nno.of node="<<ob1.count();
 getch();
}