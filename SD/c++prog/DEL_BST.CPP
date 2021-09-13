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
	    node *delet(node *);
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
node* node::delet(node *h)
{
 node *par,*ptr1,*ptr2,*ptr4,*ptr5;
 int flag=0,b;
 cout<<endl<<endl<<"Enter the data which you want to delete from the b.s.t: ";
 cin>>b;
 ptr1=par=ptr2=h;
 while(ptr2->data!=b && ptr2!=NULL)
  {
   if(ptr1!=ptr2)
     par=ptr1;
   ptr1=ptr2;
   if(ptr2->data>b)
     ptr2=ptr2->left;
   else
     ptr2=ptr2->right;
  }
 if(ptr2==NULL)
  {
   cout<<endl<<endl<<" Value not found!!!!";
   getch();
   return h;
  }
 if(ptr2->left==NULL && ptr2->right==NULL)
  {
   if(ptr2!=h)
    {
     if(ptr1->right==ptr2)
       ptr1->right=NULL;
     else
       ptr1->left=NULL;
    }
   else
    h=NULL;
   flag=1;
  }
 if((ptr2->left==NULL || ptr2->right==NULL) && flag!=1)
  {
   if(ptr2!=h)
    {
     if(ptr1->left==ptr2)
      {
       if(ptr2->left==NULL)
	 ptr1->left=ptr2->right;
       if(ptr2->right==NULL)
	 ptr1->left=ptr2->left;
      }
     if(ptr1->right==ptr2)
      {
       if(ptr2->left==NULL)
	 ptr1->right=ptr2->right;
       if(ptr2->right==NULL)
	 ptr1->right=ptr2->left;
      }
    }
   else
    {
     if(ptr2->left==NULL)
       h=h->right;
     else
       h=h->left;
    }
  }
 if(ptr2->left!=NULL && ptr2->right!=NULL)
  {
   ptr4=ptr2;
   ptr4=ptr4->right;
   ptr5=ptr4;
   while(ptr4->left!=NULL)
    {
     ptr5=ptr4;
     ptr4=ptr4->left;
    }
   if(ptr2->right==ptr4)
    {
     ptr2->right=NULL;
     if(ptr1->left==ptr2)
       ptr1->left=ptr4;
     if(ptr1->right==ptr2)
       ptr1->right=ptr4;
     ptr4->left=ptr2->left;
     ptr4->right=ptr4->right;
    }
   else
    {
     ptr5->left=ptr4->right;
     ptr4->left=ptr2->left;
     ptr4->right=ptr2->right;
     if(ptr2!=h)
      {
       if(ptr1->right==ptr2)
	 ptr1->right=ptr4;
       if(ptr1->left==ptr2)
	 ptr1->left=ptr4;
      }
     else
       h=ptr4;
    }
  }
 delete ptr2;
 return h;
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
 h->level(h);
 h=h->delet(h);
 cout<<endl<<endl<<"After deletion Level wise traversing: ";
 h->level(h);
 getch();
}