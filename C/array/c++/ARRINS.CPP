	/*insertion in array*/

#include<iostream.h>
#include<conio.h>
 main()
{
int x[100],n,i,v,p;
clrscr();
cout<<"how many elements in array=";
cin>>n;
cout<<"\nenter the value of array=";
for(i=0;i<n;i++)
{
cin>>x[i];
}
cout<<"\n enter the value you want to insert=";
cin>>v;
cout<<"\n enter the position where you want to insert it=";
cin>>p;
for(i=n-1;i>=p-1;i--)
{
x[i+1]=x[i];
}
x[i+1]=v;
n++;
cout<<"\n new array are=";
for(i=0;i<n;i++)
{
cout<<"\n"<<x[i];
}
getch();
return 0;
}