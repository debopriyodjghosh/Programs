/*Binary Search With Selection Sort*/
#include<stdio.h>
#include<conio.h>       //heder file inclusion
#include<string.h>
void selection_sort(char m[][20],int n);           // function declearation
int binary_search(char s[][20],char t[][20],int n,int l,int u);
void main()
{
	int i,n,u,l,x;            // variable declearation
	char s[20][20],t[20][20],ans,ans1;
	clrscr();
	do
	{
		printf("\n\t ***Implementation Of Binary Search With Selection Sort***");
		printf("\n Enter How Many Element: ");   //input from user
		scanf("%d",&n);
		l=0,u=n;
		for(i=0;i<n;i++)
		{
			fflush(stdin);
			printf("\n Enter The Element: ");  //input from user
			scanf("%[^\n]",s[i]);
		}
		fflush(stdin);
		selection_sort(s,n);               //function call
		printf("\n\n Elements After Sorting: \n");
		for(i=0;i<n;i++)
		{
			printf("\t %s",s[i]);
		}
		do
		{
			fflush(stdin);
			printf("\n Enter The Finding Element:");     //enter searching element
			scanf("%[^\n]",t[0]);
			x=binary_search(s,t,n,l,u);
			if(x==1)
				printf("\n\t Successful Search ");
			else
				printf("\n\t Unsuccessful Search !!!");
			fflush(stdin);
			printf( "\n\n\t Do you want Another Searching(y/Y)? ");
			fflush(stdin);
			scanf("%c",&ans1);
		}while((ans1=='y')||(ans1=='Y'));
		printf("\n\n\t Do you want to continue For New Elements(y/Y)? ");    //asking for continuation
		fflush(stdin);
		scanf("%c",&ans);
	}while((ans=='y')||(ans=='Y'));
	printf("\n\n\t ....End Of Program....");
getch();
}
//definition of the function selection_sort
void selection_sort(char m[][20],int n)
//returntype of this function is void
{
	int i,j,p;
	char t[20];
	for(i=0;i<n-1;i++)
	{
		strcpy(t,m[i]);
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(m[j],t)<0)
			{
				strcpy(t,m[j]);
				p=j;
			}
		}
		strcpy(m[p],m[i]);
		strcpy(m[i],t);
	}
}
//definition of the function binay_search
int binary_search(char s[][20],char t[][20],int n,int l,int u)
//returntype of this function is 'int'
{
	int i,m,f;
	f=0;
	for(i=0;i<n;i++)
	{
		m=(l+u)/2;
		if(strcmp(s[i],t[0])>0)
			l=m+1;
		if(strcmp(s[i],t[0])<0)
			u=m-1;
		if(strcmp(s[i],t[0])==0)
		{
			f=1;
			printf("\n\n The Position Of The Searching Element '%s' is =%d",t,i);
		 break;
		}
	}
	return f;
}


/*			***Implementation Of Binary Search With Selection Sort***
 Enter How Many Element: 3

 Enter The Element: Sayantani Ghosh

 Enter The Element: Debosmita Paul

 Enter The Element: Parna Datta


 Elements After Sorting:
			Debosmita Paul  Parna Datta     Sayantani Ghosh
 Enter The Finding Element:Sayantani Ghosh


 The Position Of The Searching Element 'Sayantani Ghosh' is =2
			Successful Search

			Do you want Another Searching(y/Y)? y

 Enter The Finding Element:Parna Datta


 The Position Of The Searching Element 'Parna Datta' is =1
			Successful Search

			Do you want Another Searching(y/Y)? y

 Enter The Finding Element:ashmita

			Unsuccessful Search !!!

			Do you want Another Searching(y/Y)? n


			Do you want to continue For New Elements(y/Y)? y

			 ***Implementation Of Binary Search With Selection Sort***
 Enter How Many Element: 3

 Enter The Element: Worldcup 2015

 Enter The Element: Worldcup 2007

 Enter The Element: Worldcup 2011


 Elements After Sorting:
			Worldcup 2007   Worldcup 2011   Worldcup 2015
 Enter The Finding Element:Worldcup 2015


 The Position Of The Searching Element 'Worldcup 2015' is =2
			Successful Search

			Do you want Another Searching(y/Y)? y

 Enter The Finding Element:Worldcup 2003

			Unsuccessful Search !!!

			Do you want Another Searching(y/Y)? n


			Do you want to continue For New Elements(y/Y)? n


			....End Of Program....
*/
