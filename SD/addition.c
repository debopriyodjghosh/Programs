//additionofpolynomial
//Sunday, September 22, 2013
#include<stdio.h>
#include<alloc.h>
typedef struct node
{
	int coeffi;
	int power;
	struct node *link;
}NODE;
void addnode(NODE**,int,int);
void printpoly(NODE*);
void addpoly(NODE*,NODE*,NODE**);
//void deletpoly(NODE**);
void main()
{
	NODE *poly1,*poly2,*poly3;
	poly1=poly2=poly3=NULL;
	printf("\n ENTER FIRST POLYNOMIAL\n\n\n");
	addnode(&poly1,6,4);
	addnode(&poly1,10,3);
	addnode(&poly1,6,2);
	addnode(&poly1,5,1);
	addnode(&poly1,17,0);
	printpoly(poly1);
	printf("\n ENTER SECOND POLYNOMIAL\n\n\n");
	addnode(&poly2,7,3);
	addnode(&poly2,2,2);
	addnode(&poly2,3,1);
	addnode(&poly2,7,0);
	printpoly(poly2);
	printf("\n\n ADDING 2 POLYNOMIAL\n\n\n\n");
	addpoly(poly1,poly2,&poly3);
	printpoly(poly3);
  /*	deletpoly(&poly1);
	deletpoly(&poly2);
	deletpoly(&poly3);*/

}
void addnode(NODE**ptr,int coef,int pow)
{
	NODE *temp,*r;
	if(*ptr==NULL)
	{
		temp=(NODE*)malloc(sizeof(NODE));
		temp->coeffi=coef;
		temp->power=pow;
		temp->link=NULL;
		*ptr=temp;
	}
	else
	{
		temp=*ptr;
		while(temp->link!=NULL)
			temp=temp->link;
		r=(NODE*)malloc(sizeof(NODE));
		r->coeffi=coef;
		r->power=pow;
		r->link=NULL;
		temp->link=r;
	}
}
void printpoly(NODE*ptr)
{
	if(ptr!=NULL)
		printf("           %dx^%d",ptr->coeffi,ptr->power);
		ptr=ptr->link;
	while(ptr!=NULL)
	{
		printf("    +");
		if(ptr->power==0)
			printf("        %d",ptr->coeffi);
		else
			printf("       %dx^%d",ptr->coeffi,ptr->power);
		ptr=ptr->link;
	}
}
void addpoly(NODE*poly1,NODE*poly2,NODE**poly3)
{
	int powe;
	int coeff;
	while((poly1!=NULL)&&(poly2!=NULL))
	{
		if(poly1->power > poly2->power)
		{
			coeff=poly1->coeffi;
			powe=poly1->power;
			poly1=poly1->link;
		}
		else if(poly1->power < poly2->power)
		{
			coeff=poly2->coeffi;
			powe=poly2->power;
			poly2=poly2->link;
		}
		else
		{
			coeff= poly1->coeffi + poly2->coeffi;
			powe= poly1->power;
			poly1=poly1->link;
			poly2=poly2->link;
		}
			addnode(poly3,coeff,powe);
	}
	if(poly1==NULL)
	{
		for(;poly2!=NULL;poly2=poly2->link)
			addnode(poly3,poly2->coeffi,poly2->power);
	}
	else if(poly2==NULL)
	{
		for(;poly1!=NULL;poly1=poly1->link)
			addnode(poly3,poly1->coeffi,poly1->power);
	}
}
