#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class list
{
  private: struct NODE
	   {
	     int data;
	     NODE * link;
	   }*root;

  public:  list()
	   {
	     root = NULL;
	   }
	   void addend(int);
	   void addbeg(int);
	   void addafter(int,int);
	   void display();
	   int count();
	   void del(int);
	   void delbeg();
	   void delend();
	   void delafter(int);
	   void reverse();
};
void list :: addend(int item)
{
  NODE * temp;
  if(root == NULL)
  {
    root = new NODE;
    root -> data = item;
    root -> link = NULL;
  }
  else
  {
   temp=root;
   while(temp -> link != NULL)
   temp = temp -> link;
   temp -> link = new NODE;
   temp = temp -> link;
   temp -> data = item;
   temp -> link = NULL;
  }
}
void list :: addbeg(int item)
{
  NODE * temp = new NODE;
  temp -> data = item;
  temp -> link = root;
  root = temp;
}
void list :: addafter(int item,int pos)
{
  NODE * temp ,*r;
  int i;
  temp=root;
  for(i=0;i<pos;i++)
  {
    if(temp == NULL)
    {
      cout<<"Invalid Position";
      return;
    }
    temp = temp -> link;
  }
  r=new NODE;
  r -> data = item;
  r -> link = temp -> link;
  temp -> link =r;
}
void list :: del(int item)
{
  NODE * temp,*old;
  temp=root;
  while(temp)
  {
    if(temp -> data == item)
    {
      if(temp == root)
      root = temp -> link;
      else
      old -> link =temp -> link;
      delete(temp);
      return;
    }
    else
    {
     old = temp;
     temp = temp -> link;
    }
  }
  cout<<"Item not found to delete ";
}
void list :: display()
{
  cout <<"\n";
  NODE * temp = root;
  while(temp)
  {
    cout<<temp -> data<<"\t";
    temp = temp -> link;
  }
}
int list :: count()
{
  NODE * temp = root;
  int c=0;
  while(temp)
  {
   c++;
   temp = temp -> link;
  }
  return c;
}
void list :: reverse()
{
  NODE * temp,*x,*r,*s;
  temp = root;
  x=temp;
  r=NULL;
  while(x)
  {
    s=r;
    r=x;
    x = x -> link;
    r -> link = s;
    temp =r;
  }
 root=temp;
}
void list :: delbeg()
{
  NODE * temp = root;
  if(temp == NULL)
  cout<<"Deletion is not possible";
  else
  {
   root = temp -> link;
   delete(temp);
  }
}
void list :: delend()
{
   NODE * temp,*old;
   temp = root;
   if(temp==NULL)
   {
     cout<<"Deletion not possible";
     return;
   }
   while(temp -> link != NULL)
   {
     old = temp;
     temp = temp -> link;
   }
   old -> link = NULL;
   delete(temp);
}
void list :: delafter(int pos)
{
  NODE * temp,*old;
  int i;
  temp = root;
  for(i=1;i<pos;i++)
  {
    if(temp == NULL)
    {
      cout<<"\n Invalid POsition";
      return;
    }
    temp = temp -> link;
   }
   old = temp -> link;
   temp -> link = old -> link;
   delete(old);
}
void main()
{
  list ob1;
  int i,ch,pos;
  do
  {
    clrscr();
    cout<<"\n Menu for link list operation";
    cout<<"\n Press 1 to add node at end";
    cout<<"\n Press 2 to add node at Beginning";
    cout<<"\n Press 3 to add node after a specific position";
    cout<<"\n Press 4 to delete item which is given";
    cout<<"\n press 5 to display list";
    cout<<"\n Press 6 to count...";
    cout<<"\n Press 7 to Reverse list";
    cout<<"\n Press 8 to delbeginning";
    cout<<"\n Press 9 to delafter";
    cout<<"\n Press 10 to Delete end";
    cout<<"\n Press 0 to exit";
    cout<<"\n Enter Your choice : ";
    cin>>ch;
    if(ch<0 || ch>10)
    continue;
    switch(ch)
    {
      case 1: cout<<"\n Enter Value:";
	      cin>>i;
	      ob1.addend(i);
	      getch();
	      break;
      case 2: cout<<"\n Enter value:";
	      cin>>i;
	      ob1.addbeg(i);
	      getch();
	      break;
      case 3: cout<<"\n Enter value:";
	      cin>>i;
	      cout<<"\n Enter Position";
	      cin>>pos;
	      ob1.addafter(i,pos);
	      getch();
	      break;
      case 4: cout<<"\nEnter value to delete";
	      cin>>i;
	      ob1.del(i);
	      getch();
	      break;
      case 5: cout<<"\n The link list are :";
	      ob1.display();
	      getch();
	      break;
      case 6: cout<<"\n No. of Node in Linked list = "<<ob1.count();
	      getch();
	      break;
      case 7: ob1.reverse();
	      cout<<"\N Reverse list is : \n";
	      ob1.display();
	      getch();
	      break;
      case 8: ob1.delbeg();
	      getch();
	      break;
      case 9: cout<<"\n Enter position to delete ";
	      cin>>pos;
	      ob1.delafter(pos);
	      getch();
	      break;
      case 10: ob1.delend();
	       getch();
	       break;
      case 0: cout<<"The end ";
	      getch();

    }

   }while(ch!=0);
}






