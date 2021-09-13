  /* binary search tree */

#include<stdio.h>
#include<conio.h>			// Header file declaratio//
#include<stdlib.h>

struct tree
{
	int data;
	struct tree *left;		//structure definition//
	struct tree *right;
};
typedefstruct tree TREE;

void build(TREE **root,int d)
{
	TREE *c,*cur,*p;
	cur=(TREE *)malloc(sizeof(TREE));
	cur->data=d;
	cur->left=cur->right=NULL;	//definition of build function//
	if(*root==NULL)
	{
	  *root=cur;
	return;
	}
	c=*root;
	p=NULL;
	while(c!=NULL)
	{
		p=c;
		if(cur->data<c->data)
		c=c->left;
		else
		c=c->right;
	}
	if(cur->data>p->data)
		p->right=cur;
	else
		p->left=cur;
	return;
}
voiddelnode(TREE **,int);
void preorder(TREE *);
voidpostorder(TREE *);		//prototyping//
voidinorder(TREE *);
void display(TREE *,int,int);
void height(TREE *,int *);
intcount_leaf_nodes(TREE *root);
intcount_nonleaf_nodes(TREE *root);

void main()
  {
	intc,i,n,h,d;
	TREE *root,*t;			//variable declaration//
	root=(TREE *)malloc(sizeof(TREE ));
	root=NULL;
	clrscr();
	do
	{
	printf("\n 1.Create Tree \n2. Delete Node:");
	printf("\n 3.Preorder Traversal:");
	printf("\n 4.Inorder traversal:");			//menu//
	printf("\n 5.Post order traversal:\n 6.Display:\n 7.Height: ");
	printf("\n 8.Count the leaf nodes:");
	printf("\n 9.Count the nonleaf nodes:");
	printf("\n 10.Exit:");
	printf("\n Enter your choice :");
	scanf("%d",&c);
	switch(c)
	 {							//switch case//
	case 1:
		printf("\n Enter the node:");
		scanf("%d",&d);
		build(&root,d);
		break;
	case 2:
		fflush(stdin);
		printf("\n which node do U want to delete:");
		scanf("%d",&n);
		delnode(&root,n);
		break;

	case 3:
		printf("\nPreorder:");
		preorder(root);
		break;

	case 4:
		printf("\n Inorder:");
		inorder(root);
		break;

	case 5:
		printf("\n Postorder:");
		postorder(root);
		break;

	case 6:
		clrscr();
		display(root,40,2);
		break;
	case 7:
		height(root,&h);
		printf("\n Height:%d \n",h);
		break;
	case 8:
		i=count_leaf_nodes(root);
		printf("\n No of leaf nodes:%d \n",i);
		break;
	case 9:
		i=count_nonleaf_nodes(root);
		printf("\n No of nonleaf nodes:%d \n",i);
		break;
	case 10:
		exit(1);
	  }
Printf(“\n\t Do you want to continue??[y/n]”);
fflush(stdin);
scanf(“%c”,&ans);
	 }while(ans == ‘y’ || ans == ‘Y’);
	Printf(“\n\tEND OF THE PROGRAM”);
	}
	voiddelnode(TREE **root,intnum)
	{
	 TREE *parent,*x,*xsucc,*q,*t1,*c;	//definition of delnode//
	if(*root==NULL)
	 {
	printf("\n TREE IS EMPTY");
	return;
	 }
	parent=x=t1=NULL;
	 q=*root;
	while(q!=NULL)
	 {
	if(q->data==num)
	  {
	   x=q;
	break;
	  }
	if(q->data>num)
	  {
		parent=q;
		q=q->left;
	  }
	else
	  {
		parent=q;
		q=q->right;
	  }
	 }

	if(x==*root && x->right==NULL && x->left==NULL)/* if only root to be deleted */
		*root=NULL;

	 /* if the root to be deleted has no child */
	if(x->left==NULL && x->right==NULL)
	 {
	if(parent->right==x)
		parent->right=NULL;
	else
		parent->left=NULL;
	free(x);
	return;
	 }
	  /* if the root to be deleted has only rightchild or leftchild */
	if(x->left==NULL || x->right==NULL)
	 {
	if(x->left!=NULL)
	  {
		if(x==*root)
		{
		 *root=x->left;
		return;
		}
		c=x->left;
	  }
	else
	  {
		if(x==*root)
		{
		 *root=x->right;
		return;
		}
		c=x->right;
	  }
	if(parent->left==x)
		parent->left=c;
	else
		parent->right=c;
	return;
	 }
	if(x->left!=NULL && x->right!=NULL)
	 {
	  t1=x;
	xsucc=x->right;
	if(xsucc->left==NULL &&xsucc->right==NULL)/*if rightchild has no children*/
	  {
		x->data=xsucc->data;
		 x=xsucc;
		 t1->right=NULL;
		x->data=xsucc->data;
		return;
	  }
	while(xsucc->left!=NULL)
	  {
		t1=xsucc;
		xsucc=xsucc->left;
	  }
	  t1->left=xsucc->right;
	x->data=xsucc->data;
	return;
	 }
	}
	void preorder(TREE *root)
	{			//definition of preorder traversal//

	if(root!=NULL)
	 {
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
	 }
	}
	voidinorder(TREE *root)
	{				//definition of inorder traversal//
	if(root!=NULL)
	 {
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
	 }
	}

	voidpostorder(TREE *root)
	{			//definition of postorder traversal//
	if(root!=NULL)
	 {
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
	 }
	}

	void display(TREE *root,intcol,int row)
	{			//definition of display//
	if(root==NULL)
	return;
	gotoxy(col,row);
	printf("%d",root->data);
	display(root->left,col-(20/row),row+2);
	display(root->right,col+(20/row),row+2);
	}
	void height(TREE *root,int *h)
	{					//definition of height//
		inthl,hr;
		if(root==NULL)
			*h=0;
		else
		 {
			height(root->left,&hl);
			height(root->right,&hr);
			if(hl>hr)
			  *h=hl+1;
			else
			  *h=hr+1;
		  }
	  }
	intcount_leaf_nodes(TREE *root)
	  {				//definition of count_leaf_nodes//
		if(root==NULL)
		return(0);
		else if(root->left==NULL && root->right==NULL)
		return(1);
		else
		return(count_leaf_nodes(root->left) + count_leaf_nodes(root->right));
	  }

	intcount_nonleaf_nodes(TREE *root)
	  {				//definition of count non_leaf_nodes//

if((root==NULL) || (root->left==NULL && root->right==NULL))
		return(0);
		else
		return(count_nonleaf_nodes(root->left) + count_nonleaf_nodes(root->right)+1);
	  }
