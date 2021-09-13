#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st[100],ch;
int n,i;
clrscr();
printf("enter lower case string=");
gets(st);
printf("\n original string=");
puts(st);
for(ch='a';ch<='z';ch++)
{
n=0;
for(i=0;st[i]!='\0';i++)
{
if(st[i]==ch)
n++;
}

printf("%c\t",ch);
printf("%d\n",n);
}
getch();
}