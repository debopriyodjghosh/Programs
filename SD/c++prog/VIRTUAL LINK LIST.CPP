    #include"iostream.h"
    #include"stdlib.h"
    #include"conio.h"

    class a
   {
     private:

     struct node
    {
     int data;
     node *link;
    }*p;

     public:

     void create()
    {
      p=NULL;
    }
    void create1()
   {
     node *q,*t;

     if(p==NULL)
   {
  //   q=p;
     q=new node;
     cout<<"\n\tput the int value";
     cin>>q->data;
     q->link=NULL;
     p=q;
   }
   else
   {
     q=p;
     while(q->link!=NULL)
     q=q->link;

     t=new node;
     cout<<"\n\tput the int value";
     cin>>t->data;
     t->link=NULL;
     q->link=t;
   }
   }



     void display()
   {
      node *q;
      q=p;
      while(q!=NULL)
   {
      cout<<q->data;
      cout<<" -----> ";
      q=q->link;
   }
    cout<<"\n";
   }



    void delet()
  {
   int kh;
   node *q,*m;
   cout<<"\n\tTake Choice :  ";
   cout<<"1 First ,  2 Last  ";
   cin>>kh;
   switch(kh)
 {
   case 1: q=p;
	   p=q->link;
	   delete q;
	   break;

   case 2 :  q=p;
	     m=p;
	     while(m->link!=NULL)
	    {
	     q=m;
	     m=m->link;
	     }
	     q->link=NULL;
	     delete m;
	    break;
  }
  }

     void insert()
   {
    int kh,th;
    node *q,*t,*j,*m;

    cout<<"\n\tput your choice : ";
    cout<<"\n\t1 BEGINING  2 END  3 AFTER NODE";
    cin>>kh;
    switch(kh)
  {
    case 1:   q=p;
	      t=new node;
	      cout<<"\n\tput the data ";
	      cin>>t->data;
	      t->link=q;
	      p=t;
	      break;

    case 2:   q=p;
	      t=new node;
	      cout<<"\n\tput the data";
	      cin>>t->data;
	      t->link=NULL;

	     while(q->link!=NULL)
	     q=q->link;
	     q->link=t;
	     p=q;
	     break;

    case 3:  q=p;
	     cout<<"put the node's value after you insert";
	     cin>>th;
	     t=new node;
	     cout<<"\n enter the value:";
	     cin>>t->data;
	     t->link=NULL;

	     while(q->data!=th && q!=NULL)
		q=q->link;
	     if(q!=NULL)
	     {
		m=q->link;
		t->link = m;
		q->link=t;
	     }
	     else
		delete t;


	    break;
    }
   }
    };

     void main()
    {
     a m;
     int ch;
     clrscr();
     m.create();
     while(1)
   {
     cout<<"\n\tput your choice here";
     cout<<"\n\n\t 1 CREATE , 2 DISPLAY , 3 EXIT , 4 INSERT , 5 DELETE: ";
     cin>>ch;
       switch(ch)
   {
     case 1: m.create1();
	     break;
     case 2: m.display();
	     break;
     case 3: exit(0);
	     break;
     case 4: m.insert();
	     break;
     case 5: m.delet();
	     break;

   }
   }

    getche();
  }