#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class mn;

class sn
	{
	 private:
	    mn *add1;
	    sn *add2;
	 public:
	  friend sn* joinsn(mn *,sn *,mn *);
	  friend sn* joinsn2(sn *,sn *,mn *);
	  void display2(sn *);
	};

class mn
	{
	 private:
	     char vertex;
	     mn *link1;
	     sn *link2;
	 public:
	  void getdata();
	  mn* link(mn *,mn *);
	  friend sn* joinsn(mn *,sn *,mn *);
	  friend sn* joinsn2(sn *,sn *,mn *);
	  mn* create(mn *);
	  char val()
	   {
	    return vertex;
	   }
	  void display(mn *);
	};


void sn::display2(sn *ptr)
{
 while(ptr->add2!=NULL)
  {
   cout<<ptr->add1->val();;
   cout<<" , ";
   ptr=ptr->add2;
  }
 if(ptr!=NULL)
   cout<<ptr->add1->val()<<" .";
}


void mn::display(mn *h)
{
 clrscr();
 mn *t=h;
 cout<<endl<<endl<<"\t VERTEX NAME\t: \tADJACENTLY CONNECTED VERTICES:";
 while(t!=NULL)
  {
   cout<<endl<<endl<<"\t\t"<<t->vertex;
   if(t->link2==NULL)
       cout<<"\t\tNULL.";
   else
    {
     sn *ptr;
     ptr=t->link2;
     cout<<"\t\t";
     ptr->display2(ptr);
    }
   t=t->link1;
  }
}


void mn::getdata(void)
{
 cout<<endl<<endl<<" Enter the name of the vertex: ";
 fflush(stdin);
 cin>>vertex;
 link1=NULL;
 link2=NULL;
}


mn* mn::link(mn *h,mn *p)
{
 mn *t=h;
 while(t->link1!=NULL)
   t=t->link1;
 t->link1=p;
 return h;
}


mn* mn::create(mn *h)
{
 mn *t=h;
 mn *p;
 while(t!=NULL)
  {
   clrscr();
   cout<<endl<<endl<<" Enter the Name of the vertex directly connected with "<<t->vertex<<" Vertex ( Press n for none ): ";
   char b;
   fflush(stdin);
   cin>>b;
   if(b=='n'||b=='N')
     t->link2=NULL;
   if(b!='n' && b!='N')
    {
     p=h;
     while(p->vertex!=b && p->link1!=NULL)
	p=p->link1;
     sn *ptr=new sn;
     ptr=joinsn(p,ptr,t);
     cout<<endl<<endl<<" Do you want to continue (y/n): ";
     fflush(stdin);
     char a;
     cin>>a;
     while(a=='Y'||a=='y')
      {
       sn *t1=new sn;
       cout<<endl<<endl<<" Enter the vertex name: ";
       char c;
       fflush(stdin);
       cin>>c;
       p=h;
       while(p->vertex!=c && p->link1!=NULL)
	 p=p->link1;
       ptr=joinsn2(t1,ptr,p);
       cout<<endl<<endl<<" Do you want to continue (y/n): ";
       fflush(stdin);
       cin>>a;
      }
    }
   t=t->link1;
  }
 return h;
}


sn* joinsn2(sn *t1,sn *ptr,mn *p)
{
 t1->add1=p;
 t1->add2=NULL;
 ptr->add2=t1;
 ptr=t1;
 return ptr;
}


sn* joinsn(mn *p,sn *ptr,mn *t)
{
 ptr->add1=p;
 ptr->add2=NULL;
 t->link2=ptr;
 return ptr;
}


void main(void)
{
 mn *hd;
 clrscr();
 mn *t=new mn;
 t->getdata();
 hd=t;
 cout<<endl<<endl<<" Do you want to continue(y/n): ";
 fflush(stdin);
 char a;
 cin>>a;
 mn *p;
 while(a=='y'||a=='Y')
  {
   p=new mn;
   p->getdata();
   hd=hd->link(hd,p);
   cout<<endl<<endl<<" Do you want to continue(y/n): ";
   fflush(stdin);
   cin>>a;
  }
 hd=hd->create(hd);
 hd->display(hd);
 getch();
}