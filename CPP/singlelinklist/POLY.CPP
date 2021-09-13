#include<iostream.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned char Boolean;

//Create Polynomial Class
template <class C, class P>
class PNode
{
friend POLY<C,P>;
private:
C COEFF;
P POW;
PNode<C,P> *Link;
};

template<class CT,class PT>
class POLY
{
private:
PNode<CT,PT> *Start;
public:
POLY(){Start=0;}
~POLY();
Boolean IsEmpty() const {return Start==0;}
int Length() const;
Boolean Find(int k, PT& x) const;
int Search(const PT& x) const;
POLY<CT,PT>& Delete(int k, PT& x);
POLY<CT,PT>& Insert(const CT& coeff,const PT& pow);
POLY<CT,PT>& Create(void);
POLY<CT,PT>& Add(const POLY<CT,PT>P,const POLY<CT,PT>Q);
POLY<CT,PT> operator+(const POLY<CT,PT> P);
void Output(ostream& out) const;
void Output() const;
};

template<class CT,class PT>
POLY<CT,PT> POLY<CT,PT>::operator+(const POLY<CT,PT> P)
{
POLY<CT,PT> R;
CT Coeff;
PT Pow;
PNode<CT,PT> *Ptr1,*Ptr2;
Ptr1=Start;
Ptr2=P.Start;
while(Ptr1!=0 && Ptr2!=0)
{
 if(Ptr1->POW>Ptr2->POW)
  {
   Coeff=Ptr2->COEFF;
   Pow=Ptr2->POW;
   Ptr2=Ptr2->Link;
  }
 else
  {
   if(Ptr1->POW<Ptr2->POW)
    {
     Coeff=Ptr1->COEFF;
     Pow=Ptr1->POW;
     Ptr1=Ptr1->Link;
    }
   else
   {
    Coeff=Ptr1->COEFF+Ptr2->COEFF;
    if(Coeff==0)continue;
    Pow=Ptr1->POW;
    Ptr1=Ptr1->Link;
    Ptr2=Ptr2->Link;
   }
  }//else
  R.Insert(Coeff,Pow);
} //while
while(Ptr1!=0)
{
Coeff=Ptr1->COEFF;
Pow=Ptr1->POW;
Ptr1=Ptr1->Link;
R.Insert(Coeff,Pow);
}
while(Ptr2!=0)
{
Coeff=Ptr2->COEFF;
Pow=Ptr2->POW;
Ptr2=Ptr2->Link;
R.Insert(Coeff,Pow);
}
return R;
}

template<class CT,class PT>
POLY<CT,PT>::~POLY()
{
// delete all node in the list
PNode<CT,PT> *Next;
while(Start)
{
Next=Start->Link;
delete Start;
Start=Next;
}
}

//Create a sorted list using Insert() member function
template<class CT,class PT>
POLY<CT,PT>& POLY<CT,PT>::Create(void)
{
CT Coeff;
PT Pow;
char choice;
while(1)
{
cout<<"\nAny more(y/n)?";
cin>>choice;
if(choice=='N'||choice=='n')return *this;
cout<<"Enter Term (Coeff & Power):";
cin>>Coeff>>Pow;
Insert(Coeff,Pow);
}
}

template<class CT,class PT>
int POLY<CT,PT>::Length() const
{
PNode<CT,PT> *Current=Start;
int Len=0;
while(Current)
{
Len++;
Current=Current->Link;
}
return Len;
}

//Insert to a sorted list
template<class CT,class PT>
POLY<CT,PT>& POLY<CT,PT>::Insert(const CT& coeff,const PT& pow)
{
// Insert x any element
PNode<CT,PT> *New=new PNode<CT,PT>;
//if(!New) throw NoMemory();
New->COEFF=coeff;
New->POW=pow;
New->Link=0;
//Insert to a Blank List
if(!Start)
{
Start=New;
return *this;
}
//Insert as a Start node
if(Start->POW==pow)
{
cout<<"\nDuplicate Entry Not allowed...";
delete New;
return *this;
}
if(Start->POW>pow)
{
New->Link=Start;
Start=New;
return *this;
}
PNode<CT,PT> *Ptr=Start;
while((Ptr->Link!=0)&&((Ptr->Link)->POW<pow))Ptr=Ptr->Link;
if((Ptr->Link)->POW==pow)
{
cout<<"\nDuplicate Entry Not allowed...";
delete New;
delete Ptr;
return *this;
}
New->Link=Ptr->Link;
Ptr->Link=New;
return *this;
}

template<class CT,class PT>
void POLY<CT,PT>::Output(ostream& out) const
{// Insert the chain elements into the stream out
PNode<CT,PT> *Ptr=Start;
while(Ptr)
{
out<<"("<<Ptr->COEFF<<","<<Ptr->POW<<") ";
Ptr=Ptr->Link;
}
return;
}

template<class CT,class PT>
void POLY<CT,PT>::Output() const
{// Insert the chain elements into the stream out
PNode<CT,PT> *Ptr=Start;
while(Ptr)
{
cout<<"("<<Ptr->COEFF<<","<<Ptr->POW<<") ";
Ptr=Ptr->Link;
}
return;
}
//overload <<
template <class CT,class PT>
ostream& operator<<(ostream& out,const POLY<CT,PT>& x)
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
POLY<int,int> P,Q,R;
clrscr();
cout<<"\nEnter P:";
P.Create();
cout<<"\nP:=";
P.Output();
cout<<"\nEnter Q:";
Q.Create();
cout<<"\nQ:=";
Q.Output();
R=P+Q;
cout<<"\nR:=";
Q.Output();
return 0;
}