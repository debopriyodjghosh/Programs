#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class node;
//node *h;
class node
	{
	 private:
	    int data;
	    node *right;
	    node *left;
	    //node *q[20];
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
		//flag=0;
		if(t->data<p->data)
		 {
		  if(p->left!=NULL)
		    p=p->left;
		  else
		   {
		    p->left=t;
		    //goto sos;
		  //  flag2=1;
		    break;
		   }
		 }
		if((t->data>=p->data) /*&& flag2!=1*/)
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
	      //sos:
	      return(h);
	     }
	   void level(node *h)
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
	    }
	};
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
 h->level(h);
 getch();
}