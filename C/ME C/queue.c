/*Implementation of queue operation using array*/
#include<stdio.h>    		//header file inclusion
#include<conio.h>
#define size 5
struct queue
{
	int data[5];
	int front;
	int rear;
};
typedef struct queue queue;
queue s;
void qinsert(int);         //function declaration
int qdelete(void);
void qdisplay(void);
void main()
{
	int n,a,p;  				// variable declearation
	char ans;
   s.front=-1;
	s.rear=-1;
	clrscr();
	// implement main program using Switch Case and Function
	do
	{
		printf("\n\t *** Operations of Queue using array ***");
		printf("\n\n\t MENU: \n\t1.Insert \n\t2.Delete \n\t3.Display");
		printf("\n\n\t Enter your choice::  ");    //input from user
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("\n enter a no.= ");
				scanf("%d",&a);
				qinsert(a);			//function call
				qdisplay();
				break;
			case 2:
				p=qdelete();
				if(s.front!=-1)
				{
					printf("\n Deleted element from the Queue= %d",p); //output to user
					qdisplay();
				}
				break;
			case 3:
				qdisplay();
				break;
			default:
				printf("\n\t Wrong Input!!!");
		}
		printf("\n\t Do you want to continue (y/Y)?: ");    //asking for continuation
		fflush(stdin);
		scanf("%c",&ans);
	}while((ans=='y')||(ans=='Y'));
	printf("\n\n\t ....End of program....");
	getch();
}
//definition of the function qinsert
void qinsert(int d)
{
	if( s.rear == size -1)
	{
		printf("\n Queue is full!!!\n\n No element can be inserted untill the total queue is empty");
		return;
	}
	if(s.front==-1)
	{
		s.front=0;
	}
	s.rear++;
	s.data[s.rear]=d;
	return;
} 					/*End of qinsert() */
//definition of the function qdelete
int qdelete(void)
{
	int m;
	if(s.front==-1)
	{
		printf("\n Queue is empty!!!");
		return(0);
	}
	m=s.data[s.front];
	if(s.front==s.rear)
	{
		s.front=-1;
		s.rear=-1;
	}
	else
	{
		s.front++;
	}
	return m;
}					/*End of qdelete() */
//definition of the function qdisplay
void qdisplay(void)
{
	int i;
	printf("\n Front= %d Rear= %d \n",s.front,s.rear);
	for(i=s.front;i<=s.rear;i++)
	{
		printf("\t%d\n",s.data[i]);
	}
	return;
} /*End of qdisplay() */

/*
      
         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  1

 enter a no.= 5

 Front= 0 Rear= 0
        5

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  1

 enter a no.= 10

 Front= 0 Rear= 1
        5
        10

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  1

 enter a no.= 15

 Front= 0 Rear= 2
        5
        10
        15

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  1

 enter a no.= 20

 Front= 0 Rear= 3
        5
        10
        15
        20

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  1

 enter a no.= 25

 Front= 0 Rear= 4
        5
        10
        15
        20
        25

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  1

 enter a no.= 30

 Queue is full!!!

 No element can be inserted untill the total queue is empty
 Front= 0 Rear= 4
        5
        10
        15
        20
        25

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  2

 Deleted element from the Queue= 5
 Front= 1 Rear= 4
        10
        15
        20
        25

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  2

 Deleted element from the Queue= 10
 Front= 2 Rear= 4
        15
        20
        25

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  1

 enter a no.= 10

 Queue is full!!!

 No element can be inserted untill the total queue is empty
 Front= 2 Rear= 4
        15
        20
        25

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  2

 Deleted element from the Queue= 15
 Front= 3 Rear= 4
        20
        25

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  2

 Deleted element from the Queue= 20
 Front= 4 Rear= 4
        25

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  2

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  2

 Queue is empty!!!
         Do you want to continue (y/Y)?: y

         *** Operations of Queue using array ***

         MENU:
        1.Insert
        2.Delete
        3.Display

         Enter your choice::  4

         Wrong Input!!!
         Do you want to continue (y/Y)?: n


         ....End of program....

*/
