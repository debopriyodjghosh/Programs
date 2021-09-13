      #include"iostream.h"
      #include"stdlib.h"
      #include"conio.h"

      class link
     {
       private:

       struct node
      {
	int data;
	node *link;
       }*p;

       public:

       void crt_link()
      {
       p=NULL;
      }
      void add_data()
     {
      node *q,*t;

      if(p==NULL)
      {
       p=new node;
       cout<<"\n\tput the data in the node";
       cin>>p->data;
       p->link=NULL;
      }
      else
      {
	q=p;
       while(q->link!=NULL)
       q=q->link;
       t=new node;
       cout<<"\n\tput the data in the node";
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
	q=q->link;
       }
       }
     };

       void main()
      {
       link m;
       clrscr();
       m.crt_link();
       m.add_data();
       m.display();
       getche();
      }




