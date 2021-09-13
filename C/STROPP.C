#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st[100];
int i;
clrscr();
printf("enter any string=");
//scanf("%s",st);
gets(st);
printf("\n string in original case=");
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
printf("\n string in opposit case=");
//printf("%s",st);
puts(st);
getch();
}