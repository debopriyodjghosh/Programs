#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
class node
			{
			 private:
				  int info;
				  node *left;
				  node *right;
				  int rthread;
			 public:
				  void maketree(int);
				  void setleft(node*,int);
				  void setright(node*,int);
				  void inorder(node *);
				  int retinfo();
				  node* retleft();
				  node* retright();
				  int retthread();
			};
int node::retinfo()
{
 return info;
}
node* node::retleft()
{
 return left;
}
node* node::retright()
{
 return right;
}
int node::retthread()
{
 return rthread;
}
void node::maketree(int x)
{
 //node *p;
 //p=new node;
 /*p->*/info=x;
 /*p->*/left=NULL;
 /*p->*/right=NULL;
 /*p->*/rthread=TRUE;
 //return p;
}
void node::setleft(node *p,int x)
{
 //node *q;
 if(p==NULL)
	 cout<<endl<<endl<<" Wrong insertion!!!! aborted...";
 else if(p->left!=NULL)
			cout<<endl<<endl<<" Wrong insertion!!!! aborted...";
		else
		  {
			node *q=new node;
			q->maketree(x);
			p->left=q;
			q->right=p;
		  }
}
void node::setright(node *p,int x)
{
 node *q=new node;
 if(p==NULL)
	 cout<<endl<<endl<<" Wrong insertion!!!! aborted...";
 else if(!p->rthread)
			cout<<endl<<endl<<" Wrong insertion!!!! aborted...";
		else
		  {
			q->maketree(x);
			q->right=p->right;
			p->right=q;
			p->rthread=FALSE;
		  }
}
void node::inorder(node *h)
{
 node *p,*q;
 p=h;
 cout<<endl<<endl<<" The inorder traversal of this threaded binary search tree: ->"<<endl<<endl;
 do
  {
	q=NULL;
	while(p!=NULL)
	 {
	  q=p;
	  p=p->left;
	 }
	if(q!=NULL)
	 {
	  cout<<endl<<endl<<q->info;
	  p=q->right;
	  while(q->rthread && p!=NULL)
		{
		 cout<<endl<<endl<<p->info;
		 q=p;
		 p=p->right;
		}
	 }
  }while(q!=NULL);
}

void main(void)
{
 node *h,*p;
 int a[50],n,i,flag=0;
 clrscr();
 cout<<endl<<endl<<" Enter the no. of terms: ";
 cin>>n;
 for(i=0;i<n;i++)
  {
	cout<<endl<<endl<<" Enter no. "<<i+1<<" : ";
	cin>>a[i];
  }
 h=NULL;
 for(i=0;i<n;i++)
  {
	p=h;
	if(p==NULL)
	 {
	  p=new node;
	  p->maketree(a[i]);
	  flag=1;
	  h=p;
	 }
	else
	  flag=0;
	while(p!=NULL && flag!=1)
	 {
	  if(a[i]<(p->retinfo()))
		{
		 if((p->retleft())!= NULL)
			p=p->retleft();
		 else
		  {
			p->setleft(p,a[i]);
			goto sms;
		  }
		}
	  if(a[i]>=(p->retinfo()))
		{
		 if((p->retright())!=NULL && (p->retthread())!=TRUE)
			p=p->retright();
		 else
		  {
			p->setright(p,a[i]);
			goto sms;
		  }
		}
	 }
	sms:
  }
 h->inorder(h);
 getch();
}






