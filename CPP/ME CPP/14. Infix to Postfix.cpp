#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

#define Maxlen 64

/* symbol types */
#define Operator (-10)
#define Operand (-20)
#define LeftParen (-30)
#define RightParen (-40)
static char *symbols="()+-%*/";

/* Symbol precedence */
#define LeftParenPrec 0 /* ( */
#define AddPrec 1 /* + */
#define SubPrec 1 /* - */
#define MultPrec 2 /* * */
#define DivPrec 2 /* / */
#define RemPrec 2 /* % */
#define None 999 /* all else */

class InPost
{
    private:
        char infix[Maxlen+1],stack[Maxlen],postfix[Maxlen+1];
        int top=-1;
    public:
        void getdata()
        {
            cout<<"\n Infix (up to "<<Maxlen<<" chars): ";
            cin>>infix;
        }
        void display()
        {
            cout<<"\n Infix: "<<infix;
            cout<<"\n Postfix: "<<postfix;
        }
        void IntoPost();
        void push(char symbol)
        {
            if(top>Maxlen)
            {
                cout<<"\n Full Stsck ... exiting. \n";
                exit(1);
            }
            else
                stack[++top]=symbol;
        }
        char pop(void)
        {
            if (top<=-1)
            {
                cout<<"\n Empty Stack ... exiting \n";
                exit(1);
            }
            else
                return (stack[top--]);
        }
        int get_type(char);
        int get_prec(char);

};

void InPost::IntoPost()
{
    int i,p,l,type,precedence;
    char next;
    /* i for infix, p for postfix */
    i=p=0;
    l=strlen(infix);
    while(i<l)
    {
        if(infix[i]!=' '||'\0')
        {
            type=get_type(infix[i]);
            switch(type)
            {
                case LeftParen:
                    push(infix[i]);
                    break;
                case RightParen:
                    while((next=pop())!='(')
                        postfix[p++]=next;
                    break;
                case Operand:
                    postfix[p++]=infix[i];
                    break;
                case Operator:
                    precedence=get_prec(infix[i]);
                    while(top>-1 && precedence<=get_prec(stack[top]))
                        postfix[p++]=pop();
                    push(infix[i]);
                    break;
            }
        }
        i++;
    }
    while(top>-1)
        postfix[p++]=pop();
    postfix[p]='\0'; /* ensure a string */
}

int InPost::get_type(char symbol)
{
    switch(symbol)
    {
        case '(' :
            return (LeftParen);
        case ')':
            return (RightParen);
        case '+':
        case '-':
        case '%':
        case '*':
        case '/':
            return (Operator);
        default:
            return (Operand);
    }
}

int InPost::get_prec(char symbol)
{
    switch(symbol)
    {
        case '+':
            return (AddPrec);
        case '-':
            return (SubPrec);
        case '*':
            return (MultPrec);
        case '/':
            return (DivPrec);
        case '%':
            return (RemPrec);
        case '(':
            return (LeftParenPrec);
        default:
            return (None);
    }
}

int main()
{
    InPost ob;
    char ans;
    do
    {
        //top=-1; /* reset stack */
        ob.getdata();
        ob.IntoPost();
        ob.display();
        cout<<"\n\n Another (y/n): ";
        cin>>ans;
    }while(toupper(ans)=='Y');
}
