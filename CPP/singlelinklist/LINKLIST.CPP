#include<iostream.h>
#include<conio.h>

template<class A>
class Node
{
friend LIST<A>;
private:
A Data;
Node *Link;
};


template<class A>
class LIST
{
private:
Node<A> *Start;
public:
LIST(){Start=NULL;}
~LIST(){};
void CreateList();
void InsertList(A x);
void DeleteList(A &x);
void DisplayList();
LIST<A> Copy();
Node<A> *Search(A x);
};

template<class T>
void LIST<T>::InsertList(T x)
{
Node<T> *New=new Node<T>;
Node<T> *Ptr;
if(New==NULL){cout<<"\nError: No space to store a new node";return;}
New->Data=x;
New->Link=NULL;
if(Start==NULL){Start=New; return;}
if(Start->Data>=x){New->Link=Start; Start=New;return;}
Ptr=Start;
while(Ptr->Link!=NULL)
{
if((Ptr->Link)->Data<x)Ptr=Ptr->Link;
else break;
}
New->Link=Ptr->Link;
Ptr->Link=New;
return;
}

template<class T>
void LIST<T>::CreateList()
{
T x;
char Resp;
while(1)
{
cout<<"\nAny more data to add(y/n)?";
Resp=getche();
if(Resp=='n' || Resp=='N') return;
cout<<"\nEnter data:";
cin>>x;
InsertList(x);
}
}

template<class T>
void LIST<T>::DisplayList()
{
Node<T> *ptr;
cout<<"\n\n";
if(Start==NULL){cout<<"\nEmpty list";return;}
ptr=Start;
while(ptr!=NULL)
{
cout<<ptr->Data<<" ";
ptr=ptr->Link;
}
cout<<endl;
}

template<class T>
void LIST<T>::DeleteList(T &x)
{
Node<T> *Del,*Ptr;
if(Start==NULL){cout<<"\nEmpty list";return;}
if(Start->Data==x){Del=Start;Start=Start->Link;}
else
{
if(Start->Data>x){cout<<"\nData not found";return;}
Ptr=Start;
while(1)
{
if(Ptr->Link==NULL){cout<<"\nData not found";return;}
if((Ptr->Link)->Data==x){Del=Ptr->Link;Ptr->Link=Del->Link;break;}
if((Ptr->Link)->Data>x){cout<<"\nData not found";return;}
Ptr=Ptr->Link;
}
}
Del->Link=NULL;
delete Del;
return;
}

void main()
{
LIST<float> L;
L.CreateList();
L.DisplayList();
cout<<"\nEnter data to delete:";
float x;
cin>>x;
L.DeleteList(x);
L.DisplayList();
}

