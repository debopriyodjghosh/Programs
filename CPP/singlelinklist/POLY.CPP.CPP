#include<iostream.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned char Boolean;

//Create Polynomial Class
template <class P, class C>
class PNode
{
friend POLY<P,C>;
private:
P POW;
C COEFF;
PNode<P,C> *Link;
};

template<class PT,class CT>
class POLY
{
private:
PNode<PT,CT> *Start;
public:
POLY(){Start=0;}
~POLY();
Boolean IsEmpty() const {return Start==0;}
int Length() const;
Boolean Find(int k, PT& x) const;
int Search(const PT& x) const;
POLY<PT,CT>& Delete(int k, PT& x);
POLY<PT,CT>& Insert(const PT& pow,const CT& coeff);
POLY<PT,CT>& Create(void);
POLY<PT,CT>& Add(const POLY<PT,CT>P,const POLY<PT,CT>Q);
POLY<PT,CT> operator+(const POLY<PT,CT>& P)const;
void Output(ostream& out) const;
void Output() const;
};

template<class PT,class CT>
POLY<PT,CT>::~POLY()
{
// delete all node in the list
Node<PT,CT> *Next;
while(Start)
{
Next=Start->Link;
delete Start;
Start=Next;
}
}

//Create a sorted list using Insert() member function
template<class PT,class CT>
POLY<PT,CT>& POLY<PT,CT>::Create(void)
{
CT Coeff;
PT Pow;
char choice;
while(1)
{
cout<<"Any more(y/n)?";
cin>>choice;
if(choice=='N'||choice=='n')return *this;
cout<<"Enter Term (Coeff & Power):";
cin>>Coeff>>Pow;
Insert(Pow,Coeff);
}
}


template <class N>
class Node
{
friend List<N>;
private:
N INFO;
Node<N> *Link;
};

template<class T>
class List
{
private:
Node<T> *Start;
public:
List(){Start=0;}
~List();
Boolean IsEmpty() const {return Start==0;}
int Length() const;
Boolean Find(int k, T& x) const;
int Search(const T& x) const;
List<T>& Delete(int k, T& x);
List<T>& Insert(const T& x);
List<T>& Create(void);
void Output(ostream& out) const;
void Output() const;
};

//Create a sorted list using Insert() member function
template<class T>
List<T>& List<T>::Create(void)
{
T x;
char choice;
while(1)
{
cout<<"Any more(y/n)?";
cin>>choice;
if(choice=='N'||choice=='n')return *this;
cout<<"Enter Data:";
cin>>x;
Insert(x);
}
}

//Node structure for Double ways link list
template <class D>
class DblNode
{
friend DblList<N>;
private:
N INFO;
DblNode<N> *LLink,*RLink;
};

//Double way link list
template<class D>
class DblList
{
private:
DblNode<D> *Start;
public:
DblList(){Start=0;}
~DblList();
Boolean IsEmpty() const {return Start==0;}
int Length() const;
Boolean Find(int k, D& x) const;
int Search(const D& x) const;
DblList<D>& Delete(int k, D& x);
DblList<D>& Insert(const D& x);
void Output(ostream& out) const;
void Output() const;
};

template<class T>
List<T>::~List()
{
// delete all node in the list
Node<T> *Next;
while(Start)
{
Next=Start->Link;
delete Start;
Start=Next;
}
}

template<class T>
int List<T>::Length() const
{
Node<T> *Current=Start;
int Len=0;
while(Current)
{
Len++;
Current=Current->Link;
}
return Len;
}
//Insert to a sorted list
template<class T>
List<T>& List<T>::Insert(const T& x)
{
// Insert x any element
Node<T> *New=new Node<T>;
//if(!New) throw NoMemory();
New->INFO=x;
New->Link=0;
//Insert to a Blank List
if(!Start)
{
Start=New;
return *this;
}
//Insert as a Start node
if(Start->INFO>=x)
{
New->Link=Start;
Start=New;
return *this;
}
Node<T> *Ptr=Start;
while((Ptr->Link!=0)&&((Ptr->Link)->INFO<x))Ptr=Ptr->Link;
New->Link=Ptr->Link;
Ptr->Link=New;
return *this;
}

template<class T>
void List<T>::Output(ostream& out) const
{// Insert the chain elements into the stream out
Node<T> *Ptr=Start;
while(Ptr)
{
out<<Ptr->INFO<<" ";
Ptr=Ptr->Link;
}
return;
}

template<class T>
void List<T>::Output() const
{// Insert the chain elements into the stream out
Node<T> *Ptr=Start;
while(Ptr)
{
cout<<Ptr->INFO<<" ";
Ptr=Ptr->Link;
}
return;
}
//overload <<
template <class T>
ostream& operator<<(ostream& out,const List<T>& x)
{
x.Output(out);
return out;
}
//Throw class, this works under VC++ etc
class NoMemory
{
public:
NoMemory(){cout<<endl<<"Error"<<endl;}
};

main()
{
List<float> L;
clrscr();
L.Create();
L.Output();
cout<<endl<<"Length="<<L.Length()<<endl;
return 0;
}