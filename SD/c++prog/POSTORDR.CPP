#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class node
	{
	 private:
	    int data;
	    node *right;
	    node *left;
	    int front;
	    int rear;
	 public:
	    node(){rear=-1;front=-1;}
	    node *insert(node *h,int ele)
	     {
	      node *p=h;
	      node *t;
	      int flag=0,flag2=0;
	      if(p==NULL)
	       {
		p=new node;
		p->data=ele;
		flag=1;
		p->left=p->right=NULL;
		h=p;
	       }
	      else
	       {
		t=new node;
		t->data=ele;
		flag=0;
		t->left=t->right=NULL;
	       }
	      while(p!=NULL && flag!=1)
	       {
		if(t->data<p->data)
		 {
		  if(p->left!=NULL)
		    p=p->left;
		  else
		   {
		    p->left=t;
		    break;
		   }
		 }
		if(t->data>=p->data)
		 {
		  if(p->right!=NULL)
		    p=p->right;
		  else
		   {
		    p->right=t;
		    break;
		   }
		 }
	       }
	      return(h);
	     }
	   node* level(node *h)
	    {
	     node *q[20];
	     rear++;
	     q[rear]=h;
	     while(front!=rear)
	      {
			 cout<<q[front+1]->data<<" -> ";
			 if(q[front+1]->left!=NULL)
		{
		 rear++;
		 q[rear]=q[front+1]->left;
		}
			 if(q[front+1]->right!=NULL)
		{
		 rear++;
		 q[rear]=q[front+1]->right;
		}
			 front++;
			}
		  cout<<" End.";
		  return h;
		 }
		/*friend*/ void postorder(node *);
	};
class nd1
	{
	 private:
	   node *add1;
	   int status;
	 public:
	   //friend void postorder(node *);
	   int stat(){return status;}
	   node * r1(){return add1;}
	   void setstat(int i){status=i;}
	   void add(node *a){add1=a;}
	};

void node::postorder(node *h)
{
 nd1 stack[20];
 int top=-1;
 node *ptr=h;
 while(ptr!=NULL || top!=-1)
  {
	if(ptr==NULL)
	 {
	  if(top!=-1)
		{
		 if(((stack[top]).stat())==0)
		  {
			stack[top].setstat(1);
			ptr=((stack[top]).r1());
			ptr=ptr->right;
		  }
		 else
		  {
			ptr=stack[top].r1();
			top--;
			cout<<ptr->data<<" -> ";
			ptr=NULL;
		  }
		}
	 }
	else
	 {
	  top++;
	  stack[top].add(ptr);
	  stack[top].setstat(0);
	  ptr=ptr->left;
	 }
  }
 cout<<" End.";
}

void main(void)
{
 int ele[20],n;
 node *h;
 h=NULL;
 clrscr();
 cout<<endl<<endl<<" Enter total no of elements: ";
 cin>>n;
 cout<<endl;
 for(int i=0;i<n;i++)
  {
   cout<<endl<<"Enter element: ";
   cin>>ele[i];
  }
 for(i=0;i<n;i++)
   h=h->insert(h,ele[i]);
 cout<<endl<<endl<<"Level wise traversing: ";
 h=h->level(h);
 cout<<endl<<endl<<endl<<endl<<"Post-Order traversing: ";
 h->postorder(h);
 getch();
}