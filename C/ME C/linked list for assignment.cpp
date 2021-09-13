#include<stdio.h>						// header file declaration//
#include<stdlib.h>
struct node							// definition of structure //
{
	int data;						
	struct node *next;
};
typedef struct node node;
node* insert_begin(node *f);
void insert_between(node *f);
node* insert_end(node *f);
node* delete_begin(node *f);		// prototype declaration //
node* del_between(node *f);
node* del_end(node *f);
void list(node *f);
int main()
{
	node *f=NULL;
	int s;						 //integer variable declaration//
	char ch='y';               //character variable declaration//
	printf("\t\t*** Some possible operations on linked list ***");
	do
	{
		printf("\n\n MENU:  1.Insert at begin\n\t2.Insert at any position\n\t3.Insert at end\n\t4.Delete from begin\n\t5.Delete from any position\n\t6.Delete from end\n\t7.list");
		printf("\n Enter your choice: ");		//choice from user//
		scanf("%d",&s);
		switch(s)
		{
			case 1:
				  f=insert_begin(f);			//function call//
				  list(f);						//function call//
				  break;
			case 2:
				  insert_between(f);			//function call//
				  if(f!=NULL)
					list(f);					//function call//
				  break;
			case 3:
				  f=insert_end(f);				//function call//
				  list(f);						//function call//
				  break;
			case 4:
				  f=delete_begin(f);			//function call//
				  if(f!=NULL)
					list(f);					//function call//
				  break;
			case 5:
				  f=del_between(f);				//function call//
				  if(f!=NULL)
					 list(f);					//function call//
				  break;
			case 6:
				  f=del_end(f);					//function call//
				  if(f!=NULL)
					list(f);					//function call//
				  break;
			case 7:
				  if(f!=NULL)
						list(f);				//function call//
				  else
						printf("\n List is empty..");
				  break;
			default:
				  printf("\n Invalid input..");
		}
		printf("\n\n\t do you want to continue (y/n)?");
		fflush(stdin);
		scanf("%c",&ch);						// continuation loop//
	} while((ch=='y')||(ch=='Y'));
	printf("\n\t***THANK YOU***");
	return 0;
}
node* insert_begin(node *f)				//definition of insert_begin function //
{
	node *cur;
	cur=(node*)malloc(sizeof(node));
	printf("\n data: ");
	scanf("%d",&cur->data);
	 cur->next=f;
	 f=cur;
	return f;
}
void insert_between(node *f)		//definition of insert_between function //
{
	node *c,*cur;
	int i,p;
	cur=(node*)malloc(sizeof(node));
	printf("\n data: ");
	scanf("%d",&cur->data);
	cur->next=NULL;
	printf("\n position : ");
	scanf("%d",&p);
	i=0;
	for(c=f;c!=NULL;c=c->next)
	{
		i++;
		if(i==p-1)
		{
			cur->next=c->next;
			c->next=cur;
			return;
		}
	}
	printf("\n Position does not exist..");
	return;
}
node* insert_end(node *f)				//definition of insert_end function //
{
	node *c,*cur;
	cur=(node*)malloc(sizeof(node));
	printf("\n data: ");
	scanf("%d",&cur->data);
	cur->next=NULL;
	if(f==NULL)
	{
		f=cur;
		return f;
	}
	for(c=f;c->next!=NULL;c=c->next);
	c->next=cur;
	return f;
}
node* delete_begin(node *f)			//definition of delete_begin function //
{
	node *t;
	if(f==NULL)
	{
		printf("\n Deletion is not possible,list is empty..");
		return f;
	}
	if(f->next==NULL)
	{
		f=NULL;
		printf("\n Now all nodes are deleted");
		return f;
	}
	t=f;
	f=f->next;
	free(t);
	return f;
}
node* del_between(node *f)				//definition of del_between function //
{
	node *c,*t;
   int i,p;
	if(f==NULL)
	{
		printf("\n Deletion is not possible,list is empty..");
		return f;
	}
	 if(f->next==NULL)
	{
		f=NULL;
		printf("\n Now all nodes are deleted");
		return f;
	}
	printf("\n position: ");
	scanf("%d",&p);
	if(p==1)
	{
		t=f;
		f=f->next;
		free(t);
		return f;
	}
	i=0;
	for(c=f;c->next!=NULL;c=c->next)
	{
		i++;
		if(i==p-1)
		{
			t=c->next;
			c->next=t->next;
			free(t);
			return f;
		}
	}
	printf("\n Invalid position..");
	return f;
}
node* del_end(node *f)					//definition of del_end function //
{
		node *t,*c;
		if(f==NULL)
		{
			printf("\n Deletion is not possible,list is empty..");
			return 0;
		}
		if(f->next==NULL)
		{
			f=NULL;
			printf("\n Now all nodes are deleted");
			return f;
		}
		for(c=f;c->next!=NULL;c=c->next)
		{
			t=c;
		}
		t->next=NULL;
		return f;
}
void list(node *f)						//definition of list function //
{
	node *c;
	int i=0;
	printf("\n The list is->");
	for(c=f;c!=NULL;c=c->next)
	{
		printf("%5d",c->data);
		i++;
	}
	printf("\n count nodes= %d",i);
}




/* OUTPUT


                *** Some possible operations on linked list ***

 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 7

 list is empty..

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 5

 Deletion is not possible,list is empty..

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 3

 data: 55

 The list is->   55
 count nodes= 1

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 2

 data: 99

 position : 5

 Position does not exist..
 The list is->   55
 count nodes= 1

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 1

 data: 45

 The list is->   45   55
 count nodes= 2

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 3

 data: 66

 The list is->   45   55   66
 count nodes= 3

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 2

 data: 99

 position : 2

 The list is->   45   99   55   66
 count nodes= 4

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 5

 position: 6

 Invalid position..
 The list is->   45   99   55   66
 count nodes= 4

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 5

 position: 3

 The list is->   45   99   66
 count nodes= 3

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 6

 The list is->   45   99
 count nodes= 2

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 4

 The list is->   99
 count nodes= 1

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 6

 Now all nodes are deleted

         do you want to continue (y/n)?y


 MENU:  1.Insert at begin
        2.Insert at any position
        3.Insert at end
        4.Delete from begin
        5.Delete from any position
        6.Delete from end
        7.list
 Enter your choice: 5

 Deletion is not possible,list is empty..

         do you want to continue (y/n)?n

        ***THANK YOU***
*/
