#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
int i,j,d;
char ch[20][30],temp[30];
cout<<"\nEnter no of srting:";
cin>>d;
cout<<"\nEnter "<<d<<" strings:\n";
for(i=0;i<d;i++)
	gets(ch[i]);
for(i=0;i<d;i++)
{
	for(j=i+1;j<d;j++)
	{
		if(strcmp(ch[i],ch[j])>0)
		{
			strcpy(temp,ch[i]);
			strcpy(ch[i],ch[j]);
			strcpy(ch[j],temp);
		}
	}
}
cout<<"\nSored strings are:\n";
for(i=0;i<d;i++)
	cout<<"\n"<<ch[i];
return 0;
}
