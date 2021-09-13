#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class node
       {
	private:
	    node *next;
	    int coef;
	    int expo;
	public:
	  void getdata()
	   {
	    cout<<endl<<" Enter Coefficient: ";
	    cin>>coef;
	    cout<<endl<<" Enter Exponent: ";
	    cin>>expo;
	    next=NULL;
	   }
	  void link(node *p,node *hd)
	   {
	    node *t;
	    t=hd;
	    while(t->next!=NULL)
	      t=t->next;
	    t->next=p;
	    t=p;
	   }
	  void display(node *hd)
	   {
	    node *t;
	    t=hd;
	    while(t->next!=NULL)
	     {
	      cout<<t->coef<<"x^"<<t->expo<<" + ";
	      t=t->next;
	     }
	    cout<<t->coef<<"x^"<<t->expo<<" = 0.";
	   }
	  char compare(int exp2)
	   {
	    if(expo>exp2)
	      return('>');
	    if(expo<exp2)
	      return('<');
	    if(expo==exp2)
	      return('=');
	   }
	  node *padd(node *a,node *b)
	   {
	    node *p,*q;
	    p=a;
	    q=b;
	    node *c=new node;
	    node *d;
	    d=c;
	    while(p!=NULL && q!=NULL)
	     {
	      switch(p->compare(q->expo))
	       {
		case '=':
		 int x=p->coef+q->coef;
		 if(x!=0)
		  {
		   d=d->attach(x,p->expo,d);
		   p=p->next;
		   q=q->next;
		  }
		 break;
		case '>':
		 d=d->attach(p->coef,p->expo,d);
		 p=p->next;
		 break;
		case '<':
		 d=d->attach(q->coef,q->expo,d);
		 q=q->next;
		 break;
	       }
	     }
	    while(p!=NULL)
	     {
	      d=d->attach(p->coef,p->expo,d);
	      p=p->next;
	     }
	    while(q!=NULL)
	     {
	      d=d->attach(q->coef,q->expo,d);
	      q=q->next;
	     }
	    d->next=NULL;
	    p=c;
	    c=c->next;
	    delete p;
	    return(c);
	   }
	  node *attach(int item,int exp,node *d)
	   {
	    node *x;
	    x=new node;
	    x->coef=item;
	    x->expo=exp;
	    d->next=x;
	    d=x;
	    return(d);
	   }
	  node *pmul(node *a,node *b)
	   {
	    node *g,*f,*d,*m,*n,*i;
	    int k,l;
	    n=b;
	    g=NULL;
	    while(n!=NULL)
	     {
	      m=a;
	      f=new node;
	      d=f;
	      while(m!=NULL)
	       {
		l=m->coef*n->coef;
		k=m->expo+n->expo;
		d=d->attach(l,k,d);
		m=m->next;
	       }
	      d->next=NULL;
	      i=f;
	      f=f->next;
	      delete i;
	      g=g->padd(g,f);
	      n=n->next;
	     }
	    return(g);
	   }
       };
void main(void)
{
 node *hd1,*hd2,*hd;
 char a;
 clrscr();
 cout<<endl<<endl<<"\t\tEnter the first polynomial...."<<endl<<endl;
 node *p=new node;
 p->getdata();
 hd1=p;
 cout<<endl<<endl<<"Want to continue (y/n): ";
 fflush(stdin);
 cin>>a;
 while(a=='y'||a=='Y')
  {
   node *t=new node;
   t->getdata();
   t->link(t,hd1);
   cout<<endl<<endl<<"Want to continue (y/n): ";
   fflush(stdin);
   cin>>a;
  }
 cout<<endl<<endl<<"Your entered polynomial is: ";
 hd1->display(hd1);
 getch();
 clrscr();
 cout<<endl<<endl<<"\t\tEnter the second polynomial...."<<endl<<endl;
 p=new node;
 p->getdata();
 hd2=p;
 cout<<endl<<endl<<"Want to continue (y/n): ";
 fflush(stdin);
 cin>>a;
 while(a=='y'||a=='Y')
  {
   node *t=new node;
   t->getdata();
   t->link(t,hd2);
   cout<<endl<<endl<<"Want to continue (y/n): ";
   fflush(stdin);
   cin>>a;
  }
 cout<<endl<<endl<<"Your entered polynomial is: ";
 hd1->display(hd2);
 getch();
 clrscr();
 cout<<endl<<endl<<" First polynomial: ";
 hd1->display(hd1);
 cout<<endl<<endl<<" Second polynomial: ";
 hd2->display(hd2);
 cout<<endl<<endl<<" After Multiplication: ";
 hd=hd->pmul(hd1,hd2);
 hd->display(hd);
 getch();
}
