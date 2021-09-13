#include<iostream>
using namespace std;
#include<conio.h>

class stak
{
char st[30],eq[20],ch[20],top;
int x,y,z;
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
};
void stak::get()
{
cout<<"\nEnter any equation:\n";
cin>>st;
cout<<"\nThe entered equation is:\n"<<st;
}

void stak::post()
{
while(st[x]!=NULL)
{
	if((st[x]>='A' && st[x]<='Z') || (st[x]>='a' && st[x]<='z'))
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

int main()
{
stak s;
s.get();
s.post();
getch();
}
