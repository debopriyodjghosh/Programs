#include<iostream.h>
#include<conio.h>
int main()
{
int a[6],n,i,large,small;
clrscr();
cout<<"how many terms=";
cin>>n;
cout<<"enter values in array=";
for(i=0;i<n;i++)
{
cin>>a[i];
}
large=a[0];
small=a[0];
for(i=1;i<n;i++)
{
if(a[i]>large)
{
large=a[i];
}
else if(a[i]<small)
{
small=a[i];
}
}
cout<<"\n largea number from array is="<<large;
cout<<"\n smalest number from array is="<<small;
getch();
return 0;
}
