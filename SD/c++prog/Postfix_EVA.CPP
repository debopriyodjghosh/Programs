#include "iostream.h"
#include <conio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
# define MAX 50

class postfix
{
 char post[MAX];
 int result;
 public:
   void getdata()
     {
     cout<<"Enter the postfix expression(numeric operand)...\n";
     cin.getline(post,50,'\n');
     }
   void evaluate();
   void display()
   {
   cout<<"\n\nResult is="<<result;
   }
};

void postfix::evaluate()
  {
   int top=-1,x,i=0,n1,n2,stack[MAX];
   while(post[i] != '\0')
     {
   if(post[i]==' ' || post[i]=='\t')
      {
	i++;
	continue;
      }
   else
      {
	if(isdigit(post[i]))
	    {
	     x=post[i] - '0';
	     stack[++top]=x;
	    }
	else
	   {
	   n1=stack[top--];
	   n2=stack[top--] ;
	   switch(post[i])
	      {
	       case '+':
		       result=n2 + n1;
		       break;
	       case '-':
		       result=n2 - n1;
		       break;
	       case '*':
		       result=n2 * n1;
		       break;
	       case '/':
		       result=n2 / n1;
		       break;
	       case '%':
		       result=n2 % n1;
		       break;
	       case '$':
		       result=pow(n2,n1);
		       break;
	       default:
		       cout<<"Operation not found";
	     }//end of switch
	  } //end of inner else
	}  //outer else
       i++;
     }// end of while
   }//end of function

void main()
 {
 clrscr();
 postfix obj1;
 obj1.getdata();
 obj1.evaluate();
 obj1.display();
 getch();
 }