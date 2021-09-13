#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class str
{
string a;
public:
str()
{
a="empty";
}
str(string b)
{
a=b;
}
str operator +(str &b);
friend void operator >>(istream &in,str &a);
friend void operator <<(ostream &out,str &a);
};

void operator >>(istream &in,str &a)
{
in>>a.a;
}

void operator <<(ostream &out,str &a)
{
out<<a.a;
}

str str::operator +(str &b)
{
str c;
int p=a.size();
int m=b.a.size();
int n;
n=m+p;
//n-=1;
char *z=new char[n+1];
int i;
for(i=0;i<p;i++)
z[i]=a[i];
for(int j=0;j<m;j++)
{
i++;
z[i]=b.a[j];
}
i+=1;
z[i]='\0';
char *q=z;
c.a=q;
for(i=0;i<=n;i++)
cout<<z[i];
cout<<"\n";
return c;
}

int main()
{
str a("ghosh"),b("pinaki"),c;
cout<<a;
cout<<"\n";
cout<<b;
cout<<"\n";
c=a+b;
cout<<"\n";
cout<<c;
cout<<"\n";
/*string a="pinaki";
cout<<a[5]<<"\t"<<a[6];*/
}
