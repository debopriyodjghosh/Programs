#include<conio.h>
#include<stdio.h>
#include<alloc.h>
#include<iostream>
using namespace std;
typedef struct node
{
  struct node * left;
  int data;
  struct node * right;
}NODE;
class bst
{
   private: NODE *root;
	    int c;
   public:
	   bst()
	   {
	     root=NULL;
	     c=0;
	   }
	   void maketree(NODE **,NODE *);
	   void del1(NODE **,NODE *);
	   void del(int);
	   void getnode(int);
	   void pretrav1(NODE *);
	   void postrav1(NODE *);
	   void intrav1(NODE *);
	   void pretrav()
	   {
	    pretrav1(root);
	   }
	   void intrav()
	   {
	     intrav1(root);
	   }
	   void postrav()
	   {
	     postrav1(root);
	   }
	   int count()
	   {
	     return c;
	   }

};
main()
{
  bst ob1;
  int item,ch;
  do
  {
   //clrscr();
   cout<<"\nMenu for tree operation:";
   cout<<"\nPress 1 to insert:";
   cout<<"\nPress 2 to delete:";
   cout<<"\nPress 3 to preorder display:";
   cout<<"\nPress 4 to inorder display:";
   cout<<"\nPress 5 to postorder output";
   cout<<"\nPress 6 to count no. of non leaf node:";
   cout<<"\n Press 0 to exit..";
   cout<<"\nEnter your choice:";
   cin>>ch;
   if(ch<0 || ch>6)
     continue;
   switch(ch)
   {
     case 1:
	     cout<<"\nEnter item to insert:";
	     cin>>item;
	     ob1.getnode(item);
	     break;
     case 2:
	     cout<<"\nEnter item to delete:";
	     cin>>item;
	     ob1.del(item);
	     getch();
	     break;
     case 3:
	     cout<<"\n\n";
	     ob1.pretrav();
	     getch();
	     break;
     case 4:
	     cout<<"\n\n";
	     ob1.intrav();
	     getch();
	     break;
     case 5:
	     cout<<"\n\n";
	     ob1.postrav();
	     getch();
	     break;
     case 6:
	     printf("\nNo. of non leaf node=%d",ob1.count());
	     getch();
	     break;
     case 0:
	     cout<<"\n*****The End******";
	     getch();
   }
  }while(ch!=0);
}
void bst:: getnode(int item)
{
  NODE * n=(NODE *)malloc(sizeof(NODE));
  n->data=item;
  n->left=n->right=NULL;
  maketree(&root,n);
}
void bst::maketree(NODE **p,NODE * n)
{
  if(*p==NULL)
    *p=n;
  else if((*p)->data > n->data)
	  maketree(&((*p)->left),n);
  else if((*p)->data <= n->data)
	  maketree(&((*p)->right),n);

}
void bst ::intrav1(NODE *q)
{
  if(q)
  {
     if(q->left!=NULL || q->right!=NULL)
       c++;
     intrav1(q->left);
     printf("   %d",q->data);
     intrav1(q->right);
  }

}
void bst:: pretrav1(NODE *r)
{

  if(r)
  {
     printf("   %d",r->data);
     pretrav1(r->left);
     pretrav1(r->right);
  }
}
void bst::postrav1(NODE *s)
{

  if(s)
  {
     postrav1(s->left);
     postrav1(s->right);
     printf("   %d",s->data);
  }
}
void bst :: del1(NODE ** q,NODE *r1)
{
   NODE *cur,*prev,*temp;
   if(*q==NULL)
   {
     cout<<"Deletion is not possible." ;

   }
   else if((*q)->left==NULL && (*q)->right==NULL)
   {
     temp=*q;
     if(r1->left==*q)
       r1->left=NULL;
     else
       r1->right=NULL;
     *q=NULL;
     cout<<"\nItem dleted="<<temp->data;
     delete temp;
     return;
   }
   else if((*q)->left==NULL)
   {
      temp=*q;
     (*q)->data=(*q)->right->data;
     *q=(*q)->right;
     del1(q,temp);
   }
   else if((*q)->right==NULL)
   {
     temp=*q;
     (*q)->data=(*q)->left->data;
     *q=(*q)->left;
     del1(q,temp);
   }
   else
   {
     cur=(*q)->right;
     prev=NULL;
     while(cur->left!=NULL)
     {
       prev=cur;
       cur=cur->left;
     }
     (*q)->data=cur->data;
     *q=cur;
     del1(q,prev);
   }
}
void bst :: del(int item)
{
   NODE **p=&root;
   NODE *r,*r1;
   int f=0;
   if(root==NULL)
     cout<<"\nItem not found to delete";
   else
   {
      while(*p!=NULL && f!=1)
      {
	if((*p)->data==item)
	{
	  f=1;
	  del1(p,r1);
	}
	else
	{
	   r=*p;
	   if(r->data>item)
	   {
	     r1=r;
	     r=r->left;
	   }
	   else
	   {
	     r1=r;
	     r=r->right;
	   }
	}
	p=&r;
      }
   }
}
