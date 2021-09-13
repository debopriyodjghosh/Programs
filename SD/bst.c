
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct node
  {
	int data;
	struct node *left;
	struct node *right;
  }NODE;

NODE* getnode(int);
  void maketree(NODE**,NODE*);
  void delnode(NODE**,int);
  void pretrave(NODE*);
  void intrave(NODE*);
  void postrave(NODE*);

void main()
 {
  NODE *root=NULL;
  int choice,item;
  NODE *n;
  do
  {
	clrscr();
	printf("\nmenu for tree operation");
	printf("\nenter 1 for node insertion");
	printf("\nenter 2 for deletion");
	printf("\nenter 3 for pre-traversal");
	printf("\nenter 4 for intraversal");
	printf("\n5 for postrave");
	printf("\n 0 for exit");
	printf("\n enter your choice");
	scanf("%d",&choice);
	if(choice<0 && choice>5)
		continue;
	switch(choice)
		{
		 case 1:printf("\nenter the item u want to insert");
				  scanf("%d",&item);
				  n=getnode(item);
				  maketree(&root,n);
				  //getch();
				  break;

		 case 2:printf("enter elemant u want to delet");
				  scanf("%d",&item);
				  delnode(&root,item);
				  //getch();
				  break;


		  case 3:pretrave(root);
					getch();
					break;


		 case 4:intrave(root);
				  getch();
				  break;


		 case 5:postrave(root);
				  getch();
				  break;

		}
	  }while(choice!=0);
}



 NODE* getnode(int item)
  {
	NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=item;
	temp->left=NULL;
	temp->right=NULL;
	return(temp);
  }

 void maketree(NODE **root,NODE *n)
  {
	if(*root==NULL)
	  *root=n;
	else if((*root)->data>n->data)
		maketree(&((*root)->left),n);
	else if((*root)->data<n->data)
		maketree(&((*root)->right),n);

  }



void delnode(NODE **root,int item)
  {
	static NODE *par=NULL;
	NODE *p;
	if(*root==NULL)
	  return;
	if((*root)->data>item)
	  {
		par=*root;
		delnode(&(*root)->left,item);
	  }
	 else	if((*root)->data<item )
	  {
		par=*root;
		delnode(&(*root)->right,item);
	  }
	  else
	  {
		if((*root)->left!=NULL && (*root)->right!=NULL)
		  {
			p=(*root)->right;
			while(p && p->left)
				{
				 par=p;
				 p=p->left;
				}
			(*root)->data=p->data;
			delnode(&p,p->data);
		  }
		  else if((*root)->left)
		  {
			(*root)->data=(*root)->left->data;
			par=(*root);
			delnode(&((*root)->left),(*root)->left->data);
		 }
		 else if((*root)->right)
		{
		  (*root)->data=(*root)->right->data;
			par=(*root);
			 delnode(&((*root)->right),(*root)->right->data);
		}
		else
		{
		 if(par->left==*root)
			par->left=NULL;
		 else if(par->right==*root)
			 par->right=NULL;
		  free(*root);
		}
	}
}




void pretrave(NODE *root)
 {
  if(root)
	{
	 printf("%d\t",root->data);
	 pretrave(root->left);
	 pretrave(root->right);
	}
}
void intrave(NODE *root)
 {
  if(root)
	{
	 intrave(root->left);
	 printf("%d\t",root->data);
	 intrave(root->right);
	}
}

 void postrave(NODE *root)
  {
	if(root)
	{
		postrave(root->left);
		postrave(root->right);
		printf("%d\t",root->data);
	}

}
