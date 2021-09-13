#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct tree
{
	int key;
	struct tree *left;
	struct tree *right;
};

typedef struct tree tree;

void create(tree *root);
void preorder(tree *root);
void inorder(tree *root);
void postorder(tree *root);


main()
{
  int c;
  tree* root;
  root=(tree*) malloc(sizeof(tree));
  do
  {
	 printf("\n 1. create ");
	 printf("\n 2. pre-order");
	 printf("\n 3. in-order");
	 printf("\n 4. post-order");
	 printf("\n 5. exit");
	 printf("\n Enter your choice?");
	 scanf("%d",&c);
	 switch(c)
	 {
	  case 1:
	  create(root);
	  break;
	  case 2:
		preorder(root);
		break;
	  case 3:
		 inorder(root);
		 break;
	  case 4:
		postorder(root);
	  break;
	  }
	}while(c!=5);
}

void create(tree *root)
{
	char u;
	fflush(stdin);
	printf("\n Key :");
	scanf("%c",&root->key);

	fflush(stdin);
	printf("\n Do you want to add left child of %c :",root->key);
	scanf("%c",&u);
	if(u=='y' || u=='Y')
	{
		root->left=(tree*) malloc(sizeof(tree));
		create(root->left);
	}
	else
	{
	  root->left=NULL;
	}
	fflush(stdin);
	printf("\n Do you want to add right child of %d :",root->key);
	scanf("%c",&u);
	if(u=='y' || u=='Y')
	{
		root->right=(tree*) malloc(sizeof(tree));
		create(root->right);
	}
	else
	{
	  root->right=NULL;
	}
}

void preorder(tree *root)

{
	 if(root!=NULL)
	 {
		 printf("%c",root->key);
		 preorder(root->left);
		 preorder(root->right);
	 }
}

void inorder(tree *root)
{
	 if(root!=NULL)
	 {
		 inorder(root->left);
		 printf("%c",root->key);
		 inorder(root->right);
	 }
}

void postorder(tree *root)
{
	 if(root!=NULL)
	 {
         postorder(root->left);
		 postorder(root->right);
		 printf("%c",root->key);
	 }
}
