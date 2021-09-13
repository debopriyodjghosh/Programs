#include<iostream>
#include<cstring>
using namespace std;
class in2po
{
	char *in,*po;
	int len;
	public:
		in2po(const char* s)
		{
			len=strlen(s);
			in=new char[len+1];
			int i;
			for(i=0;i<len;i++)
			{
				in[i]=s[i];
			}
			in[i]='\0';
			po=new char[len+1];
		}
		void in2post(const char* s);
};
void in2po::in2post(const char* s)
{
	in[len]=')';
	len=len+1;
	int i=0,top=0,n=0;
	char stack[100];
	stack[top]='(';
	while(i<len)
	{
	
		switch(in[i])
		{
			case '(':top++;stack[top]='(';break;
			case ')':while(stack[top]!='(')
					{po[n]=stack[top];
						top--;n++;
					}
					top--;
				break;
			case '+':
			case '-':while(stack[top]!='(')
					{
					if(stack[top]=='+' or stack[top]=='-' or stack[top]=='*' or stack[top]=='/')
					{
						po[n]=stack[top]; 
						top--;n++;
					}
					}
					top++;
					stack[top]=in[i];
					break;
			case '*':
			case '/':
			while(stack[top]!='(')
					{
						if(stack[top]=='*' or stack[top]=='/')
						{
							po[n]=stack[top];
							top--;n++;
						}
						else
							break;
					}
					top++;
					stack[top]=in[i];
					break;
			default:po[n]=in[i];
			n++;
			break;
		};
		cout<<"\nCharacter Encoutered:"<<in[i]<<"\t"<<"Stack:"<<stack<<"\t"<<"Postfix Form:"<<po<<endl;
		i=i+1;
	}
	cout<<"\n\nThe equivalent postfix form is:"<<po;
}
int main()
{
	char s[25];
	cout<<"\nEnter an Infix Expression:";
	cin>>s;
	in2po obj(s);
	obj.in2post(s);
	return 0;
}

