#include<iostream.h>

template<class T>
void Perm(T L[],int k,int m)
{
int i;
if(k==m)
{
for(i=0;i<=m;i++)
cout<<L[i];
cout<<endl;
}
else
for(i=k;i<=m;i++)
{
Swap(L[k],L[i]);
Perm(L,k+1,m);
Swap(L[k],L[i]);
}
}

template<class T>
inline void Swap(T& a,T& b)
{
T temp=a;
a=b;
b=temp;
}

void main()
{
Perm("ABCD",0,3);
}
