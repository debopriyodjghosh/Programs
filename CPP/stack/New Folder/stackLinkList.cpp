#include<iostream>
#include<conio.h>
//#define NULL 0
#include<stdlib.h>

using namespace std;
template<class T>
class node
{
 public:
  int roll,age;
  node<T> *link;   
};

template<class T>
class list : public node<T>
{
 private:
        node<T> *start;
 public:
 list(){start=new node<T>;start=NULL;}
 bool push();
 bool pop();
 void display(); 
};
template<class T>
void list<T>::display()
{
 node<T> *ptr;
 ptr=start;
 int a,b;
 if(start!=NULL)
 {
  while(ptr->link!=NULL)
  {
   a=ptr->age;
   b=ptr->roll;
   cout<<b<<"--------------"<<a;
   cout<<"\n";
   ptr=ptr->link;
  }
  a=ptr->age;
  b=ptr->roll;
  cout<<b<<"--------------"<<a;
  //ptr=ptr->link;       
 }
 else
 {
  cout<<"\n\nNOTHING TO DISPLAY...";       
 }
}

template<class T>
bool list<T>::push()
{
 node<T> *New,*top;
 char resp;
 int a,r;
 while(1)
 {
  New=new node<T>;
  cout<<"\n\nENTER THE ROLL OF THE STUDENT : ";
  cin>>r;
  cout<<"\n\nENTER THE AGE OF THE STUDENT : ";
  cin>>a;
  if(start==NULL)
  {
         
  }
  New->link=start;
  New->age=a;
  New->roll=r;
  top=New;
  start=New;
  display();
  cout<<"\n\nANU MORE DATA TO INSERT?(Y/N) : ";
  resp=getche();
  if(resp=='Y' || resp=='y')
  continue;
  else
  break;
 }
 cout<<"\n";
 return true;
}
template<class T>
bool list<T>::pop()
{
 char resp;
 node<T> *top,*del;
 top=start;
 while(top!=NULL)
 {
  del=top;
  top=top->link;
  start=top;
  free(del);
  display();
  cout<<"\n\nANY MORE DATA TO POP?(Y/N) : ";
  resp=getche();
  if(resp=='Y' || resp=='y')
  continue;
  else
  return true;
 }
 cout<<"\n\nSTACK UNDERFLOW...";
 return false;   
}
int main()
{
 int n;
 list<int> L1;
 while(1)
 {
  cout<<"\n\n1. PUSH : \n2. POP : ";
  cin>>n;
  char resp;
  switch(n)
  {
   case 1:if(L1.push())
          break;
   case 2:if(L1.pop())
          break;
   default:cout<<"\n\nWRONG CHOICE...";       
  }
  cout<<"\n\nDO YOU WANT TO CONTINUE?(Y/N) : ";
  resp=getche();
  if(resp=='Y' || resp=='y')
  continue;
  else
  break;   
 }
 getch();
 return 0;
} 
