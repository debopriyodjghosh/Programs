/*INFIX TO POSTFIXT CONVERSION OK */

#include "iostream.h"
#include <conio.h>
#include <string.h>
#define MAX 50

class intopost
  {
   char str[MAX],str2[MAX];
   int l;
   public:
     void getdata()
       {
       cout<<"ENTER THE  charecter INFIX EXPRESSION\n ";
       cin>>str;
       }
       void in_post();
       void display()
       {
       cout<<"\n\nEquivalent postfix expression is....\n\n";
       cout<<str2;
       }
  };

     void intopost::in_post()
       {
       char str1[MAX];
       int i,n=0,top=-1;
       l=strlen(str);
       str[l]=')';str[l+1]='\0';
       top=top+1;
       str1[top]='(';
       i=0;
       while(str[i]!='\0')
	   {
	     if(str[i]=='(')
		  str1[++top]=str[i];   /*IF THE ELEMENT IS '('*/
	     else if(str[i]!='$'&&str[i]!='*'&&str[i]!='/'&&str[i]!='+'&&str[i]!='-'&&str[i]!=')')
		   {         /* IF THE ELEMENT IS A OPERAND*/
		     str2[n]=str[i];
		     n++;
		   }
	     else
		   {       /*IF THE ELEMENT IS A OPERATOR*/
		     if(str[i]=='+'||str[i]=='-')
			    {
			     while(str1[top]=='+'||str1[top]=='-'||str1[top]=='*'||str1[top]=='/'||str1[top]=='$')
				 {
				  str2[n]=str1[top];
				  n++;
				  top=top-1;
				 }
			     top=top+1;
			     str1[top]=str[i];
			    }
		     else if(str[i]=='*'||str[i]=='/')
			   {
			    while(str1[top]=='*'||str1[top]=='/'||str1[top]=='$')
				{
				  str2[n]=str1[top];n++;
				  top=top-1;
				}
			    top=top+1;
			    str1[top]=str[i];
			   }
		     else if(str[i]=='$')
			   {
			   while(str1[top]=='$')
			       {
				str2[n]=str1[top];
				n++;
				top=top-1;
			       }
			   top+=1;
			   str1[top]=str[i];
			   }
		     else
			  {
			   while(str1[top]!='(')
			       {
				str2[n]=str1[top];
				top=top-1;
				n+=1;
			       }
			    top-=1;
			   str2[n]='\0';
			  }
		   } //outer else
	     i++;
	 } //outer while
    } //end of function

void main()
{
clrscr();
intopost obj1;
obj1.getdata();
obj1.in_post();
obj1.display();
getch();
}
