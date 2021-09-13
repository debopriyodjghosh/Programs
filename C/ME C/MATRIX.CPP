/* C program for matrix operation*/
#include<stdio.h>      //header file inclusion
#include<conio.h>
void matrix_add();
void matrix_sub();
void matrix_trans();
void matrix_mul();
void read(int m[10][10],int r,int c);
void disp(int m[10][10],int r,int c);
void add(int x[10][10], int y[10][10], int z[10][10], int r,int c);
void sub(int x[10][10], int y[10][10], int z[10][10], int r,int c);
void trans(int x[10][10], int y[10][10],int r,int c);
void mul(int x[10][10], int y[10][10], int z[10][10], int r,int c1,int c,int r1);
// Implement the main program using switch case
int main()
{
	int s;
	char ans;
	//clrscr();
	do
	{
		printf("\n\t ***Implementation Of Various Matrix Operation***\n");
		printf("\n\t MENU : \n\t1.matrix_add \n\t2.matrix_sub \n\t3.matrix_mul \n\t4.matrix_trans\n");
		printf("\n\t Enter your choice:: ");
		scanf("%d",&s);
		switch(s)
		{
			case 1:
				matrix_add();   //function call
				break;
			case 2:
				matrix_sub();
				break;
			case 3:
				matrix_mul();
				break;
			case 4:
				matrix_trans();
				break;
			default:
				printf("\nWRONG INPUT");
		}
		printf("\n\n Do You Want To Continue (y/Y)?");//continue loop
		fflush(stdin);
		scanf("%c",&ans);
	}
	while((ans=='y')||(ans=='Y'));
	printf("\n\n\t .....END OF PROGRAM.....");
	getch();
	return(0);
}
//definition of read function
void read(int m[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n m[%d][%d]= ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
}
//definition of disp function
void disp(int m[10][10],int r,int c)
{
	int i,j;
	printf("\n matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",m[i][j]);
		}
		printf("\n");
	}
}
//definition of add function
void add(int x[10][10], int y[10][10], int z[10][10], int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			z[i][j]=x[i][j]+y[i][j];
		}
	}
}
//definition of sub function
void sub(int x[10][10], int y[10][10], int z[10][10], int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			z[i][j]=x[i][j]-y[i][j];
		}
	}
}
//definition of trans function
void trans(int x[10][10], int y[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			y[j][i]=x[i][j];
		}
	}
}
//definition of multi function
void multi(int x[10][10], int y[10][10], int z[10][10], int r,int c1,int c)
{
	int i,j,k;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c1;j++)
		{
			z[i][j]=0;
			for(k=0;k<c;k++)
			{
				z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
			}
		}
	}
}
//definition of matrix_add function
void matrix_add()
{
		int x[10][10],y[10][10],z[10][10],r,c,r1,c1;
		printf("How many row and col in 1st matrix:: ");
		scanf("%d %d",&r,&c);
		printf("How many row and col in 2nd matrix:: ");
		scanf("%d %d",&r1,&c1);
		if(r==r1&&c==c1)
		{
			printf("\n Mat1:");
			read(x,r,c);
			printf("\n Mat2:");
			read(y,r,c);
			add(x,y,z,r,c);
			disp(x,r,c);
			disp(y,r,c);
			printf("\n\t Addition of two marix is\n");
			disp(z,r,c);
		}
		else
			printf("\n MATRIX ADDITION IS NOT POSSIBLE!!!");
}
//definition of matrix_sub function
void matrix_sub()
{
		int x[10][10],y[10][10],z[10][10],r,c,r1,c1;
		printf("How many row and col in 1st matrix:: ");
		scanf("%d %d",&r,&c);
		printf("How many row and col in 2nd matrix:: ");
		scanf("%d %d",&r1,&c1);
		if(r==r1&&c==c1)
		{
			printf("\n Mat1:");
			read(x,r,c);
			printf("\n Mat2:");
			read(y,r,c);
			sub(x,y,z,r,c);
			disp(x,r,c);
			disp(y,r,c);
			printf("\n\t Subtraction of two marix is\n");
			disp(z,r,c);
		}
		else
			printf("\n MATRIX SUBTRACTION IS NOT POSSIBLE!!!");
}
//definition of matrix_trans function
void matrix_trans()
{
		int x[10][10],y[10][10],r,c;
		printf("How many row and col in matrix:: ");
		scanf("%d%d",&r,&c);
		if(r==c)
		{
			printf("\n Mat1:");
			read(x,r,c);
			trans(x,y,r,c);
			printf("\n Real matrix");
			disp(x,r,c);
			printf("\n\t Transpose of matrix\n");
			disp(y,r,c);
		}
		else
		printf("\n MATRIX TRANSPOSE IS NOT POSSIBLE!!!");
}
//definition of matrix_mul function
void matrix_mul()
{
		int x[10][10],y[10][10],z[10][10],r,r1,c,c1;
		printf("How many row and col in 1st matrix:: ");
		scanf("%d%d",&r,&c);
		printf("How many row and col in 2nd matrix:: ");
		scanf("%d%d",&r1,&c1);
		if(c==r1)
		{
			printf("\n Mat1:");
			read(x,r,c);
			printf("\n Mat2:");
			read(y,r1,c1);
			disp(x,r,c);
			disp(y,r1,c1);
			multi(x,y,z,r,c1,c);
			printf("\n\t Multiplication of two marix is\n");
			disp(z,r,c1);
		}
		else
			printf("\n MATRIX MULTIPLICATION IS NOT POSSIBLE!!!");
}


 /*

			***Implementation Of Various Matrix Operation***

			MENU :
		  1.matrix_add
		  2.matrix_sub
		  3.matrix_mul
		  4.matrix_trans

			Enter your choice:: 1
How many row and col in 1st matrix:: 2 2
How many row and col in 2nd matrix:: 2 2

 Mat1:
 m[0][0]= 1

 m[0][1]= 3

 m[1][0]= 5

 m[1][1]= 7

 Mat2:
 m[0][0]= 2

 m[0][1]= 4

 m[1][0]= 6

 m[1][1]= 8

 matrix
	 1    3
	 5    7

 matrix
	 2    4
	 6    8

			Addion of two marix is

 matrix
	 3    7
	11   15


 Do You Want To Continue (y/Y)?y

			***Implemention Of Various Matrixs Operation***

			MENU :
		  1.matrix_add
		  2.matrix_sub
		  3.matrix_mul
		  4.matrix_trans

			Enter your choice:: 2
How many row and col in 1st matrix:: 2 3
How many row and col in 2nd matrix:: 2 3

 Mat1:
 m[0][0]= 1

 m[0][1]= 2

 m[0][2]= 3

 m[1][0]= 4

 m[1][1]= 5

 m[1][2]= 6

 Mat2:
 m[0][0]= 6

 m[0][1]= 5

 m[0][2]= 4

 m[1][0]= 3

 m[1][1]= 2

 m[1][2]= 1

 matrix
	 1    2    3
	 4    5    6

 matrix
	 6    5    4
	 3    2    1

			Subtraction of two marix is

 matrix
	-5   -3   -1
	 1    3    5


 Do You Want To Continue (y/Y)?y

			***Implemention Of Various Matrixs Operation***

			MENU :
		  1.matrix_add
		  2.matrix_sub
		  3.matrix_mul
		  4.matrix_trans

			Enter your choice:: 3
How many row and col in 1st matrix:: 2 3
How many row and col in 2nd matrix:: 3 2

 Mat1:
 m[0][0]= 1

 m[0][1]= 0

 m[0][2]= 1

 m[1][0]= 0

 m[1][1]= 1

 m[1][2]= 0

 Mat2:
 m[0][0]= 2

 m[0][1]= 1

 m[1][0]= 3

 m[1][1]= 4

 m[2][0]= 5

 m[2][1]= 6

 matrix
	 1    0    1
	 0    1    0

 matrix
	 2    1
	 3    4
	 5    6

			Multiplication of two marix is

 matrix
	 7    7
	 3    4


 Do You Want To Continue (y/Y)?y

			***Implemention Of Various Matrixs Operation***

			MENU :
		  1.matrix_add
		  2.matrix_sub
		  3.matrix_mul
		  4.matrix_trans

			Enter your choice:: 4
How many row and col in matrix:: 2 2

 Mat1:
 m[0][0]= 4

 m[0][1]= 6

 m[1][0]= 8

 m[1][1]= 10

 Real matrix
 matrix
	 4    6
	 8   10

			Transpose of matrix

 matrix
	 4    8
	 6   10


 Do You Want To Continue (y/Y)?y

			***Implemention Of Various Matrixs Operation***

			MENU :
		  1.matrix_add
		  2.matrix_sub
		  3.matrix_mul
		  4.matrix_trans

			Enter your choice:: 3
How many row and col in 1st matrix:: 2 3
How many row and col in 2nd matrix:: 2 4

MATRIX MULTIPLICATION IS NOT POSSIBLE!!!

 Do You Want To Continue (y/Y)?n


			.....END OF PROGRAM.....
   */
