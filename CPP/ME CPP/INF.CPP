#include<iostream.h>
#include<ctype.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#define MAX 20
typedef struct stack
	{
		float a[MAX];
		int top;
	}STACK;
class implement
	{
		private: char q[30],p[30];
					STACK s;
		public: implement()
						{
							s.top=-1;
						}
		void push(float);
		float pop();
		void infipos();
		void evaluate();
		int pred(char,char);
		void input();
		void show();
	};
void main()
	{
		implement ob1;
		clrscr();
		ob1.input();
		ob1.show();
		ob1.infipos();
		ob1.evaluate();
		getch();
	}
void implement::input()
	{
		cout<<"\nenter the expression:";
		cin>>q;
	}
void implement::show()
	{
		cout<<"\nthe infix expression is:";
		cout<<q;
	}
void implement::infipos()
{
  char symb,t;
  int i,j=0,k;
  for(i=0;q[i]!='\0';i++)
  {
    symb=q[i];
    k=symb;
    if((k>=65&& k<=90)||(k>=48 && k<=57)||(k>=97&&k<=122))
    {
	p[j]=symb;
	j++;
    }
    else
    {
      while(s.top!=-1&&(pred(s.a[s.top],symb)==1))
      {
	t=pop();
	p[j]=t;
	j++;
      }
      if(s.top==-1||symb!=')')
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
  cout<<"\n position expression is:";
  cout<<p;
}
void implement :: evaluate()
	{
		int i;
		float value,result,k1,k2;
      char t;
		for(i=0;p[i]!='\0';i++)
			{
				t=p[i];
				switch(t)
					{
						case'+':
									k2=pop();
									k1=pop();
									if((k1>=65 && k1<=90)||(k1>=97 && k1<122))
									  k1+=48;
									if((k2>=65 && k2<=90)||(k2>=97 && k2<122))
									  k2+=48;
									value=(k1-48)+(k2-48);
									value+=48;
									push(value);
									break;
						case'-':
									k2=pop();
									k1=pop();
									if((k1>=65 && k1<=90)||(k1>=97 && k1<122))
									  k1+=48;
									if((k2>=65 && k2<=90)||(k2>=97 && k2<122))
									  k2+=48;
									value=(k1-48)-(k2-48);
									value+=48;
									push(value);
									break;
						case'*':
									k2=pop();
									k1=pop();
									if((k1>=65 && k1<=90)||(k1>=97 && k1<122))
									  k1+=48;
									if((k2>=65 && k2<=90)||(k2>=97 && k2<122))
									  k2+=48;
									value=(k1-48)*(k2-48);
									value+=48;
									push(value);
									break;
						case'/':
									k2=pop();
									k1=pop();
									value=(k1-48)/(k2-48);
									value+=48;
									push(value);
									break;
					  case'$':
									k2=pop();
									k1=pop();
									if((k1>=65 && k1<=90)||(k1>=97 && k1<122))
									  k1+=48;
									if((k2>=65 && k2<=90)||(k2>=97 && k2<122))
									  k2+=48;
									value=pow((k1-48),(k2-48));
									value+=48;
									push(value);
									break;
					  default:push(t);
				  }
			}
		result=pop();
		result-=48;
		cout<<"\n the result:"<<result;
	}
void implement::push(float item)
	{
		if(s.top==MAX-1)
			{
				cout<<"\n Stack is overfiow:";
				return;
			}
		s.top++;
		s.a[s.top]=item;
	}
float implement::pop()
	{
		float data;
		if(s.top==-1)
			{
				cout<<"\nStack is empty";
				return NULL;
			}
		data=s.a[s.top];
		s.top--;
		return data;
	}
int implement::pred(char c1,char c2)
	{
		if(c1=='('||c2=='(')
			return 0;
		if(c2==')')
			return 1;
		if(c1=='$')
			return 1;
		if(c1=='/'&&c2!='$')
			return 1;
		if(c1=='*' && (c2=='+'||c2=='-'))
			return 1;
		if(c1=='+'&& c2=='-')
			return 1;
		else
			return 0;
	}


