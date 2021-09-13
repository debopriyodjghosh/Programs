/* 		         surya rules			*/

/*		   recursion to find x^n		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"


int recursion(int x,int y)
{
	int r;

	if(y==0)
		return 1;

	r=x*recursion(x,--y);

	return (r);


}

void main()
{

	int x=3,y=5;
	int z;
	clrscr();
	z=recursion(x,y);

	printf("the required value is: %d",z) ;


	getch();

}