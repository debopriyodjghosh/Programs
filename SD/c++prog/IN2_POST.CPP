/* 		         surya rules			*/

/* converting an infix expression to postfix expression	*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"
#include"ctype.h"


struct stack
{
	char data;
	struct stack *next;
};

void push(struct stack **top,char item)
{
	struct stack *temp;
	temp=(struct stack *)malloc(sizeof(struct stack));
	temp->data=item;
	temp->next=*top;
	*top=temp;
}


char pop(struct stack **top)
{
	char item;
	struct stack *temp;

	if(*top == NULL)
	{
		printf("stack is empty");

	}
	else
	{
		temp=*top;
		item=temp->data;
		(*top)=temp->next;
		free(temp);
		return(item);
	}

	return('\0');
}


void main()
{

	char *infix="a+(b*c-(d/e$f)*g)*h";char postfix[100];
	char operator_;
	int i=0,j=0;
	struct stack *top;
	top=NULL;

	clrscr();
	printf("enter an infix expression: ");
	puts(infix);

	push(&top,'(');

	infix[strlen(infix)]=')';

	while(top != NULL)
	{
		if(isalpha(infix[i]))
		{
			printf("infix[%d]= %c	",i,infix[i]);printf("postfix[%d]= %c \n",j,postfix[j]);getch();
			postfix[j++]=infix[i];

		}

		else if(infix[i]=='(')
		{
			push(&top,'(');
		}

		else
		{
			if(infix[i]=='$')
			{
				while(top->data=='$')
				{
					operator_=pop(&top);
					printf("infix[%d]= %c	",i,infix[i]);printf("postfix[%d]= %c \n",j,postfix[j]);getch();
					postfix[j++]=operator_;

				}
			}

			if(infix[i]=='+' || infix[i]=='-')
			{
				while(top->data !=  '(' )
				{
					operator_=pop(&top);
					printf("infix[%d]= %c	",i,infix[i]);printf("postfix[%d]= %c \n",j,postfix[j]);getch();
					postfix[j++]=operator_;
									}
			}

			if(infix[i]=='*' || infix[i]=='/' )
			{

				while(top->data!='+' &&   top->data!='-' && top->data!='(')
				{
					operator_=pop(&top);

					printf("infix[%d]= %c	",i,infix[i]);printf("postfix[%d]= %c \n",j,postfix[j]);getch();
					postfix[j++]=operator_;

				}
			}

			if(infix[i]!=')') push(&top,infix[i]);

		}


		if(infix[i]==')')
		{
			while(top->data!='(')
			{
				operator_=pop(&top);
				printf("infix[%d]= %c	",i,infix[i]);printf("postfix[%d]= %c \n",j,postfix[j]);getch();
				postfix[j++]=operator_;

			}
			pop(&top);

		}



		i++;
		//top=top->next;
		//printf("top->data= %c",top->data);
		//getch();

	}


	postfix[j]='\0';

	printf("the required postfix expression is: ");
	puts(postfix);




	getch();

}


