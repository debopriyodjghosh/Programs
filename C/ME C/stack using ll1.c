#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *link;
};
typedef struct list list;
list* push(list *top,int a)
{
    list *cur;
    cur=(list*)malloc(sizeof(list));
    cur->data=a;
    cur->link=top;
    top=cur;
    return top;
}
int pop(list **top)
{
    int a;
    list *c;
    if(*top==NULL)
     {
         printf("\nstack is empty");
        return 0;
     }
     c=*top;
     a=(*top)->data;
     *top=(*top)->link;
     free (c);
     return a;
}

void display(list *top)
{
    list *p;
    p=top;
    for(p=top;p!=NULL;p=p->link)
    {
        printf("%10d",p->data);
    }
}

void main()
{
    list *top=NULL;
    int i,j,k;
    do{
        printf("\n\n****STACK USING LINKED LIST***\n\n\n1.PUSH\n\t2.POP\n\t\t3.EXIT\n\nenter your choice : ");
        scanf("%d",&i);
        switch(i)
        {
            case 1: printf("\nEnter data : ");
                    scanf("%d",&i);
                    top=push(top,i);
                    display(top);
                    break;
            case 2: j=pop(&top);
                    if(j!=0)
                    {
                        printf("\npoped element is %d\n\n ",j);
                        display(top);
                    }
                    break;
        }
}while(i!=3);
}
