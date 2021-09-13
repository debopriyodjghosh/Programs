#include<iostream.h>
#include<conio.h>
#include<stdlib.h>


#define TRUE 1
#define FALSE 0

typedef unsigned char boolean;

template <class T>
class NODE
{
friend BST<T>;
friend ostream& operator<<(ostream&, const NODE<T>& x);
friend istream& operator>>(istream&, const NODE<T>& x);
private:
T INFO;
NODE <T> *LLink,*RLink;
public:
NODE(){INFO=10;LLink=RLink=NULL;}
};

//Overload <<
template <class T>
ostream& operator<< (ostream& out, const NODE <T>& x)
{
out<<(x.INFO)<<" ";
return out;
}

//Overload >>
template <class T>
istream& operator>> (istream& in, const NODE <T>& x)
{
in>>(x.INFO);
return in;
}

template <class T>
class BST
{
public:
BST() {Root=NULL;}
~BST();
BST<T>& Initialize(){Root=NULL;return *this;}
boolean IsEmpty(void) const {return (Root==NULL);}
boolean IsFull(void) const;
int Height(void) {return Depth(Root);} //find the height of a BST
NODE<T>* Search(const T x) const; //search an element
BST<T>& Insert(const T x);   //Insert an element
BST<T>& Delete(const T x, NODE<T> *Del); //delete an element
BST<T>& Create(void); //create a new BST tree
BST<T>& BranchCut(const T x); //Delete the subtree with element value x
BST<T>& BranchAdd(BST<T>& BT); //Add an input BST BT
BST<T>& Merge(BST<T>& BT); //Merge an input BST BT
BST<T>& BiSect(const T x); //Bisect the tree into two subtree at x
T FindMin(void) {return Min(Root);} //Find the minimum element of the tree
T FindMax(void) {return Max(Root);} //Find the maximum element of the tree
void InOrderDisp(void){cout<<"\nList:";InOrder(Root);}
void PreOrderDisp(void){cout<<"\nList:";PreOrder(Root);}
void PostOrderDisp(void){cout<<"\nList:";PostOrder(Root);}
void LevelOrderDisp(void); //Level by level display (breadth first display
void DepthOrderDisp(void); //Depth based display (breadth first display
int Count(void) {return NodeCount(Root);}//Count the number of nodes in the tree
private:
NODE<T> *Root;
void PreOrder(NODE<T> *R);
void PostOrder(NODE<T> *R);
void InOrder(NODE<T> *R);
int Depth(NODE<T> *R);
T Min(NODE<T> *R);
T Max(NODE<T> *R);
int NodeCount(NODE<T> *R);
};

template<class T>
int BST<T>::NodeCount(NODE<T> *R)
{
if(R==NULL) return 0;
return NodeCount(R->LLink)+NodeCount(R->RLink)+1;
}

template<class T>
NODE<T>* BST<T>::Search(const T x) const
{
NODE<T> *Ptr;
Ptr=Root;
while(Ptr!=NULL)
{
if(Ptr->INFO<x)
Ptr=Ptr->RLink;
else
if(Ptr->INFO>x)
Ptr=Ptr->LLink;
else
return Ptr;
}
return NULL;
}

template<class T>
T BST<T>::Min(NODE<T> *R)
{
if(R==NULL) return NULL;
if(R->LLink==NULL) return R->INFO;
else
return Min(R->LLink);
}

template<class T>
T BST<T>::Max(NODE<T> *R)
{
if(R==NULL) return NULL;
if(R->RLink==NULL) return R->INFO;
else
return Max(R->RLink);
}

template<class T>
int BST<T>::Depth(NODE<T> *R)
{
unsigned int LCld,RCld;
if(R==NULL)return 0;
LCld=Depth(R->LLink);
RCld=Depth(R->RLink);
if(LCld>RCld) return LCld+1;
else return RCld+1;
}

template<class T>
void BST<T>::InOrder(NODE<T> *R)
{
if(R==NULL)return;
InOrder(R->LLink);
cout<<*R;
InOrder(R->RLink);
}

template<class T>
void BST<T>::PreOrder(NODE<T> *R)
{
if(R==NULL)return;
cout<<*R;
InOrder(R->LLink);
InOrder(R->RLink);
}

template<class T>
void BST<T>::PostOrder(NODE<T> *R)
{
if(R==NULL)return;
InOrder(R->LLink);
InOrder(R->RLink);
cout<<*R;
}

//IsFull()
template<class T>
boolean BST<T>::IsFull(void) const
{
NODE<T> *New;
New=new NODE<T>;
if(New==NULL)
return TRUE;
else
{
delete New;
return FALSE;
}
}

//Destractor
template<class T>
BST<T>::~BST()
{
if(Root!=NULL)
delete Root;
Root=NULL;
}

//Delete
template<class T>
BST<T>& BST<T>::Delete(const T x,NODE<T> *Del)
{
if(Root==NULL)
cout<<"\nEmpty Queue\n";
return *this;
}

//Insert
template<class T>
BST<T>& BST<T>::Insert(const T x)
{
NODE<T> *New,*Ptr,*Par;
New=new NODE<T>;
if(New!=NULL)
{
 New->INFO=x;
 New->RLink=New->LLink=NULL;
 if(Root==NULL)
  Root=New;
 else
  {
   Ptr=Root;
   Par=Root;
   while(Ptr!=NULL)
    if(Ptr->INFO<x)
     {
      Par=Ptr;
      Ptr=Ptr->RLink;
     }
    else
     {
      Par=Ptr;
      Ptr=Ptr->LLink;
     }
   if(Par->INFO<x)
    Par->RLink=New;
   else
    Par->LLink=New;
  }
}
else
cout<<"\nNo space to keep the new element into the queue";
return *this;
}

//Create
template<class T>
BST<T>& BST<T>::Create(void)
{
char Choice;
T x;
cout<<"\n";
while(1)
{
cout<<"\nAny more data to insert(y/n)?";
cin>>Choice;
if(Choice=='N'|| Choice=='n') return *this;
cout<<"Enter data:";
cin>>x;
Insert(x);
InOrderDisp();
}
}

void main()
{
BST<int> L;
NODE<int> N,*P;
int op;
int x;
while(1)
{
clrscr();
cout<<"\n1. Create a BST";
cout<<"\n2. Insert to a BST";
cout<<"\n3. Delete from a BST";
cout<<"\n4. InOrder BST";
cout<<"\n5. Heigth BST";
cout<<"\n6. Search BST";
cout<<"\n7. Min of BST";
cout<<"\n8. Nodes in BST";
cout<<"\n9. Exit";
cout<<"\nEnter your choice(1-9):";
cin>>op;
switch(op)
{
case 1: L=L.Create();
	break;
case 2: if(!L.IsFull())
	{
	cout<<"\nEnter data to insert:";
	cin>>x;
	L=L.Insert(x);
	}
	else
	cout<<"\nNo space to insert";
	break;
case 3: if(!L.IsEmpty())
	{
	L=L.Delete(x,&N);
	cout<<"\ndeleted element is:"<<x;
	}
	else
	cout<<"\nEmpty queue";
	break;
case 4: L.InOrderDisp();
	break;
case 5: cout<<"\nH="<<L.Height();break;
case 6: cout<<"\nEnter x:";
	cin>>x;
	P=L.Search(x);
	cout<<"\nN="<<*P<<endl;
	break;
case 7: cout<<"\nMin:"<<L.FindMin();break;
case 8: cout<<"\nNodes="<<L.Count();break;
case 9: exit(0);
}
cout<<"\nPress any key to continue.....";
getch();
}
}
