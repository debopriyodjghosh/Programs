#include<stdio.h>
#include<string.h>

 main()
{
	int i;
	char c[100];
	clrscr();
	printf("\nEnter string  : ");
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
	if (c[i]==' ')
	i++;
		if(c[i]>=65 && c[i]<=90)
		{
			c[i]=c[i]+32;	
		}
		else
		{
			c[i]=c[i]-32;
		}	
	}
	
	
	
	
	
   printf("\nConverted string is :  %s",c);

getch();
return (0);

}
