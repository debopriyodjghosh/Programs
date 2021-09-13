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
node* getdata(int i)
{
    node *n;
    n=new node;
    n->data=i;
    n->next=NULL ;
    return n;
}
node* union1(node *r1 , node *r2)
{
    node *temp1,*temp2;
    temp1=r1;
    //temp2=r2;
    //temp3=r3;

    if(r1==NULL)
        return r2;
    if(r2==NULL)
        return r1;
    while(temp1->next!= NULL)
    {
        temp1 =temp1->next;
    }

    while(r2!= NULL)
    {
        temp2=r1;
        while(temp2!=NULL)
        {
            if(r2->data== temp2->data)
                break;
            else
                temp2=temp2->next;

        }
        if(temp2==NULL)
        {
            temp1->next=getdata(r2->data);
            temp1=temp1->next;
        }
        r2=r2->next;
    }
    return r1;

        /*else
        {

        while(temp1 != NULL && temp2 != NULL)
        {

            if(temp1->data== temp2->data)
            {
                if(r3==NULL)
                {
                    r3=getdata(temp1->data);
                    temp3=r3;
                    temp1=temp1->next;
                    temp2=temp2->next;
                }
                else
                {
                    temp3->next=getdata(temp1->data);
                    temp3=temp3->next;
                    temp1=temp1->next;
                    temp2=temp2->next;
                }

            }
            else if(temp1->data < temp2->data)
                  {
                    if(r3==NULL)
                    {
                        r3=getdata(temp1->data);
                        temp3=r3;
                        temp1=temp1->next;

                    }
                    else
                    {
                    temp3->next=getdata(temp1->data);
                    temp3=temp3->next;
                    temp1=temp1->next;

                    }
                  }

                  else //(temp1->data > temp2->data)
                  {
                    if(r3==NULL)
                    {
                        r3=getdata(temp2->data);
                        cout<<r3;
                        temp3=r3;
                        temp2=temp2->next;

                    }
                    else
                    {
                    temp3->next=getdata(temp2->data);
                    temp3=temp3->next;
                    temp2=temp2->next;

                    }
                  }

           }
           while (temp1!=NULL)
           {
               if(r3==NULL)
                    {
                        r3=getdata(temp1->data);
                        temp3=r3;
                        temp1=temp1->next;

                    }
                    else
                    {
                    temp3->next=getdata(temp1->data);
                    temp3=temp3->next;
                    temp1=temp1->next;

                    }
           }
           while (temp2!= NULL)
            {
                    if(r3==NULL)
                    {
                        r3=getdata(temp2->data);
                        cout<<r3;
                        temp3=r3;
                        temp2=temp2->next;

                    }
                    else
                    {
                    temp3->next=getdata(temp2->data);
                    temp3=temp3->next;
                    temp2=temp2->next;

                    }
            }

        }
    return r3;

}*/
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
        cout<<"enter 3 for union \n";
        cout<<"enter 4 for exit \n";

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
                    root3=root1->union1(root1 ,root2);
                    cout<<"THE LINKED LIST IS :\n";
                    root3->show(root3);
                    break;
            case 4:
                exit(1);
            default :
                cout<<"enter the right choice: \n";
                continue;
        }
    }

return 0;
}

