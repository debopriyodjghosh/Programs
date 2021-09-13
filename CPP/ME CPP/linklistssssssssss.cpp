#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
    int data;
    node* next;
public:
    node* create(node* r1)
    {
        node* r3;
        node* temp;
        if(r1==NULL)
        {
            r3=new node;
            cout<< "\n Enter data: ";
            cin>>r3->data;
            r3->next=NULL;
            r1=r3;
        }
        else
        {
            temp=r1;
            while(temp->next!=NULL)
                temp=temp->next;
            r3=new node;
            cout<<"\nenter the data: ";
            cin>>r3->data;
            r3->next=NULL;
            temp->next=r3;
        }
        return r1;
    }
    node* insert1(node *r)
    {
        node *temp,*r1;
        int p,i=2;
        temp=r;
        r1=new node;
        cout<<"\nEnter the data :";
        cin>>r1->data;
        cout<<"Enter the position: ";
        cin>>p;
        if(p==1)
        {
            r1->next=temp;
            r=r1;
        }
        else
        {
            while(i<p && temp!=NULL)
            {
                temp=temp->next;
                ++i;
            }
            r1->next=temp->next;
            temp->next=r1;
        }
        return r;

    }
    node* delete1(node* r)
    {
        node *temp;
        int p,i=2;
        temp=r;
        cout<<"Enter the position you want to delete: ";
        cin>>p;
        if(p==1)
        {
            cout<<"\ndeleted data is "<<r->data<<endl;
            r=r->next;
        }
        else
        {
            while(i<p && temp->next!=NULL)
            {
                temp=temp->next;
                i++;
            }
            if(temp->next!=NULL)
                temp->next=temp->next->next;
            else
            {
                temp->next=NULL;
            }

        }
        return r;
    }
    void display(node* r1)
    {
        node* temp;
        temp=r1;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";

    }
};
int main()
{
    node *root1=NULL;
    int ch;
    while(1)
    {
        cout<<"\n1.Create list\n2.display list\n3.insert\n4.delete\n5.exit";
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            root1=root1->create(root1);
            break;
        case 2:
            root1->display(root1);
            break;
        case 3:
            root1=root1->insert1(root1);
            break;
        case 4:
            root1=root1->delete1(root1);
            break;
        case 5:
            exit(0);
        default:
            cout<<"you enter a wrong choice: ";

        }
    }
}
