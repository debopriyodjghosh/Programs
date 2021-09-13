#include<iostream>
#include<stdio.h>

using namespace std;

template <class t>
class poly;

template <class t>
class node
{
t coeff,exp;
node<t> *link;
public:
friend class poly<t>;
/*friend void operator>>(istream &din<t>,poly<t> &a);
friend void operator<<(ostream &dout<t>,poly<t> &a);*/
};

template <class t>
class poly
{
node<t> *start;
public:
poly()
{
start=NULL;
}
friend void operator >>(istream &cin<t>,poly<t> &a);
friend void operator <<(ostream &cout<t>,poly<t> &a);
void insert(t exp,t coeff);
poly<t> operator +(poly<t> &a);
poly<t> operator -(poly<t> &a);
poly<t> operator *(poly<t> &a);
friend class node<t>;
};

template <class t>
void operator >>(istream &cin,poly<t> &a)
{
node<t> *p;
p=new node<t>;
cout<<"enter the exponent\n";
cin>>p->exp;
cout<<"enter the coefficient\n";
cin>>p->coeff;
a.start=p;
p->link=NULL;
while(1)
{
cout<<"do you want to insert any more data?(y/n)\n";
char c;
cin>>c;
if(c=='n'||c=='N')
return;
else
{
t e,c;
cout<<"enter the exponent\n";
cin>>e;
cout<<"enter the coefficient\n";
cin>>c;
a.insert(e,c);
}
}
}

template <class t>
void poly<t>::insert(t exp,t coeff)
{
node<t> *p,*z;
p= new node<t>;
p->exp=exp;
p->coeff=coeff;
if(p->exp<start->exp)
{
p->link=start;
start=p;
return;
}
if(p->exp==start->exp)
{
start->coeff=start->coeff+coeff;
return;
}
if(start->link==NULL&&start->exp<exp)
{
start->link=p;
return;
}
else
{
z=start;
while((z->link)->exp<p->exp&&(z->link)->link!=NULL)
z=z->link;
if((z->link)->link==NULL&&(z->link)->exp<p->exp)
(z->link)->link=p;
else
{
if((z->link)->exp==p->exp)
(z->link)->coeff+=coeff;
else
{
p->link=z->link;
z->link=p;
}
}
return;
}
}

/*template <class t>
void operator <<(ostream &cout,poly<t> &a)
{
node<t> *z;
z=a.start;
while(z->link!=NULL)
{
cout<<z->coeff<<"^"<<z->exp<<"+";
z=z->link;
}
cout<<z->coeff<<"^"<<z->exp<<"\n";
return;
}*/

int main()
{
poly<int> a;
/*cin>>a;
cout<<a;*/
return 1;
}

