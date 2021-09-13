#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void heapsort(int a[], int n);
void insert(int tree[], int n, int item);
void del(int tree[], int n, int item);
void main()
{
  int a[10], i, n;
  clrscr();
  printf("\n Enter the number of items");
  scanf("%d", &n);
  printf("\n Enter the elements");
  for (i=1;i<=n;i++)
  {
	scanf("%d", &a[i]);
  }
  heapsort(a, n);
  for (i=1;i<=n;i++)
  {
	printf(" %d", a[i]);
  }
  getch();
}
void heapsort(int a[], int n)
{
 int item, j;
 for (j=1;j<=n-1;j++)
 {
	insert(a, n, a[j+1]);
 }
 while (n>1)
 {
	del(a, n, item);
	a[n+1]=item;
 }
}
void insert(int tree[], int n, int item)
{
  int par, ptr;
  n=n+1;
  ptr=n;
  while (ptr>1)
  {
	 par=ptr/2;
	 if (item<=tree[par])
	 {
		tree[ptr]=item;
		return;
	 }
	 else
	 {
		tree[ptr]=tree[par];
		ptr=par;
	 }
  }
  tree[1]=item;
  return;
}

void del(int tree[], int n, int item)
{
  int ptr, left, right, last;
  item=tree[1];
  last=tree[n];
  n=n-1;
  ptr=1;
  left=2;
  right=3;
  while (right<=n)
  {
	 if ((last>=tree[left])&&(last>=tree[right]))
	 {
		tree[ptr]=last;
		return;
	 }
	 if (tree[left]>=tree[right])
	 {
		tree[ptr]=tree[left];
		ptr=left;
	 }
	 else
	 {
		tree[ptr]=tree[right];
		ptr=right;
	 }
	 left=2*ptr;
	 right=left+1;
  }
  if ((left==n)&&(last<tree[left]))
  {
	 tree[ptr]=tree[left];
	 ptr=left;
	 tree[ptr]=last;
	 return;
  }
}
