/*pascal's triangle & rectangular pattern using switch case*/
#include<stdio.h>           //header file inclusion
#include<conio.h>
void main()
{
	int bnc,i,n,j,k,a,r,p;   //variable declaration
	char ans;
	clrscr();
	do
	{
		printf("\n\t*** Pascal's Triangle & Rectangular Pattern Using Switch case***");
		printf("\n\t MENU:\n\t 1.Pascal's Triangle \n\t 2.Rectanguler Pattern\n"); //output message
		printf("\n Enter your choice:: "); //input from user
		scanf("%d",&p);
		switch(p)
		{
			case 1:
				printf("\n Enter the row number: ");        //input from user
				scanf("%d",&n);
				//calcutation for each term and display
				for(i=0;i<n;i++)
				{
					for(j=2*(n-i);j>0;j--)
					{
						printf(" ");
					}
					for(k=0;k<=i;k++)
					{
						if((k==0)||(k==i))
						{
							bnc=1;
						}
						else
						{
							bnc=((bnc*(i-k+1))/k);
						}
						printf("%4d",bnc);
					}
					printf("\n");
				}
				break;
			case 2:
				printf("\n Enter the row number: ");        //input from user
				scanf("%d",&r);
				//calculation for each term and display
				for(i=1;i<=r;i++)
				{
					a=65;
					for(k=1;k<i;k++)
					{
						printf("A");
					}
					for(j=i;j<=r;j++)
					{
						printf("%c",a);
						a++;
					}
					printf("\n");
				}
				break;
			default:
				printf("\n\t\t WRONG INPUT!!!");
		}
		printf("\n\t Do you want to continue (y/Y)?: ");  //asking for continuation
		fflush(stdin);
		scanf("%c",&ans);
	}while((ans=='y')||(ans=='Y'));
	printf("\n\t ...End Of Program...");
	getch();
}


 //OUTPUT
 /*

			  *** Pascal's Triangle & Rectangular Pattern Using Switch case***
			MENU:
			1.Pascal's Triangle
			2.Rectanguler Pattern

 Enter your choice:: 1

 Enter the row number: 6
					1
				 1   1
			  1   2   1
			1   3   3   1
		 1   4   6   4   1
	  1   5  10  10   5   1

			Do you want to continue (y/Y)?: y

		  *** Pascal's Triangle & Rectangular Pattern Using Switch case***
			MENU:
			1.Pascal's Triangle
			2.Rectanguler Pattern

 Enter your choice:: 2

 Enter the row number: 7
ABCDEFG
AABCDEF
AAABCDE
AAAABCD
AAAAABC
AAAAAAB
AAAAAAA

			Do you want to continue (y/Y)?: y

		  *** Pascal's Triangle & Rectangular Pattern Using Switch case***
			MENU:
			1.Pascal's Triangle
			2.Rectanguler Pattern

 Enter your choice:: 3

					  WRONG INPUT!!!
			Do you want to continue (y/Y)?: n

			...End Of Program...
 */
