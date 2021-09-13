#include<stdio.h>
#include<conio.h>
#include<string.h>
# define MAX 10

struct postfix
{
 int stack[MAX];
 int top,nn;
 char *s;
};

void evaluate(struct postfix *p)
{
 int n1,n2,result;
 while(*p->s!='\0')
   {
   if(*p->s==' ' || *p->s='\t')
      {
	p->s++;
	continue;
      }
   else
      {
	if(isdigit(*p->s))
	    {
	     p->nn=*p->s - '0';
	     push(p->stack,p->nn)
	    }
	else
	   {
	   n1=pop(p->stack)
	   n2=pop(p->stack)
	   switch(*p->s)
	      {
	       case '+':
		       result=n2+n1;
		       break;
	       case '-':
		       result=n2-n1;
		       break;
	       case '*':
		       result=n2*n1;
		       break;
case '/':
	   result=n2/n1;
	   break;
case '%':
	   result=n2%n1;
	   break;
case '$':
	   result=pow(n2,n1);
	   break;
default:
	printf("Operation not found");
	}
	push(p->stack;result);
	}
	p->s++;
	}
	}
	void show(struct postfix p)
	{
	p.nn=pop(p.stack);
	printf("\nResult=%f",p.nn);
	}
	}
