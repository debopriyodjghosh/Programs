/*CHARECTER SORTING USING BUBBBLE SORT*/
#include<stdio.h>
#include<ctype.h>
void bubble(char*,int);
void main()
{
	char a[52];
	int i;
	printf("\n ENTER ELLIMENTS IN ARRAY");
	for(i=0;i<52;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("\n THE UNSORTED ARRAY:\n");
	for(i=0;i<52;i++)
	{
		printf("\t%c",a[i]);
	}
	bubble(a,52);
	printf("\n THE SORTED ARRAY IS:-\n");
	for(i=0;i<52;i++)
	{
		printf("\t%c",a[i]);
	}
}
void bubble(char a[],int n)
{
	int i,j,t,k1,k2;
	char c1,c2;
	for(i=0;i<=n-2;i++)
	{
	for(j=0;j<=n-2-i;j++)
	{
	c1=tolower(a[j]);
	c2=tolower(a[j+1]);
	k1=c1;
	k2=c2;
	if(k1>k2)
	{
		a[j]=k2;
		a[j+1]=k1;
	}
	else
	{
		a[j]=k1;
		a[j+1]=k2;
	}
  }
  /*printf("\nAFTER THE PASS\n");
		for(j=0;j<52;j++)
		{
			printf("\t%c",a[j]);
		}*/

	}
}


