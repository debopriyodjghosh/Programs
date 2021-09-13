/*Number To Word Generation*/
#include<stdio.h>     //header file inclusion
#include<conio.h>
//global declaration of the string word
char word[][20]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine",
"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen",
"Eighteen","Nineteen","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty",
"Ninety"};
void acronym1(long int);              //function declaration
void acronym2(long int);
void inword1(long int);
void main()
{
	long int n;           //long integer variable declaration
	char ans;
	clrscr();
	do
	{
   	printf("\n\t\t ***Number To Word Generation*** ");
		printf("\n Enter the number= ");   //long integer input from user
		scanf("%ld",&n);
		if(n!=0)
		{
			if(n<0)
			{
				n=0-n;
				printf("\n The inputted number is = \n\nnegative ");
				acronym1(n);        //function call
				printf("\n\nnegative ");
				acronym2(n);
			}
			else
			{
				printf("\n The inputted number is \n\n");
				acronym1(n);
				printf("\n\n");
				acronym2(n);
			}
		}
		else
			 printf("\n The inputted number is = \n\nZero ");
		fflush(stdin);
		printf("\n\t Do You Want to Continue (y/Y) ? ");  //asking for continuation
		scanf("%c",&ans);
	}while(ans=='y' || ans=='Y');
	printf("\n\t\t ....End Of Program....");
	getch();
}
//definition of the function acronym1
void acronym1(long int n)
{
	long int q;
	if(n>=10000000)
	{
		q=n/10000000;
		inword1(q);
		printf("Crore");
		n=n%10000000;
	}
	if(n>=100000)
	{
		q=n/100000;
		inword1(q);
		printf("Lakh");
		n=n%100000;
	}
	if(n>=1000)
	{
		q=n/1000;
		inword1(q);
		printf("Thousand");
		n=n%1000;
	}
	if(n>=100)
	{
		q=n/100;
		inword1(q);
		printf("Hundred");
		n=n%100;
	}
	if(n>0)
		inword1(n);
}
//definition of the function acronym2
void acronym2(long int n)
{
	long int  p,q,r,rev;
	q=n,rev=0;
	while(q!=0)
	{
		p=q%10;
		rev=rev*10+p;
		q=q/10;
	}
	while(rev!=0)
	{
			r=rev%10;
			if(r!=0)
				inword1(r);
			else
				printf(" Zero ");
			rev=rev/10;
	}
}
//definition of the function inword1
void inword1(long int  m)
{
	int a,b;
	if(m<=20)
		printf(" %s ",word[m-1]);
	else
	{
		a=m/10;
		b=m%10;
		printf(" %s %s ",word[17+a],b==0?" " : word[b-1]);
	}
}

/*
                 ***Number To Word Generation***
 Enter the number= 157893642

 The inputted number is

 Fifteen Crore Seventy Eight Lakh Ninety Three Thousand Six Hundred Forty Two

 One  Five  Seven  Eight  Nine  Three  Six  Four  Two
         Do You Want to Continue (y/Y) ? y

                 ***Number To Word Generation***
 Enter the number= -987365246

 The inputted number is =

negative  Ninety Eight Crore Seventy Three Lakh Sixty Five Thousand Two Hundred
Forty Six

negative  Nine  Eight  Seven  Three  Six  Five  Two  Four  Six
         Do You Want to Continue (y/Y) ? y

                 ***Number To Word Generation***
 Enter the number= 00000

 The inputted number is =

Zero
         Do You Want to Continue (y/Y) ? y

                 ***Number To Word Generation***
 Enter the number= 108090602

 The inputted number is

 Ten Crore Eighty   Lakh Ninety   Thousand Six Hundred Two

 One  Zero  Eight  Zero  Nine  Zero  Six  Zero  Two
         Do You Want to Continue (y/Y) ? n

					  ....End Of Program....
*/
