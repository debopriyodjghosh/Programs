#include<iostream.h>
#include<conio.h>
int main()
{
int x[100],n,i,j,t;
clrscr();
cout<<"how many elements in array=";
cin>>n;
cout<<"\nenter the value of array=";
for(i=0;i<n;i++)
{
cin>>x[i];
}

for(i=0;i<n;i++)
{
for(j=0;j<=n-1-i;j++)
{
if(x[j+1]<x[j])
{
t=x[j];
x[j]=x[j+1];
x[j+1]=t;
}
}
}
cout<<"array after shorting are=";
for(i=0;i<n;i++)
{
cout<<"\n"<<x[i];
}
getch();
return 0;
}