#include<iostream>
#include<cstring>
using namespace std;
class conv
{
	char *in,*p;
	char stack[25];
	int len,top;
	public:
		conv(string infix)
		{
			len=infix.length();
			in=new char[len+2];
			int i;
			for(i=0;i<len;i++)
			{
				in[i]=infix.at(i);
			}
			in[i]=')';
			stack[0]='(';
			top=0;
			p=new char[len+1];
		}
		void convert();
};
void conv::convert()
{
	int n=-1;
	for(int i=0;i<=len;i++)
	{
		switch(in[i])
		{
			case '(':top=top+1;
					stack[top]=in[i];
					break;
			case ')':while(stack[top]!='(')
					{
						n=n+1;
						p[n]=stack[top];
						top=top-1;
					}
					top=top-1;
					break;
			case '+':
			case '-':while(stack[top]!='(')
					{
						if(stack[top]=='+' || stack[top]=='-' || stack[top]=='*' || stack[top]=='/')
						{
							n=n+1;
							p[n]=stack[top];
							top=top-1;
						}
					}
					top=top+1;
					stack[top]=in[i];
					break;
			case '*':
			case '/':while(stack[top]!='(')
					{
						if(stack[top]=='*' || stack[top]=='/')
						{
							n=n+1;
							p[n]=stack[top];
							top=top-1;
						}
						else
							break;
					}
					top=top+1;
					stack[top]=in[i];
					break;
			default:n=n+1;
			p[n]=in[i];
			break;
		}
		p[n+1]='\0';
		cout<<in[i]<<"\t"<<top<<"\t"<<p<<endl;
	}
	cout<<"The equivalent Postfix Experssion is:"<<p;
}
int main()
{
	string infix;
	cout<<"Enter An Infix Expression:";
	cin>>infix;
	conv s1(infix);
	s1.convert();
	return 0;
}
