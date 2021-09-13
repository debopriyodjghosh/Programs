#include<stdio.h>
#include<conio.h>
#include<math.h>

int tree[50],i=1,flag=0;
void create();

void main()
{
	int k=1,j,l;
	create();
	i=(i*2)+1;
	if(flag==1)
	{
	 getch();
	 exit(0);
	 }
	 while(k<i)
	 {
		for(j=k,l=2*k-1;j<=l;j++,l--)
		{
			if(tree[j]!=tree[l])
			{
			printf("\nBinary tree not symmetric!");
			flag=1;
			break;
			}
		}
		k=k*2;

	}
	if(flag==0)
	printf("\nBinary tree is symmetric!");
	getch();
}
 void create()
{
	int n,ch;
	clrscr();
	printf("\n***CREATION OF BINARY TREE**\n(Node values are integers)");
	printf("\nEnter an item: ");
		scanf("%d",&n);
		tree[i]=n;
	printf("\nDo you want to continue?(1/0)");
		scanf("%d",&ch);
			if(ch==0) //no left child
			{
			printf("\nBinatry tree is symmetric!");
			getch();
			exit(0);
			}
		       else	while(1)
			      {
		printf("\nEnter an item: ");//inserting left child
		scanf("%d",&n);
		tree[2*i]=n;
		printf("\nDo you want to continue?(1/0)");
		scanf("%d",&ch);
		if(ch==0) //no right child
		{
			flag=1;
			printf("\nBinary tree is not symmetric!");
			return;
		}
		printf("\nEnter an item: ");
		scanf("%d",&n);
		tree[(2*i)+1]=n;

		printf("\nDo you want to continue?(1/0)");
		scanf("%d",&ch);
		if(ch==0)
		{       break;
		}
		i++;
	}
}