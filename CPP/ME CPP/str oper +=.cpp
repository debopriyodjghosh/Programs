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
void operator+=(str);
void operator=(const char s[]);
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

void str::operator+=(str r)
{
int i,j;
i=strlen(a);
a[i]=' ';
for(j=0;r.a[j]!='\0';j++)
{
a[i+1]=r.a[j];
i++;
}
a[i+1]='\0';
}


void str::operator=(const char s[])
{
int i;
for(i=0;s[i]!='\0';i++)
{
   a[i]=s[i];
}
a[i]='\0';
}

int main()
{
str x,y,z;
x.read();
y.read();
x.disp();
y.disp();
z=x+y;
z.disp();
x+= (y);
x.disp();
str p="india";
p.disp();
return 0;
}
