#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 50
class dqueue
	  {
	   private:
	    int a[max];
	    int left;
	    int right;
	   public:
	    dqueue(){left=-1;right=max;}
	    void add()
	     {
	      if((max-right+left)<(max-1))
	       {
		cout<<endl<<endl<<" Enter the element to ADD: ";
		int ele;
		cin>>ele;
		cout<<endl<<endl<<" From which end you want to insert: "<<endl<<endl<<"Left--->1."<<endl<<endl<<"Right-->2."<<endl;
		cout<<endl<<endl<<"Now Enter your choice: ";
		int ch;
		cin>>ch;
		if(ch==1)
		 {
		  for(int i=left;i>=0;i--)
		    a[i+1]=a[i];
		  left++;
		  a[0]=ele;
		 }
		if(ch==2)
		 {
		  for(int i=right;i<max;i++)
		    a[i-1]=a[i];
		  right--;
		  a[max-1]=ele;
		 }
		cout<<endl<<endl<<" ADD Successful....";
	       }
	      else
		cout<<endl<<endl<<"QUEUE is overflow!!!!";
	      getch();
	     }
	    void del()
	     {
	      int ch;
	      if(left==-1 && right==max)
	       {
		cout<<endl<<endl<<"QUEUE is empty!!!";
		getch();
	       }
	      else
	       {
		cout<<endl<<endl<<"left -->1"<<endl<<endl<<"right-->2"<<endl<<endl<<" From which end do you want to delete (1 or 2): ";
		cin>>ch;
		if(ch==1)
		 {
		  if(left!=-1)
		   {
		    cout<<endl<<endl<<" Deleted Element: "<<a[0];
		    getch();
		    for(int i=0;i<left;i++)
		      a[i]=a[i+1];
		    left--;
		   }
		  else
		   {
		    cout<<endl<<endl<<" Deleted Element: "<<a[right];
		    getch();
		    right++;
		   }
		 }
		if(ch==2)
		 {
		  if(right!=max)
		   {
		    cout<<endl<<endl<<" Deleted Element: "<<a[max-1];
		    getch();
		    for(int i=max-1;i>right;i--)
		      a[i]=a[i-1];
		    right++;
		   }
		  else
		   {
		    cout<<endl<<endl<<" Deleted Element: "<<a[left];
		    getch();
		    left--;
		   }
		 }
	       }
	     }
	    void isempty()
	     {
	      if(left==-1 && right==max)
		cout<<endl<<endl<<" The QUEUE is empty!!!!";
	      else
	       cout<<endl<<endl<<" The QUEUE is not empty!!!!";
	      getch();
	     }
	  };
void main(void)
{
 dqueue l;
 int ch,flag=0;
 clrscr();
 do
  {
   do
    {
     flag=0;
     clrscr();
     cout<<endl<<"    ****\t\tMENU\t\t****";
     cout<<endl<<endl<<" ADD ELEMENT    \t\t-->PRESS 1.";
     cout<<endl<<endl<<" DELETE ELEMENT \t\t-->PRESS 2.";
     cout<<endl<<endl<<" EMPTY CHECKING \t\t-->PRESS 3.";
     cout<<endl<<endl<<" EXIT \t\t\t        -->PRESS 4.";
     cout<<endl<<endl<<" Now enter your choice: ";
     cin>>ch;
     if(ch<1||ch>4)
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
       l.add();
       break;
     case 2:
       l.del();
       break;
     case 3:
      l.isempty();
      break;
     case 4:
      exit(0);
    }
  }while(1);
}


