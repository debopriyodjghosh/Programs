#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
	int data;
	node *next;
	public:
		node* create(node *);
		void show(node *);
		node* marge(node *,node *);
		node* getdata(int);	
		node* concat(node *,node *);
		node* union1(node *,node *);	
};
node* node::union1(node *r1,node *r2)
{
	node *temp1,*temp2;
	temp1=r1;
	if(r1==NULL)
		return r2;
	if(r2==NULL)
		return r1;
	while(temp1->next!=NULL)
		temp1=temp1->next;
	while(r2!=NULL)
	{
		temp2=r1;
		while(temp2!=NULL)
		{
			if(r2->data==temp2->data)
			  	break;
		     	
		}
		if(temp2==NULL)
		{
			temp1->next=getdata(r2->data);
			temp1=temp1->next;
		}
		r2=r2->next;
		
	}
	return r1;
}
node* node::concat(node * r1,node * r2)
{
	node *temp;
	temp=r1;
	if(r1==NULL)
		return r2;
	if(r2==NULL)
		return r1;
	while(temp->next!=NULL)
	 temp=temp->next;
	temp->next=r2;
	return r1;
	
}
node* node::getdata(int i)
{
	node * r=new node;
	r->data=i;
	r->next=NULL;
	return r;
}
node* node:: create(node *r1)
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
			
void node::show(node *r1)
{
			node *temp;
			temp=r1;
			while(temp!=NULL)
			{
				cout<<temp->data<<" -> ";
				temp=temp->next;
			}
			cout<<"NULL";
}
node* node::marge(node *r1,node *r2)
{
	node *r3=NULL,*temp1,*temp2,*temp3;
	temp1=r1;
	temp2=r2;
	temp3=r3;
	
	
	    if(r1==NULL)
	       	return r2;
        else if(r2==NULL)
		    return r1;
	    else
	    {
	    	while(temp1!=NULL && temp2!=NULL)
	    	{
	    		if(temp1->data == temp2->data)
	    	    {
		    	    if(r3==NULL)
			        {
				        r3=getdata(temp1->data);
				        temp3=r3;
				        temp1=temp1->next;
				    	temp2=temp2->next;//cout<<"\ni am1";
			    	}
			    	else
			    	{
				    	temp3->next=getdata(temp1->data);
				    	temp3=temp3->next;
				    	temp1=temp1->next;
				    	temp2=temp2->next;//cout<<"\ni am2";		
			    	}
		    	}
		    	else if(temp1->data<temp2->data)
		    	{
			    	if(r3==NULL)
			    	{
				    	r3=getdata(temp1->data);
				    	temp3=r3;
				    	temp1=temp1->next;//cout<<"\ni am3";
			    	}
			    	else
			    	{
				    	temp3->next=getdata(temp1->data);
				    	temp3=temp3->next;
				    	temp1=temp1->next;//cout<<"\ni am4";	
			    	}	
	    		}
		    	else // (temp1->data>temp2->data)
		    	{
		    		if(r3==NULL)
		    		{
			    		r3=getdata(temp2->data);
			    		temp3=r3;
				    	temp2=temp2->next;cout<<"\ni am5";
			    	}	  
			    	else
			    	{
				    	temp3->next=getdata(temp2->data);
				    	temp3=temp3->next;cout<<"\ni am6";
				    	temp2=temp2->next;	
			    	}
	        	}
	        }
			while(temp1!=NULL)
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
				    	temp1=temp1->next;//cout<<"\ni am4";	
			    	}
			} 
			while(temp2!=NULL)
			{
					if(r3==NULL)
		    		{
			    		r3=getdata(temp2->data);
			    		temp3=r3;
				    	temp2=temp2->next;//cout<<"\ni am5";
			    	}	  
			    	else
			    	{
				    	temp3->next=getdata(temp2->data);
				    	temp3=temp3->next;//cout<<"\ni am6";
				    	temp2=temp2->next;	
			    	}
			}
		}
	return r3;	  		 
}
int main()
{
	cout<<"\t\t***VARIOUS OPERATIONS ON SINGLE LINKED LIST***";
	node *root1=NULL,*root2=NULL,*root3=NULL;
	int ch;
	while(1)
	{
		
		cout<<"\n1. Enter 1 for create first linked list :\n2. Enter 2 for create second linked list :";
		cout<<"\n3. Enter 3 for marge :\n4. Enter 4 for concatination :\n5. Enter 4 for union :";
		cout<<"\n6. Enter 6 for exit :\n Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			   root1=root1->create(root1);
			   cout<<"\nThe 1st linked list is :\n";
         	   root1->show(root1);	
         	   break;
         	case 2:
         		root2=root2->create(root2);
         		cout<<"\nThe 2nd linked list is :\n";
	            root2->show(root2);
	            break;
	        case 3:
	        	root3=root1->marge(root1,root2);
	        	cout<<"\nAfter merging the linked lists :\n";
	        	root3->show(root3);
	        	break;
	        case 4:
	        	root3=root1->concat(root1,root2);
	        	cout<<"\nAfter concating the linked lists :\n";
	        	root3->show(root3);
	        	break;
	        case 5:
	        	root3=root1->union1(root1,root2);
	        	cout<<"\nAfter union the linked lists :\n";
	        	root3->show(root3);
	        	break;
	        case 6:
	        	exit(1);
	        default :
	        	cout<<"\nEnter your correct choice :";
	        	continue;
		}
	}
	return 0;
}
