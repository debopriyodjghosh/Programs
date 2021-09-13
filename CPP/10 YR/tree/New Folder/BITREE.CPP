#include<iostream.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned char Boolean;

template<class BTN>
class BinaryTreeNode
{
public:
BTN INFO;
BinaryTreeNode<BTN> *RChild;
BinaryTreeNode<BTN> *LChild;
BinaryTreeNode() {INFO=0;LChild=RChild=0;}
BinaryTreeNode(const BTN& e){INFO=e;LChild=RChild=0;}
BinaryTreeNode(const BTN& e,BinaryTreeNode *Left,BinaryTreeNode *Right)
{INFO=e;LChild=Left;RChild=Right;}
};

template<class BT>
class BinaryTree
{
private:
BinaryTreeNode<BT> *Root;
public:
BinaryTree(){Root=0;}
~BinaryTree(){}
Boolean IsEmpty() const
{if(Root)
return FALSE;
else
return TRUE;}
void CreateTree();
void Insert(BT x);
void InOrderTraversal(BinaryTreeNode<BT> *R);
void Display();
};

template<class BT>
void BinaryTree<BT>::Display()
{
InOrderTraversal(Root);
}

template<class BT>
void BinaryTree<BT>::InOrderTraversal(BinaryTreeNode<BT> *R)
{
if(R->LChild)InOrderTraversal(R->LChild);
cout<<R->INFO<<" ";
if(R->RChild)InOrderTraversal(R->RChild);
}

template<class BT>
void BinaryTree<BT>::CreateTree()
{
BT x;
char Choice;
while(1)
{
cout<<endl<<"Any more(y/n)?";
cin>>Choice;
if(Choice=='N' || Choice=='n')return;
cout<<endl<<"Enter Data:";
cin>>x;
Insert(x);
}
}

template<class BT>
void BinaryTree<BT>::Insert(BT x)
{
BinaryTreeNode<BT> *New,*Ptr=Root;
New=new BinaryTreeNode<BT>(x);
//Insert to an Empty tree
if(!Root)
{
Root=New;
return;
}
while(1)
{
 if(Ptr->INFO==x)
  {
   cout<<endl<<"Duplicate Entry Not allowd"<<endl;
   return;
  }
 if(Ptr->INFO>x)
  {
   if(Ptr->LChild)
     Ptr=Ptr->LChild;
   else
    {
     Ptr->LChild=New;
     return;
    }
  }
 else
  {
  if(Ptr->RChild)
    Ptr=Ptr->RChild;
  else
    {
      Ptr->RChild=New;
      return;
    }
  }
 }//while
}
main()
{
BinaryTree<float> R;
clrscr();
R.CreateTree();
R.Display();
return 0;
}