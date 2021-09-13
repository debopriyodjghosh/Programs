/*Implementation of stack operation using linked list*/
#include<stdio.h>     //header file inclusion
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
}; 						//end of structure
typedef struct stack stack;
stack *top=NULL;            //global declaration 
stack *push(stack *,int);   //function declaration
stack *display(stack *);
stack *pop(stack *);
void main()
{
	int s,val;          // variable declaration
	char ans;
	clrscr();
	do
	{
		printf("\n\t *** Implementation Of Stack Operation Using Linked List ***");
		printf("\n\n\t MENU: \n\t1.PUSH\n\t2.POP \n\t3.DISPLAY \n");
		printf("\n\t Enter Your Choice:: ");    //input from user
		scanf("%d",&s);
		switch(s)
		{
			case 1:
					  printf("\n Enter the number to be pushed on to the stack: ");
					  scanf("%d",&val);
					  top=push(top,val);       //function call
					  break;
			case 2:
					  top=pop(top);
					  break;
			case 3:
					  top=display(top);
					  break;
			default:
				printf("\n\t WRONG INPUT !!!");
		}
		printf("\n\n\t Do You Want To Continue(y/Y)? "); //asking for continuation
		fflush(stdin);
		scanf("%c",&ans);
	}while((ans=='y')||(ans=='Y'));
	printf("\n\n\t\t ....End of Program....");
	getch();
}
//definition of the function push
stack *push(stack *top,int val)
{
	stack *ptr;
	ptr=(stack*)malloc(sizeof(stack*));   //dynamic memory allocation
	ptr->data=val;
	if(top==NULL)
	{
		top=ptr;
		top->next=NULL;
	}
	else
	{
		ptr->next=top;
		top=ptr;
	}
	return top;
}
//definition of the function pop
stack *pop(stack *top)
{
	stack *ptr;
	ptr=top;
	if(top==NULL)
	{
		printf("\n STACK UNDERFLOW");
	}
	else
	{
		top=top->next;
		printf("\n The value being deleted is: %d",ptr->data);   //output to user
		free(ptr);
	}
	return top;
}
//definition of the function display
stack *display(stack *top)
{
	stack *ptr;
	ptr=top;
	if(top==NULL)
	{
		printf("\n STACK IS EMPTY");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("\n %d",ptr->data);   //display the elements
			ptr=ptr->next;
		}
	}
	return top;
}

/*

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 1

 Enter the number to be pushed on to the stack: 5


         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 1

 Enter the number to be pushed on to the stack: 10


         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 1

 Enter the number to be pushed on to the stack: 15


         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 1

 Enter the number to be pushed on to the stack: 20


         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 1

 Enter the number to be pushed on to the stack: 25


         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 3

 25
 20
 15
 10
 5

         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 2

 The value being deleted is: 25

         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 2

 The value being deleted is: 20

         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 2

 The value being deleted is: 15

         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 2

 The value being deleted is: 10

         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 2

 The value being deleted is: 5

			Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 2

 STACK UNDERFLOW

         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 3

 STACK IS EMPTY

         Do You Want To Continue(y/Y)? y

         *** Implementation Of Stack Operation Using Linked List ***

         MENU:
        1.PUSH
        2.POP
        3.DISPLAY

         Enter Your Choice:: 5

         WRONG INPUT !!!

         Do You Want To Continue(y/Y)? n


                 ....End of Program....

*/
