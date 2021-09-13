#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define null 0
struct node
{
  int info;
  struct node *next;
};
void addlist(struct node **h,int x);
void displaylist(struct node**h);
struct node *getnode(int x);
void insertatbeg(struct node **h,int x);
void insertatmid(struct node **h,int x,int pos);
void insertatend(struct node **h,int x);
void delatbeg(struct node **h);
void delatmid(struct node **h, int pos);
void delatend(struct node **h);
int main()
{
  struct node *head;
  int x;
  int n;
  int pos;
  //clrscr();
  head=null;
  while(1)
{
  //clrscr();
  printf("\n\n\t\t1.CREATE LINKED LIST\n\n\t\t2.DISPLAY LINKED LIST\n\n\t\t3.INSERT DATA AT BEGINING\n\n\t\t4.INSERT DATA AT MIDDLE\n\n\t\t5.INSERT DATA AT END\n\n\t\t6.DELETE AT BEGINING\n\n\t\t7.DELETE AT MIDDLE\n\n\t\t8.DELETE AT END\n\n\t\t9.EXIT");
  printf("\n\n\t\tEnter your choice:");
  scanf("%d",&n);

  switch(n)
  {
  case 1:
  printf("\n\n\t\tEnter value(-999 to stop):");
  scanf("%d",&x);
  while(x!=-999)
  {
   addlist(&head,x);
   printf("\n\n\t\tEnter value(-999 to stop):");
   scanf("%d",&x);
   }
  break;
  case 2:
  if(head==null)
  {
     printf("\n\n\t\tTHE LINKED LIST DOESN'T EXIST");
  }
  else
  displaylist(&head);
  getch();
  break;
  case 3:
  if(head==null)
  {
    printf("\n\n\t\tTHE LINKED LIST DOESN'T EXIST");
  }
  else
  {
  printf("\n\n\t\tEnter the data you want to insert at begining:");
  scanf("%d",&x);
  insertatbeg(&head,x);
  displaylist(&head);
  }
  getch();
  break;
  case 4:
   if(head==null)
  {
    printf("\n\n\t\tTHE LINKED LIST DOESN'T EXIST");

  }
  else
  {
  printf("\n\n\t\tEnter the data you want to insert:");
  scanf("%d",&x);
  printf("\n\n\t\tEnter the position of the data:");
  scanf("%d",&pos);
  insertatmid(&head,x,pos);
  displaylist(&head);
  }
  getch();

  break;
  case 5:
   if(head==null)
  {
    printf("\n\n\t\tTHE LINKED LIST DOESN'T EXIST");

  }
  else
  {
  printf("\n\n\t\tEnter the data you want to insert at end:");
  scanf("%d",&x);
  insertatend(&head,x);
  displaylist(&head);
  }
  getch();

  break;
  case 6:
   if(head==null)
  {
    printf("\n\n\t\tTHE LINKED LIST DOESN'T EXIST");

  }
  else
  {
  delatbeg(&head);
  printf("\n\n\t\tThe first data is successfully deleted from the linked list");
  displaylist(&head);
  }
  getch();

  break;
  case 7:
   if(head==null)
  {
    printf("\n\n\t\tTHE LINKED LIST DOESN'T EXIST");

  }
  else
  {
  printf("\n\n\t\tEnter the position of the data to be deleted:");
  scanf("%d",&pos);
  delatmid(&head,pos);
  displaylist(&head);
  }
  getch();

  break;
  case 8:
   if(head==null)
  {
    printf("\n\n\t\tTHE LINKED LIST DOESN'T EXIST");

  }
  else
  {
  delatend(&head);
  printf("\n\n\t\tThe last data is successfully deleted from the linked list");
  displaylist(&head);
  }
  getch();

  break;
  case 9:
      exit(0);
  default:
      printf("\n\n\t\tYou press wrong key please re-enter");
      getch();
  }
}
}
void addlist(struct node **h,int x)
{
   struct node *new1,*ptr;
   new1=getnode(x);
   if(*h==null)
   *h=new1;
   else
     {
       ptr=*h;
       while(ptr->next!=null)
       {
	 ptr=ptr->next;
       }
       ptr->next=new1;
     }
}
void displaylist(struct node **h)
{
    struct node *ptr;
    ptr=*h;
    printf("\n\n\t\tTHE LINKED LIST ARE:");
    printf("\n\n\t\t");
    while(ptr!=null)
    {
      printf("\t%d",ptr->info);
      ptr=ptr->next;
    }
}
struct node *getnode(int x)
{
   struct node *new1;
   new1=(struct node*)malloc(sizeof(struct node));
   new1->info=x;
   new1->next=null;
   return(new1);
}
void insertatbeg(struct node **h,int x)
{
  struct node *new1;
  new1=getnode(x);
  new1->next=*h;
  *h=new1;
}
void insertatmid(struct node **h,int x,int pos)
{
   int count=1;
   struct node *new1,*ptr;
   new1=getnode(x);
   ptr=*h;
   while(count< pos-1&&ptr->next!=null)
   {
      ptr=ptr->next;
      count++;
   }
   new1->next=ptr->next;
   ptr->next=new1;
}
void insertatend(struct node **h,int x)
{
   struct node *new1,*ptr;
   new1=getnode(x);
   ptr=*h;
   while(ptr->next!=null)
   {
      ptr=ptr->next;
   }
   ptr->next=new1;
}
void delatbeg(struct node **h)
{
   struct node *ptr;
   ptr=*h;
   *h=(*h)->next;
   free(ptr);
}
void delatmid(struct node **h,int pos)
{
   struct node *ptr1,*ptr2;
   int count=1;
   if(pos==1)
   delatbeg(h);
   else
   {
   ptr1=ptr2=*h;
   while(count!=pos&&ptr2->next!=null)
   {
     ptr1=ptr2;
     ptr2=ptr2->next;
     count++;
   }
   }
  if(count!=pos)
  printf("\n\n\t\tThis %d-th node does not exist-deletion unsuccessfull",pos);
  else
  {
     printf("\n\n\t\tThe %d-th data is successfully deleted from the linked list",pos);
     ptr1->next=ptr2->next;
     free(ptr2);
  }
}
void delatend(struct node **h)
{
  struct node *ptr1,*ptr2;
  ptr1=ptr2=*h;
  while(ptr2->next!=null)
  {
     ptr1=ptr2;
     ptr2=ptr2->next;
  }
  ptr1->next=null;
  free(ptr2);
}
