#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
 int data;
 struct tree *left;
 struct tree *right;
}TREE;

int search(TREE *root,int n);
void build(TREE *root);
void preorder(TREE *root);
void inorder(TREE *root);
void postorder(TREE *root);
//void siftdown(int a[20],int root,int bottom);


/*void disp(TREE *root,int x,int y)
{
 if(root!=NULL)
 {
  //gotoxy(x,y);
  printf("%d",root->data);
  disp(root->left,30-x/2,y+2);
  disp(root->right,30+x/2,y+2);
 }
}
*/

 int main()
{
 int n;
int x;
TREE *p;
TREE *root;
 root=(TREE *)malloc(sizeof(TREE));
 printf("\n Root : ");
 scanf("%d",&root->data);
 root->left=root->right=NULL;
 while(1)
 {
  printf("\n1.Insert ");
  printf("\n2.Preorder");
  printf("\n3.Inorder");
  printf("\n4.Postorder");
   printf("\n5.search");
  printf("\n6.Exit");
  printf("\nEnter your choice = ");
  scanf("%d",&n);

  switch(n)
  {
   case 1:
    build(root);
	// disp(root,40,2);
	 break;
	case 2:
	 printf("\nPreorder : ");
	 preorder(root);
	 break;
	case 3:
	 printf("\nInorder : ");
	 inorder(root);
	 break;
	case 4:
	 printf("\nPostorder : ");
	 postorder(root);
	 break;
	case 5:
	printf("\n enter the node which to be searched: ");
	scanf("%d",&x);
	p=search(root,x);
	if(p==NULL)
	{
	printf("\n node not found!!!");
	}
	else
	{
	printf("\n %d node is found:",p->data);
	}
	break;
	case 6:
	 exit(0);
  }
 }
 return(0);
}


void build(TREE *root)
{
  TREE *t,*c,*p;
  t=(TREE *) malloc(sizeof(TREE));
  t->left=t->right=NULL;
  printf("\n data : ");
  scanf("%d",&t->data);
  c=root;
  while(c!=NULL)   //for searching...
  {
	 p=c;
    if(t->data>c->data)
      c=c->right;
    else
      c=c->left;
  }
  if(t->data>p->data)   // for insert node...
    p->right=t;
  else
    p->left=t;
}

void preorder(TREE *root)
{
 if(root!=NULL)
 {
  printf("%5d",root->data);
  preorder(root->left);
  preorder(root->right);
 }
}

void inorder(TREE *root)
{
 if(root!=NULL)
 {
  inorder(root->left);
  printf("%5d",root->data);
  inorder(root->right);
 }
}

void postorder(TREE *root)
{
 if(root!=NULL)
 {
  postorder(root->left);
  postorder(root->right);
  printf("%5d",root->data);
 }
}


int search(TREE *root,int n)
{
 TREE *p,*c;
 c=root;
  while(c!=NULL && c->data!=n)   //for searching...
  {
   //p=c;
    if(n>c->data)
      c=c->right;
    else
      c=c->left;
  }
  return(c);
}
