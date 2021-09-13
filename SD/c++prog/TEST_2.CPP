/* 		         surya rules			*/

/*		     precedence check			*/

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

	char *infix="(a+b)*c-(d-e))$(f+g)";char postfix[100];
	char operator_;
	int i=0,j=0,c=0,l=0;
	struct stack *top;
	top=NULL;

	clrscr();
	printf("enter an infix expression: ");
	puts(infix);

	push(&top,')');

	//infix[strlen(infix)]=')';

	for(i=0;i<strlen(infix);i++)
	{
		if(isalpha(infix[i]) || infix[i]=='*' || infix[i]=='/' || infix[i]=='+' || infix[i]=='-' || infix[i]=='$')
			c++;
	}

	j=c;l=strlen(infix);
	while(top != NULL)
	{
		if(isalpha(infix[l]))
		{
			printf("infix[%d]= %c	",l,infix[l]);printf("postfix[%d]= %c \n",j,postfix[j]);getch();
			postfix[j--]=infix[l];

		}

		else if(infix[l]==')')
		{
			push(&top,')');
		}

		else
		{
			if(infix[l]=='$')
			{
				while(top->data=='$')
				{
					operator_=pop(&top);
					printf("infix[%d]= %c	",l,infix[l]);printf("postfix[%d]= %c \n",j,postfix[j]);getch();
					postfix[j--]=operator_;

				}
			}

			if(infix[l]=='+' || infix[l]=='-')
			{
				while(top->data !=  ')' )
				{
					operator_=pop(&top);
					printf("infix[%d]= %c	",l,infix[l]);printf("postfix[%d]= %c \n",j,postfix[j]);getch();
					postfix[j--]=operator_;
									}
			}

			if(infix[l]=='*' || infix[l]=='/' )
			{

				while(top->data!='+' &&   top->data!='-' && top->data!=')')
				{
					operator_=pop(&top);

					printf("infix[%d]= %c	",l,infix[l]);printf("postfix[%d]= %c \n",j,postfix[j]);getch();
					postfix[j--]=operator_;

				}
			}

			if(infix[l]!='(') push(&top,infix[l]);

		}


		if(infix[l]=='(')
		{
			while(top->data!=')')
			{
				operator_=pop(&top);
				printf("infix[%d]= %c	",l,infix[l]);printf("postfix[%d]= %c \n",j,postfix[j]);getch();
				postfix[j--]=operator_;

			}
			pop(&top);

		}



		l--;
		//top=top->next;
		//printf("top->data= %c",top->data);
		//getch();

	}


	postfix[c+1]='\0';

	printf("the required postfix expression is: ");
	puts(postfix);




	getch();

}


