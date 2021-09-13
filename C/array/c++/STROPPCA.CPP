
/*string in opposit case*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char st[100];
int i;
clrscr();
cout<<"enter any string=";
//scanf("%s",st);
gets(st);
cout<<"\n string in original case=";
//printf("%s",st);
puts(st);
for(i=0;st[i]!='\0';i++)
{
/*if(isupper(st[i]))
{
st[i]=tolower(st[i]);
}
else
{
if(islower(st[i]))
{
st[i]=toupper(st[i]);
}
}*/

if(st[i]>='A'&&st[i]<='Z')
{
st[i]=st[i]+32;
}
else
{
if(st[i]>='a'&&st[i]<='z')
{
st[i]=st[i]-32;
}
}
}
cout<<"\n string in opposit case=";
//printf("%s",st);
puts(st);
getch();
return 0;
}