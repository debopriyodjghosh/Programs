/* Show ODD-EVEN number within a range*/
#include<stdio.h>				//header file inclusion
#include<conio.h>
void main()
{
	int l,u,i,t;						//variable declaration
	char ans;
	clrscr();
	printf("\n\t\t *** Show ODD-EVEN number between a given range***");
	do
	{
		printf("\n Enter the lower limit: ");        //output message
		scanf("%d",&l);                              //input value from user
		printf("\n Enter the upper limit: ");
		scanf("%d",&u);
		if(u<l)
		{
			t=l;
			l=u;
			u=t;
		}
		if(l<0)
		{
			l=l-l;
		}
		else if(u<0)
		{
			u=u-u;
		}
		printf("\n\n The Even numbers are: ");
		for(i=l;i<=u;i++)
			{
				if(i%2!=0)
				{
					continue;
				}
				printf("%d,",i);
			}
		printf("\n\n The odd numbers are: ");
		for(i=l;i<=u;i++)
		{
			if(i%2==0)
			{
				continue;
			}
			printf("%d,",i);
		}
	printf("\n\n\t Do You Want To Continue (y/Y)? ");
	fflush(stdin);
	scanf("%c",&ans);
	}
	while((ans=='y')||(ans=='Y'));
	printf("\n\n\t ....End of program....");
	getch();
}
/*

					  *** Show ODD-EVEN number between a given range***
 Enter the lower limit: 2

 Enter the upper limit: 20


 The Even numbers are: 2,4,6,8,10,12,14,16,18,20,

 The odd numbers are: 3,5,7,9,11,13,15,17,19,

			Do You Want To Continue (y/Y)? y

 Enter the lower limit: 30

 Enter the upper limit: 3


 The Even numbers are: 4,6,8,10,12,14,16,18,20,22,24,26,28,30,

 The odd numbers are: 3,5,7,9,11,13,15,17,19,21,23,25,27,29,

			Do You Want To Continue (y/Y)? y

 Enter the lower limit: -

 Enter the upper limit: 15


 The Even numbers are: 4,6,8,10,12,14,

 The odd numbers are: 3,5,7,9,11,13,15,

			Do You Want To Continue (y/Y)? y

 Enter the lower limit: 25

 Enter the upper limit: -15


 The Even numbers are: 0,2,4,6,8,10,12,14,16,18,20,22,24,

 The odd numbers are: 1,3,5,7,9,11,13,15,17,19,21,23,25,

			Do You Want To Continue (y/Y)? n


			....End of program....
*/

