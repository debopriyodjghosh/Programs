/* 		         surya rules			*/

/*	        integration of a polynomial		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"
#include"ctype.h"

/* structure representing the node of a polynomial linked list */

struct polynode
{
	float coeff;
	int exp;
	struct polynode *next;
};
void poly_display(struct polynode *);
void poly_append(struct polynode **,float,int);
void poly_differentiate(struct polynode **);
void main()
{
	struct polynode *head_1,*head_2,*total,*product;

	int i=0;
	clrscr();
	head_1=head_2=total=product=NULL;

	poly_append(&head_1,1.4,5);
	poly_append(&head_1,1.5,4);
	poly_append(&head_1,1.7,2);
	poly_append(&head_1,1.8,1);
	poly_append(&head_1,1.9,0);

	clrscr();
	poly_display(head_1);
	getch();

	poly_differentiate(&head_1);

	// printf("hello........................\n");
	poly_display(head_1);




	getch();

}


void poly_append(struct polynode **head,float coeff,int exp)
{
	struct polynode *temp;
	temp=*head;

	if(*head==NULL)
	{
		*head=(struct polynode *)malloc(sizeof(struct polynode));
		temp=*head;
	}
	else
	{
		while(temp->next!=NULL)
			temp=temp->next;

		temp->next=(struct polynode *)malloc(sizeof(struct polynode));
		temp=temp->next;
	}
		temp->coeff=coeff;
		temp->exp=exp;
		temp->next=NULL;


}


/* displaying polynomials */

void poly_display(struct polynode *head)
{
	while(head!=NULL)
	{
		//printf("\n %.1f x^%d : ",(head)->coeff,(head)->exp);
		//if( head->coeff == 0.0 ) ;
		//	head=head->next;


		printf("%.1f x^%d : ",head->coeff,head->exp);
		head=head->next;
	}

	printf("\n\n \b\b ");
}

/* differentiating the polynomial */

void poly_differentiate(struct polynode **head)
{

      struct polynode *temp;
      temp=*head;

      while( (temp) != NULL )
      {

		(temp)->coeff=( (temp)->coeff ) * ( (temp)->exp );
		(temp)->exp=( (temp)->exp ) - 1;

		//printf("\n %.1f x^%d : ",(temp)->coeff,(temp)->exp);

		(temp)=(temp)->next;
      }
}

