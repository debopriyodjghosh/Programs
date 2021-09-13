				       //heapsort//
#include<stdio.h>
#include<conio.h>




void heapify(int [],int);


void heapsort(int [],int);



void main()
{
//declare the local variables//
int i,n,a[50];




clrscr();



printf("\nEnter the no of elements\n");
scanf("%d",&n);



for(i=0;i<n;i++)
{
printf("a[%d]=",i+1);
scanf("%d",&a[i]);
}

heapsort(a,n);
//display the array//
printf("\ndisplay the array after sorting\n");
for(i=0;i<n;i++)
  printf("\na[%d]=%d  ",i+1,a[i]);


getch();
}


void heapify(int  x[],int n)
{

//declare local variables//

int son,father,i,val;

for(i=1;i<n;i++)
{


  val=x[i];
  son=i;
  father=(son-1)/2;


	  while((son>0)&&(x[father]<val))
		{

		 x[son]=x[father];
		 son=father;
		 father=(son-1)/2;

		}

	 x[son]=val;

}//end of for loop i//


}//end of function heapify//


void heapsort(int a[],int n)
{
int i,temp;
for(i=0;i<n;i++)
{
  heapify(a,n-i);
  temp=a[0];
  a[0]=a[n-i-1];
  a[n-i-1]=temp;
}
}