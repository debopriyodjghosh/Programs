#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>

class stak
{
char ch[20],eq[20],st[30],top;
int x,y,z,p,q,r,val[10];
public:
stak()
{
	top='+';
	x=y=0;
	z=-1;
}
void get();
void post();
int prcd(char,char);
int calc(int,int,char);
};

void stak::get()
{
cout<<"\nEnter any equation:\n";
cin>>st;
cout<<"\nThe entered equation is:\n"<<st;
}

int stak::calc(int a,int b,char c)
{
switch(c)
{
	case '+':
		return(a+b);
	case '-':
		return(a-b);
	case '*':
		return(a*b);
	case '/':
		return(a/b);
	case '$':
		return(pow(a,b));
}
}

int stak::prcd(char g,char r)
{
if(r=='(' || r=='$')
	return(0);
else if(g=='$' || g=='*' || g=='/')
	return(1);
else if(r=='*' || g=='(' || r=='/')
	return(0);
else
	return(1);
}

void stak::post()
{
while(st[x]!=NULL)
{
	if(st[x]>='0' && st[x]<='9')
		ch[y++]=st[x];
	else if(st[x]==')')
	{
		while(eq[z]!='(')
			ch[y++]=eq[z--];
		top=eq[--z];
	}
	else
	{
		while(z>=0 && prcd(top,st[x])==1)
		{
			ch[y++]=top;
			top=eq[--z];
		}
		eq[++z]=st[x];
		top=st[x];
	}
	x++;
}
while(z>=0)
{
	if(eq[z]=='(')
		z--;
	else
		ch[y++]=eq[z--];
}
ch[y]=NULL;
cout<<"\nAfter converting to postfix equation:\n"<<ch;
x=y=0;
while(ch[x]!=NULL)
{
	if(ch[x]>='0' && ch[x]<='9')
		val[y++]=ch[x]-'0';
	else
	{
		p=val[--y];
		q=val[--y];
		r=calc(q,p,ch[x]);
		val[y++]=r;
	}
	x++;
}
cout<<"\nAfter evaluation:\n";
cout<<val[--y];
}

int main()
{
stak s;
s.get();
s.post();
getch();
}
