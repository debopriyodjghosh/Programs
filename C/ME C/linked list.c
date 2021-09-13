#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
    {
    int data;
    struct node *next;
    }node;
node *getnode(int x);
node *createlist(node *h);
void display(node *h);
node *insertbeg(node *h);
node *insertend(node *h);
node *insertmid(node *h);
node *delbeg(node *h);
node *delend(node *h);
node *delele(node *h);

int main()
    {
    node *head=NULL;
    int ch;
    do{
        printf("1. create list\n2. display list\n3. insertbeg\n4. insert end\n5. insert any pos\n6. delete beg\n7. delete end\n8. delete any position\n9. exit from program\n enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            head =createlist(head);
            break;
            
            case 2:
            printf("\n elements are\n");
            display(head);
            break;
            
            case 3:
            head = insertbeg(head);
            break;
            
            case 4:
            head = insertend(head);
            break;
            
            case 5:
            head= insertmid(head);
            break;
            
            case 6:
            head=delbeg(head);
            break;
            
            case 7:
            head=delend(head);
            break;
            
            case 8:
            head=delele(head);
            break;
            
            case 9:
            exit (0);
    
            
            default:
            printf("wrong choice");
        }
    }while(1);
}

node *getnode(int x) 
{
    node *p;
    p=(node*)malloc(sizeof(node));
    p->data=x;
    p->next=NULL;
    return p;
}

node *createlist(node*h)
{
    node*p,*q;
    int x;
    char c='y';
    h=NULL;
    do{
        printf("enter an element");
        scanf("%d",&x);
        p=getnode(x);
        if(h==NULL)
        h=p;
        else
        q->next=p;
        q=p;
        printf("do you want to continue? (y/n)");
        fflush(stdin);
        scanf("%c",&c);
    }
    while (c=='y'||c=='Y');
        return h;
}

node *insertbeg(node *h)
    {
        int x;
        node *p;
        if(h==NULL)
        {
            printf("list not exist");
            getch ();
            return h;
        }
        printf("enter an element");
        scanf("%d",&x);
        p=getnode(x);
        p->next=h;
        h=p;
        return h;
    }
    
    node *insertend(node*h)
    {
        int x;
        node *p,*q;
        if(h==NULL)
        {
            printf("list not exist");
            getch ();
            return h;
        }
        printf("enter an element");
        scanf("%d",&x);
        p=getnode(x);
        q=h;
        while(q->next!=NULL)
        q=q->next;
        q->next=p;
        return h;
    }
    

    
    
