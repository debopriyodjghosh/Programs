#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Tree
{
	struct Tree *left;
	int value;
	struct Tree *right;
}bst;
void insert(bst **,int);
void inorder(bst *);
void preorder(bst *);
void postorder(bst *);
void delet(bst **,int);
void search(bst **,int,bst **,bst **,int *);
void main()
{
	bst *root=NULL,*parent=NULL,*current=NULL;
	int x, choice, target, found;
	char ch;
	while (1)
	{
		printf("\n\n1.Create Binary Search Tree (Press 1)\n\
       		               \n2.Inorder Traverse (Press 2)\n\
		               \n3.Preorder Traverse (Press 3)\n\
		               \n4.Postorder Traverse (Press 4)\n\
		               \n5.Delete Node (Press 5)\n\
		               \n6.Search (Press 6)\n\
		               \n7.EXIT (Press 7)\n\
		                        \nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				while(1)
					{       ch=getchar();
						printf("\nDo you want to insert data in tree(Y/N)? ");
						ch=getc(stdin);
						printf("Your Choice is: %c ",ch);
						if((ch=='Y')||(ch=='y'))
						{
							printf("\nEnter the value  : ");
							scanf("%d",&x);
							insert(&root,x);
						}
						else
							break;
					}
					break;
			case 2: printf("\nThe inorder display is :  ");
					inorder(root);
					break;
			case 3: printf("\nThe preorder display is :  ");
					preorder(root);
					break;
			case 4: printf("\nThe postorder display is :  ");
					postorder(root);
					break;
			case 5: printf("\nWhich value do you want to delete?  ");
					scanf("%d",&target);
					printf("The target =%d",target);
					delet(&root,target);
					break;
			case 6: printf("\nWhich value do you want to search?  ");
					scanf("%d",&target);
					search(&root,target,&parent,&current,&found);
					if(found!=1)
						printf("Target value not found.\n");
					break;
			case 7: exit(0);
		}
	}
}
void insert(bst **rt,int val)
{
	if(*rt==NULL)
	{
		*rt=(bst*)malloc(sizeof(bst));
		(*rt)->value=val;
		(*rt)->left=(*rt)->right=NULL;
	}
	else
	{
		if(val<(*rt)->value)
			insert(&((*rt)->left),val);
		else if(val>(*rt)->value)
			insert(&((*rt)->right),val);
		else
			printf("\nDuplicate data !\n");
	}
}
void inorder(bst *node)
{
	if(node!=NULL)
	{
		inorder(node->left);
		printf("%d --> ",node->value);
		inorder(node->right);
	}
}
void preorder(bst *node)
{
	if(node!=NULL)
	{
		printf("%d --> ",node->value);
		preorder(node->left);
		preorder(node->right);
	}
}
void postorder(bst *node)
{
	if(node!=NULL)
	{
		postorder(node->left);
		postorder(node->right);
		printf("%d --> ",node->value);
	}
}

void delet(bst **rt,int target)
{
	bst *parent,*current,*succ,*header;
	int found;
	succ=*rt;
	parent=current=NULL;
	if(*rt==NULL)
	{
		printf("\nTree does not exists !\n");
		return;
	}
	search(&(*rt),target,&parent,&current,&found);
	if(found==0)
	{
		printf("\nTarget is not found !\n");
		return;
	}
	if(found==1)
	{
		if(current->left!=NULL && current->right!=NULL) // HAS BOTH CHILD
		{
			parent=current;
			succ=current->right;
			while(succ->left!=NULL)
			{
				parent=succ;
				succ=succ->left;
			}
			current->value=succ->value;
			current=succ;
		}
		if(current->left==NULL && current->right==NULL)// HAS NO CHILD
		{
			if(parent==NULL)
			{
				*rt=NULL;
				free(current);
				free(parent);
				return;
			}
			if(parent->left==current)
				parent->left=NULL;
			else
				parent->right=NULL;
			free(current);
			return;
		}
		if(current->left!=NULL && current->right==NULL)
		{
			if(parent->left==current)
				parent->left=current->left;
			else
				parent->right=current->left;
			free(current);
			return;
		}
		if(current->left==NULL && current->right!=NULL)
		{
			if(parent->left==current)
				parent->left=current->right;
			else
				parent->right=current->right;
			free(current);
			return;
		}
	}
}
void search(bst **rt,int target,bst **parent,bst **current,int *found)
{
	bst *temp;
	temp=*rt;
	*found=0;
	*parent=NULL;
	while(temp!=NULL)
	{
		if(temp->value==target)
		{
			*found=1;
			printf("\nTarget Value found.\n");
			*current=temp;
			return;
		}
		if(temp->value>target)
			{
				*parent=temp;
				temp=temp->left;
			}
		else
			{
				*parent=temp;
				temp=temp->right;
			}
	}
}
