//****POSTFIX EVALUATION****//
 //*****WORKS PERFECT*****//

#include<stdio.h>
#include<ctype.h>
int stack[20];
int top=-1;
void push(int x)
{
	stack[++top]=x;
}
int pop()
{
	return stack[top--];
}
main()
{
	char exp[20],*c;
	int x,y,z,number;
	printf("\t\t  ::ENTER THE POSTFIX EXPRESSION TO EVALUATE:: \n");
	printf("\t\t\t\t  ");
	scanf("%s",exp);
	c=exp;
	while(*c!='\0')
	{
	   if(isdigit(*c))
        {
            number=*c-48;
            push(number);
        }
        else
        {
            x=pop();
            y=pop();
            switch(*c)
            {
                case '+': z=x+y;
                          break;                    
                case '-': z=x-y;
                          break;
                case '*': z=x*y;
                          break;
                case '/': z=x/y;
                          break;
                                
            }
            push(z);
        }
        c++;
    }
    printf("\n\t\t::The value of the given postfix expression [%s]::\n\t\t\t\t  %d \n\n",exp,pop());
    return 0;
}
