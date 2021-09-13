#include<iostream>
using namespace std;
class abc1
{
private:
int a,b;
public:
abc1();  //default constructor
abc1(int,int);  //parameterize constructor
void get_data();
friend int add(abc1 x);
friend int sub(abc1 x);
friend int mul(abc1 x);
friend int div(abc1 x);
};

abc1::abc1()
{
a=0;
b=0;
}

abc1::abc1(int x,int y)
{
 a=x;
 b=y;
}

void abc1::get_data()
{
cout<<"\n enter 1st number = ";
cin>>a;
cout<<"\n enter 2nd number = ";
cin>>b;
}

int add(abc1 x)
{
int z;
z=x.a+x.b;
return z;
}


int sub(abc1 x)
{
int z;
z=x.a-x.b;
return z;
}


int mul(abc1 x)
{
int z;
z=x.a*x.b;
return z;
}

int div(abc1 x)
{
int z;
z=x.a/x.b;
return z;
}


int main()
{
int s;
int d;
abc1 p;

p.get_data();
do
{
cout<< "\n 1.addition 2.subtraction 3.multiplication 4.divition 5.exit";
cout<<"\n enter your choice= ";
cin>>s;
switch(s)
{
case 1:
d=add(p);
cout<<"sum is= "<<d;
break;
case 2:
d=sub(p);
cout<<"sub is= "<<d;
break;
case 3:
d=mul(p);
cout<<"mul is= "<<d;
break;
case 4:
d=div(p);
cout<<"div is= "<<d;
break;
}
}
while(s!=5);
return 0;
}

