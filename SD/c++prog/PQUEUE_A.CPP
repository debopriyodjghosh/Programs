#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 50
struct pq
	{
	 int data;
	 int prio;
	};
class pqueue
	  {
	   private:
	    pq a[max];
	    int rear;
	    int front;
	   public:
	    pqueue(){rear=front=-1;}
	    void add()
	     {
	      if(front==-1)
		front=0;
	      if(rear==max-1)
	       {
		cout<<endl<<endl<<"QUEUE is overflow!!!!";
		getch();
		return;
	       }
	      else
	       {
		cout<<endl<<endl<<" Enter the element to ADD: ";
		int ele;
		cin>>ele;
		cout<<endl<<endl<<" Enter the PRIORITY of the element: ";
		int p;
		cin>>p;
		rear++;
		a[rear].data=ele;
		a[rear].prio=p;
		cout<<endl<<endl<<" ADD Successful....";
	       }
	      getch();
	     }
	    void del()
	     {
	      if(front!=-1)
	       {
		if(front==rear)
		 {
		  cout<<endl<<endl<<" DELETED element is: "<<a[front].data;
		  cout<<endl<<endl<<" Element-PRIORITY is: "<<a[front].prio;
		  front=rear=-1;
		 }
		else
		 {
		  int min=a[front].prio;
		  int pos=front;
		  int c=front+1;
		  while(c<=rear)
		   {
		    if(min>a[c].prio)
		     {
		      min=a[c].prio;
		      pos=c;
		     }
		    c++;
		   }
		  cout<<endl<<endl<<" DELETED element is: "<<a[pos].data;
		  cout<<endl<<endl<<" Element-PRIORITY is: "<<a[pos].prio;
		  for(c=pos;c<rear;c++)
		   {
		    a[c].data=a[c+1].data;
		    a[c].prio=a[c+1].prio;
		   }
		  rear--;
		 }
	       }
	      else
	       cout<<endl<<endl<<"QUEUE is empty!!!";
	      getch();
	     }
	    void toq()
	     {
	      if(front!=-1)
	       {
		cout<<endl<<endl<<" FRONT-OF-QUEUE element is: "<<a[front].data;
	       }
	      else
	       cout<<endl<<endl<<"QUEUE is empty!!!";
	      getch();
	     }
	  };
void main(void)
{
 pqueue l;
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
     cout<<endl<<endl<<" FRONT-OF-QUEUE \t\t-->PRESS 3.";
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
      l.toq();
      break;
     case 4:
      exit(0);
    }
  }while(1);
}


