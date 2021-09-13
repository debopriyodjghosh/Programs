#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 50
class queue
	  {
	   private:
	    int a[max];
	    int rear;
	    int front;
	   public:
	    queue(){rear=front=-1;}
	    void add()
	     {
	      if(front==-1)
	       {
		front=rear=0;
		cout<<endl<<endl<<" Enter the element to ADD: ";
		int ele;
		cin>>ele;
		a[rear]=ele;
		cout<<endl<<endl<<" ADD Successful....";
	       }
	      else if((front==0 && rear==max-1)||(rear+1==front))
		 {
		   cout<<endl<<endl<<"QUEUE is FULL!!!";
		   getch();
		   return;
		 }
	      else
	       {
		cout<<endl<<endl<<" Enter the element to ADD: ";
		int ele;
		cin>>ele;
		rear++;
		rear=rear%max;
		a[rear]=ele;
		cout<<endl<<endl<<" ADD Successful....";
	       }
	    getch();
	   }
	  void del()
	   {
	    if(front==-1)
	      cout<<endl<<endl<<"QUEUE is empty!!!";
	    else if(front==rear)
	     {
	      cout<<endl<<endl<<"DELETED element is: "<<a[front];
	      front=rear=-1;
	     }
	    else if(front==max-1)
	     {
	      cout<<endl<<endl<<"DELETED element is: "<<a[front];
	      front=0;
	     }
	    else
	     {
	      cout<<endl<<endl<<"DELETED element is: "<<a[front];
	      front++;
	     }
	    getch();
	   }
	  void toq()
	   {
	    if(front!=-1)
	     {
	      cout<<endl<<endl<<" FRONT-OF-QUEUE element is: "<<a[front];
	     }
	    else
	     cout<<endl<<endl<<"QUEUE is empty!!!";
	    getch();
	   }
	 };
void main(void)
{
 queue l;
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


