/* 		         surya rules				*/

/*        combining equal nuber of coins toget an amount    	*/

/* 		the program is working fine			*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"


void main()
{

	int amount,i=1,j,sum,integer;
	float c_1,c_2,c_3,decimal;
	float c1=.1,c2=.05,c3=.25;
	clrscr();
//	printf("enter an amount:");
  //	scanf("%d",&amount);

	while(1)//for(i=1;i<amount;i++)
	{
		c_1=c1*i;
		c_2=c2*i;
		c_3=c3*i;

		/*if((c_1+c_2+c_3)==amount)
		{
			j=i;break;
		} */
		decimal=c_1+c_2+c_3;
		integer=(c_1+c_2+c_3);

		if(decimal-integer==0)
			{printf("%d   ,  %d",integer,i);break;}

		i++;
	}

       //	printf("\n\n\n the requered number of each coins is : %d",j);

	/*for(i=4;i<j;i=i+4)
	{
		c_1=c1*i;
		c_2=c2*i;
		c_3=c3*i;

		sum=c_1+c_2+c_3;
		printf("\n %d\n",sum);
	/*
		if((c_1+c_2+c_3)==amount)
		{
			j=i;break;
		}
	}               */

	getch();

}