#include<Stdio.h>
#include<conio.h>
void get_matrix(int M[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
    for(j=o;j<c;j++)
    {
        printf("the elements are (%d,%d): ",i+1,j+1);
        scanf("%d",&M[i][j]);
    }
}

}


void display(int M[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%4d",M[i][j]);
    }
    printf("\n");
}
}


void matrix_mul(int A[10][10],int B[10][10], intC[10][10],int p,int q, int r)
{
    int i,j,k;
    for(i=0;i<p;i++)
    {
    for(j=0;j<r;j++)
    {
    C[i][j]=0;
    for(k=0;k<q;k++)
    C[i][j]+=(A[i][k]*B[k][j]);
    }
    }
}



void main()
{
    int A[10][10],B[10][10],C[10][10],r1,c1,r2,c2;
    printf("Matrix 1\nenter the number of rows and coloumn   : ");
    scanf("%d\t%d",&r1,&c1);
    get_matrix(A,r1,c1);
    display(A,r1,c1);
    printf("Matrix 2\nenter the no of rows and coloumn : ");
    scanf("%d\t%d",&r2,&c2);
    get_matrix(B,)

}
