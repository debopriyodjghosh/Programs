#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define max 10
using namespace std;
class queue
{
  int a[max];
  int front,rear;
  public: queue()
	 {
	   front=-1;
	   rear=-1;
	 }
	 void addq(int item)
	 {
	   if(rear == max-1)
	   {
	     cout<<"\n queue is full";
	     return;
	   }
	   rear++;
	   a[rear]=item;
	   if(front == -1)
	   front=0;
	}
	int delq()
	{
	  int data;
	  if(front == -1)
	  {
	    cout<<"\nqueue is empty";
	    return NULL;
	  }
	  data=a[front];
	  if(front==rear)
	  front=rear=-1;
	  else
	  front++;
	  return data;
	}
	void display()
	{
	  int i;
	  for(i=0;i<=rear;i++)
	  {
	    cout<<"\t"<<a[i];
	  }
	}
};
 main()
{
  queue a;
  int ch,i;

  while(1)
  {
    //clrscr();
    cout<<"\nPress 1 to insert";
    cout<<"\nPress 2 to delete";
    cout<<"\nPress 3 to display";
    cout<<"\nPress 4 to exit";
    cout<<"\nEnter your choice";
    cin>>ch;
    switch(ch)
    {
      case 1: cout<<"Enter the value to insert";
	      cin>>i;
	      a.addq(i);
	      getch();
	      break;
      case 2:i=a.delq();
	     cout<<i<<" Value deleted";
	     getch();
	     break;
      case 3:a.display();
	     getch();
	     break;
      case 4:exit(0);
	     getch();
	     break;
     default:cout<<"Wrong input";
	     getch();
	     break;
     }
  }
}
