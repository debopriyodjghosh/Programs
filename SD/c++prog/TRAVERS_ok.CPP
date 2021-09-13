/* Program for binary tree creation and display */

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

typedef struct node
{
  struct node *left,*right;
  char data;
}node;

node *getnode(char ch)
{
  node *ptr;
  ptr=(node*)malloc(sizeof(node));
  ptr->data=ch;
  ptr->left=ptr->right=NULL;
  return(ptr);
}

node *root;
void createtree()
{
  node *ptr,*queue[20];
  char ch;
  int front=0,rear=0;
  printf("Enter the root element ");
  fflush(stdin);
  scanf("%c",&ch);
  root=getnode(ch);
  queue[rear]=root;
  while(front<=rear)
  {
	 ptr=queue[front];
	 front=front+1;
	 printf("Enter the left element of %c(enter for null)",ptr->data);
	 fflush(stdin);
	 scanf("%c",&ch);
	 if(ch!='\n')
	 {
		ptr->left=getnode(ch);
		rear=rear+1;
		queue[rear]=ptr->left;
	 }
	 printf("Enter the right element of %c(enter for null)",ptr->data);
	 fflush(stdin);
	 scanf("%c",&ch);
	 if(ch!='\n')
	 {
		ptr->right=getnode(ch);
		rear=rear+1;
		queue[rear]=ptr->right;
	 }
  }//end of while
}//end of function
void displaytree()
{
  node *ptr,*queue[20];
  char ch;
  int front=0,rear=0;
  if(root==NULL)
  {
	 printf("Tree is not exist");
	 return;
  }
  queue[rear]=root;
  while(front<=rear)
  {
	 ptr=queue[front];
	 front=front+1;
	 printf(" %c",ptr->data);
	 if(ptr->left!=NULL)
	 {
		rear=rear+1;
		queue[rear]=ptr->left;
	 }
	 if(ptr->right!=NULL)
	 {
		rear=rear+1;
		queue[rear]=ptr->right;
	 }
  }//end of while
}//end of function
void preorder(node *root)
{
  if(root!=NULL)
  {
	 printf("  %c",root->data);
	 preorder(root->left);
	 preorder(root->right);
  }
}
void inorder(node *root)
{
  if(root!=NULL)
  {
	 inorder(root->left);
	 printf("  %c",root->data);
	 inorder(root->right);
  }
}
void postorder(node *root)
{
  if(root!=NULL)
  {
	 postorder(root->left);
	 postorder(root->right);
	 printf("  %c",root->data);
  }
}
void main()
{
  clrscr();
  createtree();
  printf("\n\nElements are in levelwise as follows.....\n");
  displaytree();
  printf("\n\n Preorder traversal.....\n");
  preorder(root);
  printf("\n\nInorder traversal is.....\n");
  inorder(root);
  printf("\n\n Postorder traversal is....\n");
  postorder(root);
  getch();
}

