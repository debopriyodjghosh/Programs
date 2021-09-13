#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class strings
{
char *p;
int len;
public:
strings()
{
	len=0;
	p=0;
}
strings(char *s);
friend strings operator +(strings &s,strings &t);
friend void show(strings s);
};
strings::strings(char *s)
{
len=strlen(s);
p=new char[len+1];
strcpy(p,s);
}
strings operator +(strings &s,strings &t)
{
strings temp;
temp.len=s.len+t.len;
temp.p=new char[temp.len+1];
strcpy(temp.p,s.p);
strcat(temp.p,t.p);
return(temp);
}
void show(strings s)
{
cout<<s.p;
}
int main()
{
strings t1,t2,t3;
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
return 0;
}
