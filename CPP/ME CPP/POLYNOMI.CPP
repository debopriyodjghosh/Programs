#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class node
  {
  node *llink;
  node *rlink;
  float cof;
  int pow;
  public: node(){llink=rlink=NULL;cof=0.0;pow=0;}
  friend poly;
  };

class poly
  {
  node *start;
  node *end;
  public:
  poly(){start=end=NULL;}
  void create(void);
  void show(void);
  void sort(void);
  void insert(float,int);
  poly add(poly,poly);
  };

void poly::create(void)
  {
  char ch;
  node *temp;
  temp=new node;
  cout<<"\nGive the co_efficient: ";
  cin>>temp->cof;
  cout<<"\nGive the power: ";
  cin>>temp->pow;
  start=end=temp;
  cout<<"\nWant to insert more data(Y or N)? ";
  cin>>ch;
  while(ch=='Y' || ch=='y')
    {
    temp=new node;
    cout<<"\nGive the co_efficient: ";
    cin>>temp->cof;
    cout<<"\nGive the power: ";
    cin>>temp->pow;
    temp->llink=end;
    end->rlink=temp;
    end=temp;
    cout<<"\nWant to insert more data(Y or N)? ";
    cin>>ch;
    }
  return;
  }

void poly::show(void)
  {
  node *temp;
  temp=start;
  if(temp==NULL)
    {
    cout<<"\nEmpty List!";
    return;
    }
  cout<<"\nThe polynomial is: ";
  while(temp!=NULL)
    {
    cout<<temp->cof<<"x"<<temp->pow<<" ";
    temp=temp->rlink;
    }
  return;
  }

void poly::sort(void)
  {
  node *p,*q;
  q=start;
  if(q==NULL)
    {
    cout<<"\nEmpty List!";
    return;
    }
  while(q!=NULL)
    {
    p=q;
    while(p!=NULL)
      {
      if(q->pow>p->pow)
	{
	float cf;
	int pw;
	cf=p->cof;
	pw=p->pow;
	p->cof=q->cof;
	p->pow=q->pow;
	q->cof=cf;
	q->pow=pw;
	}
      p=p->rlink;
      }
    q=q->rlink;
    }
  return;
  }

void poly::insert(float x,int y)
  {
  node *temp;
  temp=new node;
  temp->cof=x;
  temp->pow=y;
  temp->llink=end;
  end->rlink=temp;
  temp->rlink=NULL;
  end=temp;
  temp=NULL;
  return;
  }

poly poly::add(poly p,poly q)
  {
  poly z;
  node *m,*n;
  m=p.start;
  n=q.start;
  while(m!=NULL && n!=NULL)
    {
    if(m->pow>n->pow)
      {
      z.insert(n->cof,n->pow);
      n=n->rlink;
      }
    if(m->pow<n->pow)
      {
      z.insert(m->cof,m->pow);
      m=m->rlink;
      }
    if(m->pow==n->pow)
      {
      z.insert((m->cof+n->cof),n->pow);
      m=m->rlink;
      n=n->rlink;
      }
    }
  if(m!=NULL)
    {
    while(m!=NULL)
      {
      z.insert(m->cof,m->pow);
      m=m->rlink;
      }
    }
  if(n!=NULL)
    {
    while(n!=NULL)
      {
      z.insert(n->cof,n->pow);
      n=n->rlink;
      }
    }
  return z;
  }

void main()
  {
  poly p,q,s;
  clrscr();
  p.create();
  p.show();
  p.sort();
  p.show();
  q.create();
  q.show();
  q.sort();
  q.show();
  s=s.add(p,q);
  s.show();
  getch();
  }