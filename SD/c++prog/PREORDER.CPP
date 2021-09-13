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
	   void preorder(node *);
	};

void node::preorder(node *h)
{
 node *q[20],*ptr;
 int top=-1;
 ptr=h;
 cout<<ptr->data<<" -> ";
 while(ptr!=NULL || top!=-1)
  {
   if(ptr==NULL)
    {
     if(top!=-1)
      {
       ptr=q[top];
       top--;
       cout<<ptr->data<<" -> ";
      }
    }
   if(ptr->right!=NULL)
    {
     top++;
     q[top]=ptr->right;
    }
   ptr=ptr->left;
   if(ptr!=NULL)
     cout<<ptr->data<<" -> ";
  }
 cout<<"End.";
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
 cout<<endl<<endl<<endl<<endl<<"Pre-Order traversing: ";
 h->preorder(h);
 getch();
}