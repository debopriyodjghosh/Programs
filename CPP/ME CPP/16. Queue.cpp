#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct list
{
    int data;
    struct list *next;
}list;
list *front,*rear,*top;
int flag=0;
void addrear();
void create();
void delfront();
void display();
//void reverse();
list* getnode();
void main()
{
    int w;
    do
    {
        printf("\t-----MENU-----");
        printf("\n\t1.CREATE QUEUE");
        printf("\n\t2.INSERT QUEUE");
        printf("\n\t3.DELETE QUEUE");
        printf("\n\t4.DISPLAY QUEUE");
        printf("\n\t5.REVERSE QUEUE");
        printf("\n\t6.EXIT");
        printf("\nEnter your choise:");
        scanf("%d",&w);
        switch(w)
        {
        case 1:
            if(flag==0)
                create();
            else
            {
                printf("The Queue is already created...");
                getch();
            }
        case 2:
            addrear();
            break;
        case 3:
            delfront();
            break;
        case 4:
            display();
            break;
        /*case 5:
            reverse();
            break;*/
        case 6:
            exit(0);
        default:
            printf("\n\tInvalid Choise!!!");
            getch();
            break;
        }
    }while(1);
}
void create()
{
    list *p;
    int n,i=1;
    printf("\n\tEnter how many elements you want to add:");
    scanf("%d",&n);
    if(front==NULL&&rear==NULL)
    {
        rear=(list*)malloc(sizeof(list));
        printf("\n\tEnter the number:");
        scanf("%d",&rear->data);
        rear->next=NULL;
        front=rear;
    }
    while(i<n)
    {
        p=(list*)malloc(sizeof(list));
        printf("\n\tEnter the number:");
        scanf("%d",&p->data);
        p->next=NULL;
        rear=p;
        i++;
    }
    flag=1;
}
void addrear()
{
    list *p;
    if(flag==0)
    {
        printf("\n\tThere is no QUEUE. Please Create a QUEUE.....");
        getch();
        return;
    }
    if(front==NULL&&rear==NULL)
    {
        rear=(list*)malloc(sizeof(list));
        printf("\n\tEnter the element:");
        scanf("%d",&rear->data);
        rear->next=NULL;
        front=rear;
        return;
    }
    p=(list*)malloc(sizeof(list));
    printf("\n\tEnter the element:");
    scanf("%d",&p->data);
    p->next=NULL;
    rear=p;
}
void delfront()
{
    list *p;
    if(front==NULL)
    {
        printf("\n\tThe QUEUE is Underflow....");
        rear=NULL;
        getch();
        flag=0;
    }
    p=front;
    printf("\n\tThe Popped value is %d",p->data);
    front=front->next;
    getch();
}
void display()
{
    list *p;
    p=front;
    if(p==NULL)
    {
        printf("\n\tThe QUEUE is Underflow...");
        getch();
        return;
    }
    else
    {
        printf("\n\tThe QUEUE is ");
        while(p!=NULL)
        {
            printf("\t%d",p->data);
            p=p->next;
        }
    }
    getch();
}
