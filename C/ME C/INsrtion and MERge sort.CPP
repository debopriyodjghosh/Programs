/*Implemenation of insertion sort and merge sort*/
#include<stdio.h>        //header file inclusion
#include<conio.h>
void insertion_sort();      //function declaration
void merge_sort();
void mer(int x[],int l,int h);
void merst(int x[],int l,int mid,int h);
void insrs(int x[],int n);
void main()
{
	int s;           // variable declearation
	char ans ;
	clrscr();
	do
	{
		printf("\n\t *** Implemention Of Insertion Sort And Merge Sort ***");
		printf("\n\n\t MENU: \n\t1.Insertion_sort\n\t2.Merge_sort");
		printf("\n\n\t Enter Your Choice:: ");    //input from user
		scanf("%d",&s);
		switch(s)
		{
			case 1:
				insertion_sort();       //function call
				break;
			case 2:
				merge_sort();
				break;
			default:
				printf("\n\t WRONG INPUT !!!");
		}
		printf("\n\n\t Do You Want To Continue(y/Y)? "); //asking for continuation
		fflush(stdin);
		scanf("%c",&ans);
	}while((ans=='y')||(ans=='Y'));
	printf("\n\n\t\t ....End of Program....");
	getch();
}
//definition of the function 'merge_sort'
void merge_sort()
{
	int i,n,x[20];
	printf("\n Enter How many elements: ");   //input from user
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nx[%d]=",i);
		scanf("%d",&x[i]);
	}
	mer(x,0,n-1);                              //function call
	printf("\n Elements After Sorting \n");   //output to user
	for(i=0;i<n;i++)
	{
		printf("\t%d",x[i]);
	}
}
//definition of the function 'insertion_sort'
void insertion_sort()
{
	int i,n,x[20];
	x[0] = -32767;
	printf("\n\t Enter How many elements: ");  //input from user
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n x[%d]= ",i);
		scanf("%d",&x[i]);
	}
	insrs(x,n);                                //function call
	printf("\n Elements After Sorting \n");   //output to user
	for(i=1;i<=n;i++)
	{
		printf("\t%d",x[i]);
	}
}
//definition of the function 'mer'
void mer(int x[],int l,int h)
{
	int mid;
	if(l<h)
	{
		mid = (l+h)/2;
		mer(x,l,mid);             //function call
		mer(x,mid+1,h);
		merst(x,l,mid,h);
	}
}
//definition of the function 'merst'
void merst(int x[],int l,int mid,int h)
{
	int i,j,k,t[20];
	i=l;
	j=mid+1;
	k=0;
	while(i<=mid && j<=h)
	{
		if(x[i]<x[j])
		{
			t[k]=x[i];
			i++;
		}
		else
		{
			t[k]=x[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		t[k]=x[i];
		i++;
		k++;
	}
	while(j<=h)
	{
		t[k]=x[j];
		j++;
		k++;
	}
	i=l;
	for(j=0;j<k;j++)
	{
		x[i]=t[j];
		i++;
	}
}
//definition of  the function 'insrs'
void insrs(int x[],int n)
{
	int i,j,t;
	for(i=2;i<=n;i++)
	{
		t = x[i];
		j = i-1;
		while(x[j]>t)
		{
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = t;
	}
}

/*
			*** Implemention Of Insertion Sort And Merge Sort ***

			MENU:
		  1.Insertion_sort
		  2.Merge_sort

			Enter Your Choice:: 1

			Enter How many elements: 5

 x[1]= 91

 x[2]= 77

 x[3]= 84

 x[4]= 105

 x[5]= 98

 Elements After Sorting
		  77      84      91      98      105

			Do You Want To Continue(y/Y)? y

			*** Implemention Of Insertion Sort And Merge Sort ***

			MENU:
		  1.Insertion_sort
		  2.Merge_sort

			Enter Your Choice:: 3

			WRONG INPUT !!!

			Do You Want To Continue(y/Y)? y

			*** Implemention Of Insertion Sort And Merge Sort ***

			MENU:
		  1.Insertion_sort
		  2.Merge_sort

			Enter Your Choice:: 2

 Enter How many elements: 5

x[0]=-88

x[1]=110

x[2]=-99

x[3]=66

x[4]=77

 Elements After Sorting
		  -99     -88     66      77      110

			Do You Want To Continue(y/Y)? n


*/

