/*abbreviation of a given name*/
#include<stdio.h>              //header file inclusion
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char *abb1(char * name,char *t);  //function declaration
char *abb2(char * name,char *t);
void main()
{
	char *name,*temp,*t;        //character type pointer variable declaration
	char ans;
	int n,m;
	clrscr();
	do
	{
		printf("\n\t\t ***Abbreviation Generation*** ");
		printf("\nHow Many Character Input The String : "); //input from user
		scanf("%d",&n);
		name=(char *)malloc(n*sizeof(char));         //dynamic memory allocation
		printf("\nHow Many Character Input In The Temporary String : "); //input from user
		scanf("%d",&m);
		t=(char *)malloc(n*sizeof(char));            //dynamic memory allocation
		fflush(stdin);
		printf("\n Enter String : ");                //input from user
		scanf("%[^\n]",name);
		temp=abb1(name,t);
		printf("\n The Name is = %s ",temp);         //output to user
		temp=abb2(name,t);
		printf("\n The Name is = %s ",temp);
		fflush(stdin);
		printf("\n\t Do You Want to Continue (y/Y) ? ");  //asking for continuation
		scanf("%c",&ans);
	}while(ans=='y' || ans=='Y');
	printf("\n\n\t\t ....End Of Program....");
	getch();
}
//definition of the function 'abb1'
char *abb1(char * name, char *t)
{
	int i,j;
	*(t+0)=*(name+0);
	*(t+1)= '.';
	j=2;
	for(i=1;*(name+i)!='\0';i++)
	{
		if(*(name+i)==' ')
		{
			i++;
			*(t+j)=*(name+i);
			j++;
			*(t+j)='.';
			j++;
		}
	}
	*(t+j)='\0';
	return t;
}
//definition of the function 'abb2'
char *abb2(char * name,char *t)
{
	int i,j,k;
	*(t+0)=*(name+0);
	*(t+1)= '.';
	j=2;
	for(i=1;*(name+i)!='\0';i++)
	{
		if(*(name+i)==' ')
		{
			k=i;
			i++;
			*(t+j)=*(name+i);
			j++;
			*(t+j)='.';
			j++;
		}
	}
	j=j-2;
	while(*(name+k)!='\0')
	{
			*(t+j)=*(name+k);
			j++;
			k++;
	}
	*(t+j)='\0';
	return t;
}
/*

					  ***Abbreviation Generation***
How Many Character Input The String : 20

How Many Character Input In The Temporary String : 20

 Enter String : Subhash Chandra Bose

 The Name is = S.C.B.
 The Name is = S.C. Bose
			Do You Want to Continue (y/Y) ? n


					  ....End Of Program....
*/
