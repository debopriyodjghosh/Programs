#include<stdio.h>
#include<conio.h>
#include<string.h>
char strr[100];
void reverse(char[]);
void main()
{
	int l,i=0,flag=0;
	char str[100],ch;
	clrscr();
	printf("Enter a string:");
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='\n')
		break;
		str[i++]=ch;
	}
	str[i]='\0';
	reverse(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]==strr[i])||(str[i]==strr[i]+32)||(str[i]==strr[i]-32))
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		printf("Not palindrome.");
	else
		printf("Palindrome.");
		getch();
}
void reverse(char str[])
{
	int l,i=0,k,j=0;
	while(str[i]!='\0')
	i++;
	while(i!=-1)
	{
		strr[j++]=str[i-1];
		i--;
	}
}
