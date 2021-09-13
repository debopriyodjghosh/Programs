#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverse(int,char[]);
void main()
{
	int i=0,j,lb;
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
	for(i=0;str[i]!='\0';i++)
	{
		if(i==0||str[i]==32)
		{
			if(i==0)
				lb=0;
			else
				lb=i+1;
		reverse(lb,str);
		}
	}
	puts(str);
	getch();
}
void reverse(int lb,char str[])
{
	int l,i,k,j=0;
	char strr[100];
	i=lb;
	while(str[i]!='\0'&&str[i]!=' ')
		i++;
	k=i-1;
	while(i!=lb)
	{
		strr[j++]=str[--i];
	}
	j=0;
	while(i<=k)
	str[i++]=strr[j++];
}
