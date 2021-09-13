#include <stdio.h>
#include<string.h>
main()
{
	
	char s[50],t;
	int i,j,k;
	printf("\n enter any string : ");
	gets(s);
	for(i=0;s[i]!=' '&&s[i]!='\0';i++)
	{
		t=s[i];
		s[i]=s[i+1];
		s[i+1]=t;
	}
	puts(s);
	
}
