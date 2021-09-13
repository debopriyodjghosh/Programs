#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
# define null 0
struct node
{
 struct node *left;
 int info;
 struct node *right;
};
void addlist(struct node **h1,struct node **h2,int x);
struct node *getnode(int x);
void displaylist(struct node **h1);
void insertatbeg(struct node **h1,int x);
void insertatend(struct node **h2,int x);
void delatbeg(struct node **h1);
void delatend(struct node **h2);
void delatmid(struct node **h1,struct node **h2,int pos);
void insertatmid(struct node **h1,struct node **h2,int pos,int x);
void main()
{
   struct node *head1,*head2;
   int x,ch,pos;
   head1=null;
   head2=null;
   do
   {
    clrscr();
    printf("\n\n\t\t\tMENU");
    printf("\n\t\t     -----------");
    printf("\n\n\t\t1.Create Doubly Linked List\n\n\t\t2.Display Doubly Linked List\n\n\t\t3.Insert Data At Begining Into Doubly Linked List\n\n\t\t4.Insert Data At End Into Doubly Linked List\n\n\t\t5.Insert Data At Middle Into Doubly Linked List\n\n\t\t6.Delete Data From Begining\n\n\t\t7.Delete Data From End\n\n\t\t8.Delete Data From Middle\n\n\t\t9.EXIT");
    printf("\n\n\t\tEnter your choice:");
    scanf("%d",&ch);
     switch(ch)
     {
      case 1:
	     clrscr();
	     printf("\n\n\t\tWelcome To Create DOUBLY LINKED LIST");
	     printf("\n\n\t\tEnter a value(-999 to stop):");
	     scanf("%d",&x);
	     while(x!=-999)
	     {
	      addlist(&head1,&head2,x);
	      printf("\n\n\t\tEnter a value(-999 to stop):");
	      scanf("%d",&x);
	     }
       break;
       case 2:
	     clrscr();
	     if(head1==null||head2==null)
	     printf("\n\n\t\tTHE DOUBLY LINKED LIST DOES'NT EXIST");
	     else
	     displaylist(&head1);
	     getch();
       break;
       case 3:
	     clrscr();
	     if(head1==null||head2==null)
	     printf("\n\n\t\tTHE DOUBLY LINKED LIST DOES'NT EXIST");
	     else
	     {
	     printf("\n\n\t\tEnter the data you want to insert at begining:");
	     scanf("%d",&x);
	     insertatbeg(&head1,x);
	     printf("\n\n\t\tOne Data Is Succesfully Inserted Into Doubly Linked List");
	     }
	     getch();
       break;
       case 4:
	     clrscr();
	     if(head1==null||head2==null)
	     printf("\n\n\t\tTHE DOUBLY LINKED LIST DOES'NT EXIST");
	     else
	     {
	      printf("\n\n\t\tEnter the data you want to insert at end:");
	      scanf("%d",&x);
	      insertatend(&head2,x);
	      printf("\n\n\t\tOne Data Is Succesfully Inserted Into Doubly Linked List");
	     }
	     getch();
       break;
       case 5:
	     clrscr();
	     if(head1==null||head2==null)
	     printf("\n\n\t\tTHE DOUBLY LINKED LIST DOESN'T EXIST");
	     else
	     {
	       printf("\n\n\t\tEnter the positon of the data to be inserted:");
	       scanf("%d",&pos);
	       printf("\n\n\t\tEnter the value:");
	       scanf("%d",&x);
	       insertatmid(&head1,&head2,pos,x);
	      }
	      getch();
       break;
       case 6:
	     clrscr();
	     if(head1==null||head2==null)
	     printf("\n\n\t\tTHE DOUBLY LINKED LIST DOESN'T EXIST");
	     else
	     {
	      delatbeg(&head1);
	      printf("\n\n\t\tThe first data is succesfully deleted from DOUBLY LINKED LIST");
	     }
	     getch();
       break;
       case 7:
	     clrscr();
	     if(head2==null||head1==null)
	     printf("\n\n\t\tTHE DOUBLY LINKED LIST DOESN'T EXIST");
	     else
	     {
	      delatend(&head2);
	      printf("\n\n\t\tThe last data is succesfully deleted from DOUBLY LINKED LIST");
	     }
	     getch();
       break;
       case 8:
	     clrscr();
	     if(head1==null||head2==null)
	     printf("\n\n\t\tTHE DOUBLY LINKED LIST DOESN'T EXIST");
	     else
	     {
	      printf("\n\n\t\tEnter the position of the data to be deleted:");
	      scanf("%d",&pos);
	      delatmid(&head1,&head2,pos);
	     }
	     getch();
       break;
       case 9:
	     exit(0);
       default:
	     printf("\n\n\t\tYOU ENTER WRONG KEY PLEASE RE-ENTER");
	     getch();
     }/* end of switch */
   }while(1);
}/* End of main */
void addlist(struct node **h1,struct node **h2,int x)
{
 struct node *new1;
 new1=getnode(x);
 if(*h1==null)
 {
  *h1=new1;
  *h2=new1;
 }
 else
 {
  (*h2)->right=new1;
  new1->left=*h2;
  (*h2)=new1;
 }
}
struct node *getnode(int x)
{
 struct node *new1;
 new1=(struct node*)malloc(sizeof(struct node));
 new1->left=null;
 new1->right=null;
 new1->info=x;
 return(new1);
}
void displaylist(struct node **h1)
{
 struct node *ptr;
 ptr=*h1;
 printf("\n\n\t\tTHE DOUBLY LINKED LIST ARE:");
 while(ptr!=null)
 {
  printf("  %d",ptr->info);
  ptr=ptr->right;
 }
}
void insertatbeg(struct node **h1,int x)
{
 struct node *new1;
 new1=getnode(x);
 (*h1)->left=new1;
 new1->right=*h1;
 (*h1)=new1;
}
void insertatend(struct node **h2,int x)
{
 struct node *new1;
 new1=getnode(x);
 (*h2)->right=new1;
 new1->left=*h2;
 (*h2)=new1;
}
void delatbeg(struct node **h1)
{
  struct node *ptr;
  ptr=*h1;
  *h1=(*h1)->right;
  (*h1)->left=null;
  free(ptr);
}
void delatend(struct node **h2)
{
 struct node *ptr;
 ptr=*h2;
 *h2=(*h2)->left;
 (*h2)->right=null;
 free(ptr);
}
void delatmid(struct node **h1,struct node **h2,int pos)
{
 struct node *ptr1,*ptr2,*ptr3,*ptr4,*ptr5,*ptr6;
 int count=1,co=0,flag=0;
 ptr1=ptr2=*h1;
 ptr3=ptr4=*h2;
 while(ptr1!=null)
 {
  ptr1=ptr1->right;
  co++;
  }
  if(pos==1)
  delatbeg(h1);
  if(pos==co)
  {
  delatend(h2);
  printf("\n\n\t\tThe %d-th node deleted succesfully",pos);
  flag=1;
  }
  while(ptr2->right!=null&&co!=pos&&count!=pos)
  {
   ptr1=ptr2;
   ptr2=ptr2->right;
   count++;
   ptr3=ptr4;
   ptr4=ptr4->left;
   co--;
  }
  if(co!=pos&&count!=pos)
  printf("\n\n\t\tThe %d-th node doesn't exist:deletion unsuccesfull",pos);
  else
  {
   if(count==pos)
   {
    ptr1->right=ptr2->right;
    ptr5=ptr2;
    ptr2=ptr2->right;
    ptr2->left=ptr1;
    free(ptr5);
    printf("\n\n\t\tThe %d-th node deleted succesfully",pos);
   }
   if(flag==0)
   {
    ptr3->left=ptr4->left;
    ptr6=ptr4;
    ptr4=ptr4->left;
    ptr4->right=ptr3;
    free(ptr6);
    printf("\n\n\t\tThe %d-th node deleted succesfully",pos);
   }
  }/* end of else */
}
void insertatmid(struct node **h1,struct node **h2,int pos,int x)
{
   struct node *ptr1,*ptr2,*ptr3,*ptr4,*ptr5,*ptr6,*new1;
   int count=1,co=0,flag=0;
   clrscr();
   ptr1=ptr2=*h1;
   ptr3=ptr4=*h2;
   while(ptr1!=null)
   {
    ptr1=ptr1->right;
    co++;
   }
   new1=getnode(x);
   if(pos==1)
   {
   insertatbeg(h1,x);
   printf("\n\n\t\t%d is succesfully inserted at the %d-th position",x,pos);
   }
   if(pos==co)
   {
    insertatend(h2,x);
    printf("\n\n\t\t%d is succesfully inserted at the %d-th position",x,pos);
    flag=1;
   }
   while(ptr2->right!=null&&count!=pos&&co!=pos-1)
   {
    ptr1=ptr2;
    ptr2=ptr2->right;
    count++;
    ptr3=ptr4;
    ptr4=ptr4->left;
    co--;
   }
   if(co!=pos-1&&count!=pos)
   printf("\n\n\t\tInsertion Unsuccesfull");
   else
   {
    if(count==pos)
    {
     ptr1->right=new1;
     ptr2->left=new1;
     ptr5=ptr1;
     ptr1=ptr1->right;
     ptr1->left=ptr5;
     ptr1->right=ptr2;
     printf("\n\n\t\t%d is succesfully inserted at the %d-th position",x,pos);
     flag=1;
    }
    if(flag==0)
    {
     ptr4->right=new1;
     ptr3->left=new1;
     ptr6=ptr4;
     ptr4=ptr4->right;
     ptr4->left=ptr6;
     ptr4->right=ptr3;
     printf("\n\n\t\t%d is succesfully inserted at the %d-th position",x,pos);
    }
   }/* end of else */
}