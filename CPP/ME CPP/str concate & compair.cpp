#include<iostream>
#include<string.h>
using namespace std;

class str
{
private:
char a[100];
public:
str();
str(char s1[]);
void read();
void disp();
friend str operator+(str,str);
int operator==(str);
};


str::str()
{
strcpy(a," ");
}

str::str(char s1[])
{
strcpy(a,s1);
}

void str::read()
{
cout<<"\n enter the string: ";
cin>>a;
}

void str::disp()
{
cout<<"\n string is: "<<a<<endl;
}


str operator+(str s1,str s2)
{
str s3;
int j=0;
for(int i=0;s1.a[i]!='\0';i++)
{
s3.a[j]=s1.a[i];
j++;
}
s3.a[j]=' ';
for(int i=0;s2.a[i]!='\0';i++)
{
s3.a[j+1]=s2.a[i];
j++;
}
s3.a[j+1]='\0';
return s3;
}

int str::operator==(str r)
{
int n1=strlen(a);
int n2=strlen(r.a);
if(n1!=n2)
{
return 0;
}
for(int i=0;i<n1;i++)
{
if(a[i]!=r.a[i])
{
return 0;
}
}
return 1;
}


int main()
{
str p,q,k;
p.read();
p.disp();
q.read();
q.disp();
if(p==q)
{
cout<<"\n strings are same.\n";
}
else
{
cout<<"\n strings are not same.\n";
}
k=p+q;
k.disp();
return 0;
}
