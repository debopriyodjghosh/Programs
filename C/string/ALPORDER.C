	/*alphabate in order*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st[100],ch;
int i;
clrscr();
printf("enter any string=");
gets(st);
for(ch='a';ch<='z';ch++)
{
for(i=0;st[i]!='\0';i++)
{
if(st[i]==ch)
{
printf("%c",ch);
}
}
}
getch();
}