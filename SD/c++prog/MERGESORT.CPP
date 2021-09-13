/* MERGE SORT using template*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>

template<class t>
class merge
{
int n;
t aux[50],a[20];
public:

void merge_sort();
void display();
};

template<class t>
void merge<t>::merge_sort()
{
int size,i,j,k,l1,l2,u1,u2;
cout<<"enter no. of elements..";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter element..";
cin>>a[i];
}
size=1;
while(size < n)
{
l1=0;
k=0;
while(l1+size < n)
{
l2=l1+size;
u1=l2-1;
u2=(l2+size-1<n)? l2+size-1:n-1;
for(i=l1,j=l2;i<=u1 && j<=u2;)
{
if(a[i]<a[j])
aux[k++]=a[i++];
else
aux[k++]=a[j++];
}

while(i<=u1)
aux[k++]=a[i++];
while (j<=u2)
  aux[k++]=a[j++];
l1=u2+1;

}
for(i=0;i<k;i++)
 a[i]=aux[i];
 size=size*2;

 }
 }

template<class t>
void merge<t>::display()
{
int i;
cout<<endl;
cout<<"sorted elements are..."<<endl;
for(i=0;i<n;i++)
{
cout<<a[i];
cout<<endl;
}
}

void main()
{
clrscr();
merge<int> s;
s.merge_sort();
s.display();
getch();
}