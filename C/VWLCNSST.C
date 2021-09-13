#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,v=0,c=0;
clrscr();
printf("enter any words=");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
switch(str[i])
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
v++;
continue;
break;
default:c++;
}
}

printf("number of vowel=%d",v);
printf("number of consonant=%d",c);
getch();
}