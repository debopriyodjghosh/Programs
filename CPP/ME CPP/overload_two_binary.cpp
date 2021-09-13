#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class binary
{
char a[30];
int l;
public:
binary()
{
l=0;
}
void input()
{
cout<<"\n\nEnter a Binary Number: ";
cin>>a;
l=strlen(a);
}
void show()
{
cout<<"\n\nThe value is "<<a;
}
binary operator-(binary);
int operator[](int);
};
binary binary::operator-(binary t)
{
int i,k1=0,k2=0,p,r;
int j=0;
binary temp;
for(i=l-1;i>=0;i--)
{
p=a[i];
p=p-48;
k1=k1+p*pow(2,j);
j++;
}
j=0;
for(i=t.l-1;i>=0;i--)
{
p=t.a[i];
p=p-48;
k2=k2+p*pow(2,j);
j++;
}
p=k1-k2;
i=0;
while(p>0)
{
r=p%2;
r=r+48;
temp.a[i]=r;
p=p/2;
i++;
}
temp.a[i]='\0';
temp.l=i;
strrev(temp.a);
return temp;
}
int binary::operator[](int k)
{
int p;
if(k<l)
{
p=a[k];
p=p-48;
return p;
}
else
{
cout<<"\nInvalid position.";
return 0;
}
}
main()
{
binary ob1,ob2,ob3;
ob1.input();
ob1.show();
ob2.input();
ob2.show();
ob3=ob1-ob2;
ob3.show();
int pos,i;
cout<<"\nEnter the bit position of ob1 :";
cin>>pos;
i=ob1[pos];
cout<<"\n The value at ob1["<<pos<<"] is : "<<i;
}
