     /* QUEUE USING C++ */
     /* SUBHADEEP CHAKRABORTY */  

  #include"iostream.h"
  #include"stdlib.h"
  #include"conio.h"
  #define MAX 5

  class queue
  {
   private:
   int q[MAX];
   int front,rear,i;
   public:
   queue()
   {
   front=-1;
   rear=-1;
   }
   void ins()
   {
    if(rear==MAX-1)
    cout<<"\n\tQUEUE IS FULL";
    else
    {
     if(front==-1)
    {
     front=0;
     rear=0;
    }
     cout<<"\n\tput the value:  ";
     cin>>q[rear];
     rear++;
    }
   }
    void del()
   {
     int item;
     if(front==-1)
     cout<<"QUEUE IS EMPTY";
     else
    {
      if(front==rear)
     {
       front=-1;
       rear=-1;
     }
      if(front<rear)
      {
       item=q[front];
       front++;
      }
      }
      }
     void display()
   {
    for(i=front;i<rear;i++)
     cout<<q[i];
     cout<<"\n";
   }
   };

  void main()
  {
   int ch,i;
   queue m;
   while(i=1)
   {
    cout<<"enter your choice";
    cout<<"\n\t1 INSERT  2 DELETE  3 DISPLAY  4 EXIT  "  ;
    cin>>ch;
    switch(ch)
   {
    case 1: m.ins();
	    break;
    case 2: m.del();
	    break;
    case 3: m.display();
	    break;
    case 4: exit(0);
	    break;
    }
    }
    getche();
   }