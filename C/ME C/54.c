// A Program for replacing string within a given string

// HEADER FILES
#include<stdio.h>
#include<string.h>

// MAIN FUNCTION
main()
{
	char o_s[100],s_s[20],r_s[20],*p,b[100];
	int i,c=0;
	printf("Enter the Original String=");
	fflush(stdin);
	gets(o_s);
	printf("Please enter the String to search=");
	fflush(stdin);
	gets(s_s);
	printf("Please enter the replace String=");
	fflush(stdin);
	gets(r_s);
	while(1)
	{
		p=strstr(o_s,s_s);
		if(p==NULL)
		 break;
		for(i=0;(&o_s[i])<p;i++)
		 b[i]=o_s[i];
		strcpy(&b[i],r_s);
		i=i+strlen(r_s);
		p=p+strlen(s_s);
		strcpy(&b[i],p);
		strcpy(o_s,b);
		c=c+1;
	}
	if(c>0)
	{
		printf("After replacing that String=%s",o_s);
		printf("\n%s occurs %d times in the Original String.",s_s,c);
	}
	else
	 printf("%s is not into the Original String.",s_s);
}

