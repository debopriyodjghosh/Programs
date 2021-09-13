#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class str
{
char *p;
int len;
public:
str()
{
	len=0;
	p=0;
}
str(char *s)
{
len=strlen(s);
p=new char[len+1];
strcpy(p,s);
}
friend str operator+(str &s,str &t);
friend void show(str s);
};


str operator+(str &s,str &t)
{
str temp;
temp.len=s.len+t.len;
temp.p=new char[temp.len+1];
strcpy(temp.p,s.p);
strcat(temp.p,t.p);
return(temp);
}
void show(str s)
{
cout<<s.p;
}
int main()
{
str t1,t2,t3;
char s1[20],s2[20];
cout<<"Enter 1st string :";
cin>>s1;
cout<<"Enter 2nd string :";
cin>>s2;
t1=s1;
t2=s2;
t3=t1+t2;
cout<<"\nAfter concatenating: ";
show(t3);
getch();
}
//Enter 1st string :DEBOPRIYO
//Enter 2nd string : GHOSH

//After concatenating: DEBOPRIYOGHOSH
