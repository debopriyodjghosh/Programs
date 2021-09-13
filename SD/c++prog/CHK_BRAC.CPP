/* 		         surya rules			*/

/*   checking the validity of  brackets in a string     */

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
	int valid=1,i=0;
	struct stack *top;
	top=NULL;
	clrscr();
	char expression[25],temp;
	printf("enter an expression: ");gets(expression);

	while(i<strlen(expression))
	{
		if(expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
			push(&top,expression[i]);

		if(expression[i] == ')' || expression[i] == ']' || expression[i] == '}')
		{
			if(top == NULL)
				valid=0;

			else
			{
				temp=pop(&top);
				if(temp=='['&& expression[i] != ']'|| temp=='{'&& expression[i] != '}' || temp=='('&& expression[i] != ')')
					valid=0;
			}

		}
		i++;
	}

	if(top != NULL)
		valid=0;

	if(valid)
		printf("the string is valid");
	else
		printf("the string is not valid");



	getch();

}


