// Iterative C++ program to reverse a linked list
#include<iostream>
using namespace std;

class Node
{
    private:
        int data;
        Node* next;
    public:
        /*Node()
        {
            return (0);
        }
        Node(int x)
        {
            return x;
        }*/
        friend void Push(int);
        friend void display(Node *);
        friend void reverse(Node**);
};

void Push(int n)
{
    Node *temp,*p;
    for(int i=0;i<n;i++)
    {
        if(i!=0)
        {
            p=new(Node);
            temp->next=p;
        }
        cout<<"Enter the node:";
        cin>>p->data;
        /*if(p->data==0)
            temp->data=Node();
        else*/  //Constructor diye Load korte cheyechilm, but parini
            temp->data=n;
    }
    temp->next=NULL;
}

void display(Node *head)
{
    Node *temp=head;
    while(temp->next!=NULL)
    {
        cout<<"  "<<temp->data;
        temp=temp->next;
    }
}

void reverse(Node** head_ref)
{
    Node* prev=NULL;
    Node* current=*head_ref;
    Node* next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next = prev;
        prev=current;
        current=next;
    }
    *head_ref=prev;
}

int main()
{
    Node *head;
    int n;
    cout<<"Enter How many nodes you want?";
    cin>>n;
    Push(n);
    cout<<"Given linked list\n";
    display(head);
    reverse(&head);
    cout<<"\nReversed Linked list \n";
    display(head);
}

