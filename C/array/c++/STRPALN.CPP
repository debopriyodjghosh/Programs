	/* palindrome without using function*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
 main()
{
char st[100];
int n,i,j,f=0;
clrscr();
cout<<"enter any string=";
gets(st);
n=strlen(st);
i=0;
j=n-1;
while(i<j)
{
if(st[i]==st[j])
{
f=1;
break;
}
i++;
j--;
}
if(f==1)
cout<<"\n string in palindrome";
else
cout<<"\n not palindrome";
getch();
return 0;
}