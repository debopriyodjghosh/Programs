/* POLYNOMIAL ADDITION AND MULTIPLICATION */
#include<iostream>
#include<malloc.h>
using namespace std;
typedef struct node
{
int coeff;
int exp;
struct node *link;
}node;
class poly
{
node *p;
public:
poly()
{
p=NULL;
}
void display();
void padd(int,int);
void add(poly,poly);
void mul(poly,poly);
};
void poly::padd(int c,int e)
{
node *r,*temp=p;
if(p==NULL || e>p->exp)
{
p=new node;
p->coeff=c;
p->exp=e;
p->link=NULL;
}
else
{
while(temp!=NULL)
{
if(temp->exp==e)
{
temp->coeff=temp->coeff+c;
return;
}
if(temp->exp>e && (temp->link==NULL || temp->link->exp<e))
{
r=new node;
r->coeff=c;
r->exp=e;
r->link=temp->link;
temp->link=r;
return;
}
temp=temp->link;
}
}
}
void poly::add(poly t1,poly t2)
{
node *z,*x=t1.p,*y=t2.p;
if(t1.p==NULL && t2.p==NULL)
return;
while(x!=NULL && y!=NULL)
{
if(p==NULL)
{
p=new node;
z=p;
}
else
{
z->link=new node;
z=z->link;
}
if(x->exp<y->exp)
{
z->coeff=y->coeff;
z->exp=y->exp;
y=y->link;
}
else if(x->exp>y->exp)
{
z->coeff=x->coeff;
z->exp=x->exp;
x=x->link;
}
else
{
z->coeff=x->coeff + y->coeff;
z->exp=x->exp;
x=x->link;
y=y->link;
}
}
while(x!=NULL)
{
if(p==NULL)
{
p=new node;
z=p;
}
else
{
z->link=new node;
z=z->link;
}
z->coeff=x->coeff;
z->exp=x->exp;
x=x->link;
}
while(y!=NULL)
{
if(p==NULL)
{
p=new node;
z=p;
}
else
{
z->link=new node;
z=z->link;
}
z->coeff=y->coeff;
z->exp=y->exp;
y=y->link;
}
z->link=NULL;
}
void poly::mul(poly t1,poly t2)
{
node *z,*x,*y;
x=t1.p;
y=t2.p;
int c,e;
z=y;
if(x==NULL && y==NULL)
return;
if(x==NULL)
{
p=y;
}
else
{
if(y==NULL)
p=x;
else
{
while(x!=NULL)
{
while(y!=NULL)
{
c=x->coeff * y->coeff;
e=x->exp + y->exp;
y=y->link;
padd(c,e);
}
y=z;
x=x->link;
}
}
}
}
void poly::display()
{
node *x=p;
cout<<"\n";
while(x!=NULL)
{
if(x->coeff < 0)
{
if(x->exp!=0)
cout<<" "<<x->coeff<<"x^"<<x->exp;
else
cout<<" "<<x->coeff;
}
else
{
if(x->coeff==0)
{
x=x->link;
continue;
}
else
{
if(x->exp!=0)
cout<<" + "<<x->coeff<<"x^"<<x->exp;
else
cout<<" + "<<x->coeff;
}
}
x=x->link;
}
}
int main()
{
poly ob1,ob2,ob3,ob4;
int i,a,b,m;
char ch,cha;
cout<<"\nEnter input for 1st polynomial : ";
do
{
cout<<"\nEnter coefficient : ";
cin>>a;
cout<<"\nEnter exponent : ";
cin>>b;
ob1.padd(a,b);
cout<<"\nDo you want to continue(Y/N) ? ";
fflush(stdin);
cin>>ch;
}while(ch=='y' || ch=='Y');
cout<<"\nEnter input for 2nd polynomial : ";
do
{
cout<<"\nEnter coefficient : ";
cin>>a;
cout<<"\nEnter exponent : ";
cin>>b;
ob2.padd(a,b);
cout<<"\nDo you want to continue(Y/N) ? ";
fflush(stdin);
cin>>ch;
}while(ch=='y' || ch=='Y');
cout<<"The 1st polynomial : ";
ob1.display();
cout<<"The 2nd polynomial : ";
ob2.display();
do
{
cout<<"\nMenu for polynomial operation : ";
cout<<"\npress 1 for polynomial addition : ";
cout<<"\npress 2 for polynomial multiplication : ";
cout<<"\nEnter your choice : ";
cin>>m;
switch(m)
{
case 1:
cout<<"\nThe 1st polynomial : ";
ob1.display();
cout<<"\nthe 2nd polynomial : ";
ob2.display();
ob3.add(ob1,ob2);
cout<<"\nThe polynomial addition result : ";
ob3.display();
break;
case 2:
cout<<"\nThe 1st polynomial : ";
ob1.display();
cout<<"\nthe 2nd polynomial : ";
ob2.display();
ob4.mul(ob1,ob2);
cout<<"\nThe polynomial addition result : ";
ob4.display();
break;
defult :cout<<"\nInvalid choice !!!";
}
cout<<"\nDo you want to more operation(Y/N) ? ";
fflush(stdin);
cin>>cha;
}while(cha=='y' || cha=='Y');
return 0;
}
