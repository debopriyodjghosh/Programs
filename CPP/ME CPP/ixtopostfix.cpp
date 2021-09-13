/* Implement Infix to Postfix & Evaluation of Postfix */
#include<iostream>
#include<string.h>
#include<math.h>
#define MAX 10
using namespace std;

typedef struct stack
{
	float a[MAX];
	int top;
}STACK;

class imp          //implement
{
	char q[30],p[30];
	STACK s;
	public:
		imp()
		{
			s.top=-1;
		}
		void push(float);
		float pop();
		void evaluate();
		void input();
		void show();
		void intopost();
		int prcd(char,char);
};

void imp::input()
{
	cout<<"\nEnter an infix expression :";
	cin>>q;
}

void imp::show()
{
	cout<<"\nThe infix expression is : "<<q;
}

void imp::push(float item)
{
	if(s.top == MAX-1)
	{
		cout<<"\nStack overflow !!!";
		return ;
	}
	s.top++;
	s.a[s.top]=item;
}

float imp::pop()
{
	float data;
	if(s.top == -1)
	{
		cout<<"\nStack is empty !!!";
		return 0;
	}
	data=s.a[s.top];
	s.top--;
	return data;
}

void imp::intopost()
{
	char symb,t;
	int i,j=0,k;
	for(i=0; q[i]!='\0'; i++)
	{
		symb=q[i];
		k=symb;
		if((k>=65 && k<=90) || (k>=48 && k<=57) || (k>=97 && k<=122))
		{
			p[j]=symb;
			j++;
		}
		else
		{
			while(s.top!=-1 && (prcd(s.a[s.top],symb)==1))
			{
				t=pop();
				p[j]=t;
				j++;
			}
			if(s.top==-1 || symb!=')')
			   push(symb);
			else
			   t=pop();
		}
	}
	while(s.top!=-1)
	{
		t=pop();
		p[j]=t;
		j++;
	}
	p[j]='\0';
	cout<<"\nThe equevalent postfix string : "<<p;
}

int imp::prcd(char c1,char c2)
{
	if(c1=='(' || c2=='(')
	   return 0;
	if(c2==')')
	return 1;
	if(c1==c2)
	return 1;
	if(c1=='$')
	return 1;
	if((c1=='/' || c1=='*') && c2!='$')
	return 1;
	if(c1=='*' &&(c2=='+' || c2=='-'))
	return 1;
	if((c1=='+' && c2=='-') || (c1=='-' && c2=='+'))
	return 1;
	else
	   return 0;
}

void imp::evaluate()
{
	int i;
	float value,result,k1,k2;
	char t;
	for(i=0;p[i]!='\0';i++)
	{
		t=p[i];
		switch(t)
		{
		    case '+':
			    k2=pop();
			    k1=pop();
			    value=(k1-48)+(k2-48);
			    value+=48;
			    push(value);
			    break;
		    case '-':
			    k2=pop();
			    k1=pop();
			    value=(k1-48)-(k2-48);
			    value+=48;
			    push(value);
			    break;
		    case '*':
			    k2=pop();
			    k1=pop();
			    value=(k1-48)*(k2-48);
			    value+=48;
			    push(value);
			    break;
		    case '/':
			    k2=pop();
			    k1=pop();
			    value=(k1-48)/(k2-48);
			    value+=48;
			    push(value);
			    break;
		    case '$':
			    k2=pop();
			    k1=pop();
			    value=pow((k1-48),(k2-48));
			    value+=48;
			    push(value);
			    break;
		    default : push(t);
	    }
	}
	result=pop();
	result=result-48;
	cout<<"\nThe evaluated value = "<<result;
}

int main()
{
	imp ob;
	ob.input();
	ob.show();
	ob.intopost();
	ob.evaluate();
	
	return 0;
}
