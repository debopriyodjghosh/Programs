#include<stdio.h>
struct num     /* 1. different memory space allocation  2. all member accessable */
{
	int a;
	float b;
	char c;
};

union numb   /* 1. same memory space allocation  2. any one member accessable */
{
	int a;
	float b;
	char c;
};

void main()
{
  struct num x;
  union numb y;

  printf("\n size=%d",sizeof(x));  /* ..|....|. */
  x.a=10;
  x.b=12.5;
  x.c='a';
  printf("\n %d  %f  %c \n",x.a,x.b,x.c);

  printf("\n size=%d",sizeof(y));  /* .... */
  y.a=10;
  printf("\n %d \n",y.a);

  enum dept{sales,purchase=10,acct,tech};

	printf("\n %d",acct);

	enum e{false,true};


}
