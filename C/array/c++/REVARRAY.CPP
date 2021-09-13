	/*Reverse in Array*/

#include<iostream.h>
#include<conio.h>
int main()
{
int x[100],i,n,j,t;
clrscr();
cout<<"enter how many terms in array=";
cin>>n;
cout<<"\nenter the value in array=";
for(i=0;i<n;i++)
{
cin>>x[i];
}
cout<<"\n original array is=";
for(i=0;i<n;i++)
{
cout<<"\n"<<x[i];
}
j=n-1;
for(i=0;i<j;i++)
{
t=x[i];
x[i]=x[j];
x[j]=t;
j--;
}
cout<<"\n reverse array is=\n";
for(i=0;i<n;i++)
{
cout<<"\n"<<x[i];
}
getch();
return 0;
}