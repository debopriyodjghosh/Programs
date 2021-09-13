//Doubly linked-list full;
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
class ln
       {
	private:
	  int data;
	  ln *right;
	  ln *left;
	public:
	  void getdata()
	   {
	    cout<<endl<<" Enter data: ";
	    cin>>data;
	    left=right=NULL;
	   }
	  ln *link(ln *p,ln *hd2)
	   {
	    hd2->right=p;
	    p->left=hd2;
	    hd2=p;
	    return hd2;
	   }
	  void display(ln *hd1,int k)
	   {
	    ln *t;
	    if(k==1)
	     {
	      t=hd1;
	      while(t!=NULL)
	       {
		cout<<t->data<<" ->";
		t=t->right;
	       }
	      cout<<"End.";
	     }
	    else
	     {
	      t=hd1;
	      while(t!=NULL)
	       {
		cout<<t->data<<" ->";
		t=t->left;
	       }
	      cout<<"End.";
	     }
	   }
	  ln *insertbeg(ln *p,ln *hd1)
	   {
	    p->right=hd1;
	    hd1->left=p;
	    hd1=p;
	    return(hd1);
	   }
	  ln *insertmid(ln *p,int pos,ln *hd1)
	   {
	    int c=0;
	    ln *t;
	    t=hd1;
	    while(c<pos-2 && t->right!=NULL)
	     {
	      c++;
	      t=t->right;
	     }
	    p->right=t->right;
	    p->left=t;
	    t->right->left=p;
	    t->right=p;
	    t=p;
	    return(hd1);
	   }
	  ln *insertend(ln *p,ln *hd2)
	   {
	    hd2->right=p;
	    p->left=hd2;
	    hd2=p;
	    return(hd2);
	   }
	  ln *deletebeg(ln *hd1)
	   {
	    ln *ptr;
	    ptr=hd1;
	    hd1=hd1->right;
	    hd1->left=NULL;
	    cout<<endl<<endl<<" The deleted node element is: "<<ptr->data;
	    getch();
	    delete ptr;
	    return(hd1);
	   }
	  ln *deletemid(ln *hd1,int ele)
	   {
	    ln *ptr;
	    ln *ptr2;
	    ln *ptr1;
	    ptr=hd1;
	    while(ptr->right->data!=ele &&ptr->right!=NULL)
	       ptr=ptr->right;
	    if(ptr->right==NULL && ptr->data!=ele)
	     {
	      cout<<endl<<endl<<" element not found!!!!";
	      getch();
	      return(hd1);
	     }
	    ptr2=ptr->right->right;
	    ptr1=ptr->right;
	    ptr->right=ptr2;
	    ptr2->left=ptr1->left;
	    cout<<endl<<endl<<" The deleted node element is: "<<ptr1->data;
	    getch();
	    delete ptr1;
	    return(hd1);
	   }
	  int test(){return(data);}
	  ln *deleteend(ln *hd2)
	   {
	    cout<<endl<<endl<<" The deleted item is: "<<hd2->data;
	    getch();
	    ln *ptr;
	    ptr=hd2;
	    hd2=hd2->left;
	    hd2->right=NULL;
	    delete ptr;
	    return(hd2);
	   }
       };
void main(void)
{
 ln *hd1,*hd2;
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
     cout<<endl<<"****\t\tMENU\t\t*****"<<endl<<endl;
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
       hd2=hd1=p;
       cout<<endl<<" want to continue(y/n): ";
       fflush(stdin);
       cin>>a;
       while(a=='y'||a=='Y')
	{
	 ln *ptr=new ln;
	 ptr->getdata();
	 hd2=ptr->link(ptr,hd2);
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
       cout<<endl<<endl<<endl<<"Forward--->1."<<endl<<endl<<"Backword--->2."<<endl<<endl<<"Now enter your choice: ";
       int k;
       cin>>k;
       cout<<endl<<endl<<endl<<endl<<" Your entered list: ";
       if(k==1)
	  hd1->display(hd1,k);
       else
	  hd2->display(hd2,k);
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
       hd1=p->insertbeg(p,hd1);
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
	 hd1=p->insertmid(p,pos,hd1);
       else
	 hd1=p->insertbeg(p,hd1);
       cout<<endl<<endl<<endl<<"Insertion successful....";
       getch();
       break;
      }
     case 4:
      {
       cout<<endl<<" Insert at end.."<<endl;
       ln *p=new ln;
       p->getdata();
       hd2=p->insertend(p,hd2);
       cout<<endl<<endl<<endl<<"Insertion successful....";
       getch();
       break;
      }
     case 5:
      {
       cout<<endl<<" delete at beg.."<<endl;
       hd1=hd1->deletebeg(hd1);
       break;
      }
     case 6:
      {
       cout<<endl<<" delete at mid.."<<endl;
       int ele;
       cout<<endl<<endl<<" Insert the node-element to be deleted: ";
       cin>>ele;
       int t=hd1->test();
       if(ele==t)
	hd1=hd1->deletebeg(hd1);
       else
	if((hd2->test())==ele)
	  hd2=hd2->deleteend(hd2);
	else
	  hd1=hd1->deletemid(hd1,ele);
       break;
      }
     case 7:
      {
       cout<<endl<<" delete at end.."<<endl;
       hd2=hd2->deleteend(hd2);
       break;
      }
    }
  }while(1);
}





