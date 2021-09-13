//circular singly linked-list full;
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
class ln
       {
	private:
	  int data;
	  ln *next;
	public:
	  void getdata()
	   {
	    cout<<endl<<" Enter data: ";
	    cin>>data;
	    next=NULL;
	   }
	  void link(ln *p,ln *hd)
	   {
	    ln *t;
	    t=hd;
	    while(t->next!=hd)
	      t=t->next;
	    p->next=t->next;
	    t->next=p;
	    t=p;
	   }
	  void display(ln *hd)
	   {
	    ln *t;
	    t=hd;
	    while(t->next!=hd)
	     {
	      cout<<t->data<<" ->";
	      t=t->next;
	     }
	    cout<<t->data<<" -> "<<"End.";
	   }
	  ln *insertbeg(ln *new1,ln *hd)
	   {
	    ln *ptr;
	    ptr=hd;
	    while(ptr->next!=hd)
	      ptr=ptr->next;
	    ptr->next=new1;
	    new1->next=hd;
	    hd=new1;
	    return(hd);
	   }
	  ln *insertmid(ln *p,int pos,ln *hd)
	   {
	    int c=0;
	    ln *t;
	    t=hd;
	    while(c<pos-2 && t->next!=hd)
	     {
	      c++;
	      t=t->next;
	     }
	    if(t->next==hd)
	     {
	      hd=p->insertend(p,hd);
	      return(hd);
	     }
	    p->next=t->next;
	    t->next=p;
	    t=p;
	    return(hd);
	   }
	  ln *insertend(ln *p,ln *hd)
	   {
	    ln *t;
	    t=hd;
	    while(t->next!=hd)
	       t=t->next;
	    t->next=p;
	    p->next=hd;
	    return(hd);
	   }
	  ln *deletebeg(ln *hd)
	   {
	    ln *ptr,*ptr1;
	    ptr1=ptr=hd;
	    while(ptr->next!=hd)
	       ptr=ptr->next;
	    hd=hd->next;
	    ptr->next=hd;
	    cout<<endl<<endl<<" The deleted node element is: "<<ptr1->data;
	    getch();
	    delete ptr1;
	    return(hd);
	   }
	  ln *deletemid(ln *hd,int ele)
	   {
	    ln *ptr;
	    ln *ptr2;
	    ln *ptr1;
	    ptr=hd;
	    while(ptr->next->data!=ele &&ptr->next!=hd)
	       ptr=ptr->next;
	    if(ptr->next==hd && ptr->data!=ele)
	     {
	      cout<<endl<<endl<<" element not found!!!!";
	      getch();
	      return(hd);
	     }
	    if(ptr->next==hd&&ptr->data==ele)
	     {
	      hd=ptr->deleteend(hd);
	      return(hd);
	     }
	    ptr2=ptr->next->next;
	    ptr1=ptr->next;
	    ptr->next=ptr2;
	    cout<<endl<<endl<<" The deleted node element is: "<<ptr1->data;
	    getch();
	    delete ptr1;
	    return(hd);
	   }
	  int test(){return(data);}
	  ln *deleteend(ln *hd)
	   {
	    ln *ptr1,*ptr2;
	    ptr2=ptr1=hd;
	    while(ptr1->next!=hd)
	     {
	      ptr2=ptr1;
	      ptr1=ptr1->next;
	     }
	    cout<<endl<<endl<<" The deleted item is: "<<ptr1->data;
	    getch();
	    ptr2->next=ptr1->next;
	    delete ptr1;
	    return(hd);
	   }
	  ln *link1(ln *hd,ln *p)
	   {
	    hd=p;
	    p->next=hd;
	    return(hd);
	   }
       };
void main(void)
{
 ln *hd;
 char a;
 int ch,flag=0;
 ln *t;
 clrscr();
 do
  {
   do
    {
     flag=0;
     clrscr();
     cout<<endl<<"****\t\tMENU\t\t****";
     cout<<endl<<endl<<" CREATE LIST\t\t-->PRESS 1.";
     cout<<endl<<endl<<" INSERT AT BEG\t\t-->PRESS 2.";
     cout<<endl<<endl<<" INSERT AT MID\t\t-->PRESS 3.";
     cout<<endl<<endl<<" INSERT AT END\t\t-->PRESS 4.";
     cout<<endl<<endl<<" DELETE AT BEG\t\t-->PRESS 5.";
     cout<<endl<<endl<<" DELETE AT MID\t\t-->PRESS 6.";
     cout<<endl<<endl<<" DELETE AT END\t\t-->PRESS 7.";
     cout<<endl<<endl<<" DISPLAY LIST\t\t-->PRESS 8.";
     cout<<endl<<endl<<" EXIT \t\t\t-->PRESS 9.";
     cout<<endl<<endl<<" Now enter your choice: ";
     cin>>ch;
     if(ch<1||ch>9)
      {
       cout<<endl<<" wrong choice entered...!!!! Try again...";
       getch();
       flag=1;
      }
    }while(flag);
   clrscr();
   switch(ch)
    {
     case 1:
      {
       cout<<endl<<"create list:-->"<<endl;
       ln *p=new ln;
       p->getdata();
       hd=hd->link1(hd,p);
       cout<<endl<<" want to continue(y/n): ";
       fflush(stdin);
       cin>>a;
       while(a=='y'||a=='Y')
	{
	 ln *ptr=new ln;
	 ptr->getdata();
	 ptr->link(ptr,hd);
	 cout<<endl<<" want to continue(y/n): ";
	 fflush(stdin);
	 cin>>a;
	}
       cout<<endl<<endl<<" Insertion Complete Successfully...";
       getch();
       break;
      }
     case 8:
      {
       cout<<endl<<" display list:-->";
       t=hd;
       cout<<endl<<endl<<endl<<endl<<" Your entered list: ";
       hd->display(hd);
       getch();
       break;
      }
     case 9:
      exit(0);
     case 2:
      {
       cout<<endl<<" Insert at beg.."<<endl;
       ln *p=new ln;
       p->getdata();
       hd=p->insertbeg(p,hd);
       cout<<endl<<endl<<endl<<"Insertion successful....";
       getch();
       break;
      }
     case 3:
      {
       int pos;
       cout<<endl<<" Insert at middle.."<<endl;
       cout<<endl<<" Enter the position: ";
       cin>>pos;
       ln *p=new ln;
       p->getdata();
       if(pos!=1)
	 hd=p->insertmid(p,pos,hd);
       else
	 hd=p->insertbeg(p,hd);
       cout<<endl<<endl<<endl<<"Insertion successful....";
       getch();
       break;
      }
     case 4:
      {
       cout<<endl<<" Insert at end.."<<endl;
       ln *p=new ln;
       p->getdata();
       hd=p->insertend(p,hd);
       cout<<endl<<endl<<endl<<"Insertion successful....";
       getch();
       break;
      }
     case 5:
      {
       cout<<endl<<" delete at beg.."<<endl;
       hd=hd->deletebeg(hd);
       break;
      }
     case 6:
      {
       cout<<endl<<" delete at mid.."<<endl;
       int ele;
       cout<<endl<<endl<<" Insert the node-element to be deleted: ";
       cin>>ele;
       int t=hd->test();
       if(ele==t)
	hd=hd->deletebeg(hd);
       else
	hd=hd->deletemid(hd,ele);
       break;
      }
     case 7:
      {
       cout<<endl<<" delete at end.."<<endl;
       hd=hd->deleteend(hd);
       break;
      }
    }
  }while(1);
}





