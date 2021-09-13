#include<iostream.h>

#define TRUE 1
#define FALSE 0

typedef unsigned char Bool;

template <class T>
void Make2DArray(T ** &x, int rows, int cols)
{
x=new T * [rows];
for(int i=0;i<rows;i++)
x[i]=new T [cols];
}

void main()
{
long **x;
Make2DArray(x,10,20);
}