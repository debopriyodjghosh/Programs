//MERGE
#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
	int data;
	node *next;
	public:
        node* create(node *r1)
        {
			node *temp;
			node *r3;
			if(r1==NULL)
			{
				r3=new node;
				cout<<"\nEnter value :";
				cin>>r3->data;
				r3->next=NULL;
				r1=r3;
			}
			else
			{
				temp=r1;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				r3=new node;
				cout<<"Enter value :";
				cin>>r3->data;
				r3->next=NULL;
				temp->next=r3;
			}
			return r1;
        }

void show(node *r1)
{
    node *temp;
    temp=r1;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL \n";
}
};


int main()
{
	node *root1=NULL,*root2=NULL ,*root3=NULL ;
	int ch;
	while(1)
    {
        cout<<"\n ENTER 1 FOR CREATE 1...\n";
        cout<<"ENTER 2 FOR CREATE 2...\n";
        cout<<"enter 3 for exit \n";

        cout<<"\n\n enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                    root1=root1->create(root1);
                    cout<<"THE LINKED LIST IS :\n"<< "\t\t\t";
                    root1->show(root1);
                    break;
            case 2:
                    root2=root2->create(root2);
                    cout<<"THE LINKED LIST IS :\n";
                    root2->show(root2);
                    break;
            case 3:
                exit(1);
            default :
                cout<<"enter the right choice: \n";
                continue;
        }
    }

	return 0;
}
