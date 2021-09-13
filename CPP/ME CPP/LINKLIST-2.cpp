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
	   friend void addend(list,int);
	   friend void addbeg(list,int);
	   friend void addafter(list,int,int);
	   friend void display(list);
	   friend int count(list);
	   friend void del(list,int);
	   friend void delbeg(list);
	   friend void delend(list);
	   friend void delafter(list,int);
	   friend void reverse(list);
};
void addend(list t, int item)
{
  NODE * temp;
  if(t.root == NULL)
  {
    t.root = new NODE;
    t.root -> data = item;
    t.root -> link = NULL;
  }
  else
  {
   temp=t.root;
   while(temp -> link != NULL)
   temp = temp -> link;
   temp -> link = new NODE;
   temp = temp -> link;
   temp -> data = item;
   temp -> link = NULL;
  }
}
void addbeg(list t,int item)
{
  NODE * temp = new NODE;
  temp -> data = item;
  temp -> link = t.root;
  t.root = temp;
}
void addafter(list t,int item,int pos)
{
  NODE * temp ,*r;
  int i;
  temp=t.root;
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
void del(list t,int item)
{
  NODE * temp,*old;
  temp=t.root;
  while(temp)
  {
    if(temp -> data == item)
    {
      if(temp == t.root)
      t.root = temp -> link;
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
void display(list t)
{
  cout <<"\n";
  NODE * temp = t.root;
  while(temp)
  {
    cout<<temp -> data<<"\t";
    temp = temp -> link;
  }
}
int count(list t)
{
  NODE * temp = t.root;
  int c=0;
  while(temp)
  {
   c++;
   temp = temp -> link;
  }
  return c;
}
void reverse(list t)
{
  NODE * temp,*x,*r,*s;
  temp = t.root;
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
 t.root=temp;
}
void delbeg(list t)
{
  NODE * temp = t.root;
  if(temp == NULL)
  cout<<"Deletion is not possible";
  else
  {
   t.root = temp -> link;
   delete(temp);
  }
}
void delend(list t)
{
   NODE * temp,*old;
   temp = t.root;
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
void delafter(list t,int pos)
{
  NODE * temp,*old;
  int i;
  temp = t.root;
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
	      addend(ob1,i);
	      getch();
	      break;
      case 2: cout<<"\n Enter value:";
	      cin>>i;
	      addbeg(ob1,i);
	      getch();
	      break;
      case 3: cout<<"\n Enter value:";
	      cin>>i;
	      cout<<"\n Enter Position";
	      cin>>pos;
	      addafter(ob1,i,pos);
	      getch();
	      break;
      case 4: cout<<"\nEnter value to delete";
	      cin>>i;
	      del(ob1,i);
	      getch();
	      break;
      case 5: cout<<"\n The link list are :";
	      display(ob1);
	      getch();
	      break;
      case 6: cout<<"\n No. of Node in Linked list = "<<count(ob1);
	      getch();
	      break;
      case 7: reverse(ob1);
	      cout<<"\N Reverse list is : \n";
	      display(ob1);
	      getch();
	      break;
      case 8: delbeg(ob1);
	      getch();
	      break;
      case 9: cout<<"\n Enter position to delete ";
	      cin>>pos;
	      delafter(ob1,pos);
	      getch();
	      break;
      case 10: delend(ob1);
	       getch();
	       break;
      case 0: cout<<"The end ";
	      getch();

    }

   }while(ch!=0);
}












