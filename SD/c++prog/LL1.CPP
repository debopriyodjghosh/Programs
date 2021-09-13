#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct link1
	  {
	   int data;
	   link1 *link;
	  };
class ll
  {
   private:
     link1 *first;
   public:
     ll(){first=NULL;}
     void additem(int d)
      {
       link1 *ptr=first;
       link1 *newlink = new link1;
       newlink->data=d;
       newlink->link=NULL;
       while(ptr->link!=NULL)
	 ptr=ptr->link;
       ptr->link=newlink;
      }
     void add1st(int d)
      {
       link1 *newlink = new link1;
       newlink->data=d;
       newlink->link=first;
       first=newlink;
      }
     void display()
      {
       link1 *current = first;
       cout<<endl<<"Your entered list: ";
       while( current != NULL)
	{
	 cout<<current->data<<" -> ";
	 current=current->link;
	}
       cout<<" End.";
      }
  };
void main(void)
{
 ll l1;
 char a;
 int n;
 clrscr();
 cout<<"Enter the first value: ";
 cin>>n;
 l1.add1st(n);
 cout<<endl<<"want to continue(y/n): ";
 fflush(stdin);
 cin>>a;
 while(a=='y'|| a=='Y')
  {
   cout<<endl<<" Enter next value: ";
   cin>>n;
   l1.additem(n);
   cout<<endl<<"want to continue(y/n): ";
   fflush(stdin);
   cin>>a;
  }
 l1.display();
 getch();
}
