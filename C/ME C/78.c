// A Program to convert Infix Expression to it's Equivalent Postfix Expression

// HEADER FILES
#include<stdio.h>
#include<ctype.h>

// Stack to store the element
char stack[20];

// A Variable who points to the top of Stack where DATA exist
int top=-1;

// A function to push a element in the stack
void push(char c)
{
	stack[++top]=c;
}

// A function to pop a element from the Stack
char pop()
{
	if(top==-1)
	 return(-1);
	else
	 return(stack[top--]);
}

// A function to check the priority
int priority(char c)
{
	if(c=='(')
	 return(0);
	if(c=='+'||c=='-')
	 return(1);
	if(c=='*'||c=='/')
	 return(2);
	if(c=='^'||c=='$')
	 return(3);
}

// A function to change the Infix expression to the equivalent Postfix expression
void postfix(char *c)
{
	char P[20];
	int i=0;
	printf("\nThe Equivalent Postfix Expression=");
	while(*c!='\0')
	{
		if(isalnum(*c))
		 P[i++]=*c;
		else
		 if(*c=='(')
		  push(*c);
		 else
		  if(*c==')')
		   while(pop()!='(')
		  	P[i++]=stack[top+1];
		  else
		  {
		   while(priority(stack[top])>=priority(*c))
		    P[i++]=pop();
		   push(*c);
	      }
		c++;
	}
	while(top!=-1)
	 P[i++]=pop();
    P[i]='\0';
    puts(P);
}

// MAIN FUNCTION
main()
{
	char I[20];
	printf("Enter A Infix Expression=");
	fflush(stdin);
	gets(I);
	postfix(I);
}
