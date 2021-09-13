//binary search....(drawback: inputed data must be in sorted order.. )
#include<stdio.h>
#include<conio.h>
void main(void)
{
 int a[100],beg,end,i,n,mid,item;
 clrscr();
 fflush(stdin);
 printf("\n\nEnter the total no. of inputs: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n\nEnter data: ");
  scanf("%d",&a[i]);
 }
 printf("\n\nEnter the item that you want to search: ");
 scanf("%d",&item);
 beg=0;
 end=n-1;
 while(beg<=end)
 {
  mid=(beg+end)/2;
  if(item==a[mid])
	break;
  else
	if(item<a[mid])
	 end=mid-1;
	else
	 beg=mid+1;
 }
 if(beg<=end)
  printf("\n\n\aElement found.. \t\t\a Position at: %d",mid+1);
 else
  printf("\n\n\aElement not found !!");
 getch();
}
