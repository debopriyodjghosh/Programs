#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
 main()
{
 //clrscr();
 int i,j;
 char *x,*sb;
 cout<<"\nEnter a string here:";
 cin>>x;
 int len=strlen(x);
 char *s=new char[len+1];
 strcpy(s,x);
 cout <<"\nMain string\n"<<s;
 cout<<"\nEnter a substring to be searched\n";
 cin>>sb;
 int k;
 int len1=strlen(sb);
 for(i=0;i<len1;i++)
 {
  k=i;
  for(j=0;j<len1;j++)
  {
   if(s[k]==sb[j])
   {
    if(j==len1-1)
    {
     cout<<"\nThe substring is present in the main string";
     getch();
     exit(0);
    }
    k++;
   }
   else break;
  }
 }
 cout<<"\nThe substring is not present";
 if(i==len)
 cout<<"\nThe substring is not present in the main string";
 getch();
}
