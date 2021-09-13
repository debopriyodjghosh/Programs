#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100],s2[100];
	int i,j,k,len,count=0;
	printf("\nEnter the string: ");
	gets(s);
	printf("\nEnter the substring: ");
	gets(s1);
	len=strlen(s1);
	for(i=0;s[i]!=NULL;i++)
	{    
	
		for(j=0,k=i;j<len&&s[k]!=NULL;j++,k++)
		s2[j]=s[k];
		s2[j]='\0';
		if(strcmp(s2,s1)==0)
		count++;
		
		}	
		printf("%d",count);
}
