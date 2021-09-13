#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *link;
}NODE;
class slink
{
private:
    NODE *p;
public:
    slink()
    {
        p=NULL;
    }
    slink(int);
    void display();
    void addbeg(int);
    void addend(int);
    void addafter(int,int);
    void del(int);
    int ncount();
};
slink::slink(int k)
{
    p=new NODE();
    p->data=k;
    p->link=NULL;
}
void slink::display()
{
    NODE *temp=p;
    cout<<"\n";
    while(temp)
    {
        cout<<"\t"<<temp->data;
        temp=temp->link;
    }
}
void slink::addbeg(int k)
{
    NODE *temp=new NODE();
    temp->data=k;
    temp->link=p;
    p=temp;
}
void slink::addend(int k)
{
    NODE *temp;
    if(p==NULL)
    {
        p=new NODE();
        p->data=k;
        p->link=NULL;
    }
    else
    {
        temp=p;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=new NODE();
        temp=temp->link;
        temp->data=k;
        temp->link=NULL;
    }
}
void slink::addafter(int pos,int k)
{
    int i;
    NODE *temp,*r;
    if(pos==0)
    {
        addbeg(k);
    }
    temp=p;
    for(i=1;i<pos;i++)
    {
        if(temp==NULL)
        {
            cout<<"\n Invalid Position";
            return;
        }
        temp=temp->link;
    }
    r=new NODE();
    r->data=k;
    r->link=temp->link;
    temp->link=r;
}
void slink::del(int k)
{
    NODE *temp,*r;
    temp=p;
    while(temp)
    {
        if(temp->data==k)
        {
            if(temp==p)
                p=p->link;
            else
                r->link=temp->link;
            delete(temp);
            return;
        }
        else
        {
            r=temp;
            temp=temp->link;
        }
    }
    cout<<"\n Item not found to delete";
}
int slink::ncount()
{
    int c=0;
    NODE *temp=p;
    while(temp)
    {
        c++;
        temp=temp->link;
    }
    return(c);
}
int main()
{
    slink ob;
    int ch;
    do
    {
        cout<<"\n 1.Add node at Beginning\n 2.Add node at End \n 3.Add node after specified position \n 4.Display Linked list \n 5.Count the nos of list \n 6.Delete node \n 7.Exit ";
        cout<<"\n Enter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
                int a;
                cout<<"\n Enter the value for Node:";
                cin>>a;
                ob.addbeg(a);
                break;
            case 2:
                int b;
                cout<<"\n Enter value of Node:";
                cin>>b;
                ob.addend(b);
                break;
            case 3:
                int pos,v;
                cout<<"\n Enter the position :";
                cin>>pos;
                cout<<"\n Enter the value for Node:";
                cin>>v;
                ob.addafter(pos,v);
                break;
            case 4:
                ob.display();
                break;
            case 5:
                int c;
                c=ob.ncount();
                cout<<"\n Total nos of Node :"<<c;
                break;
            case 6:
                int e;
                cout<<"\n Enter the value to delete: ";
                cin>>e;
                ob.del(e);
                break;
            case 7:
                cout<<"\n The End";
                break;
            default:
                cout<<"\n Invalid choice";
        }
    }while(ch!=7);
return 0;
}
