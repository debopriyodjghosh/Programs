#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
	int coeff;
	int exp;
	struct node *link;
}NODE;

void addnode(NODE **, int, int);
void sort(NODE **);
void display(NODE *);
void add(NODE *, NODE *, NODE **);
void mul(NODE *, NODE *, NODE **);

main()
{
	int i, a, b, m;
	char c, ch, cha;
	NODE *first, *second, *addresult, *mulresult;
	//clrscr();
	do
	{
		first = second = addresult = mulresult = NULL;
		printf("\n\n\t\tEnter input for first polynomial: ");
		do
		{
			printf("\n\t\t\tEnter coefficient: ");
			scanf("%d", &a);
			printf("\n\t\t\tEnter exponent: ");
			scanf("%d", &b);
			addnode(&first, a, b);
			printf("\n\n\tDo you want to add more terms (y/n)?: ");
			fflush(stdin);
			scanf("%c", &ch);
		}while(ch == 'y' || ch == 'Y');
		printf("\n\nThe first polynomial: \n\n");
		display(first);
		sort(&first);
		printf("\n\nSorted first polynomial: \n\n");
		display(first);
		printf("\n\n\t\tEnter input for second polynomial: ");
		do
		{
			printf("\n\t\t\tEnter coefficient: ");
			scanf("%d", &a);
			printf("\n\t\t\tEnter exponent: ");
			scanf("%d", &b);
			addnode(&second, a, b);
			printf("\n\n\tDo you want to add more terms (y/n)?: ");
			fflush(stdin);
			scanf("%c", &ch);
		}while(ch == 'y' || ch == 'Y');
		printf("\n\nThe second polynomial: \n\n");
		display(second);
		sort(&second);
		printf("\n\nSorted second polynomial: \n\n");
		display(second);
		do
		{
			printf("\n\n\nMenu for polynomial operation:\n\n\t\t1. polynomial addition\n\t\t2. polynomial multiplication");
			printf("\n\n\t\tEnter your choice: ");
			scanf("%d", &m);
			switch(m)
			{
				case 1:
					printf("\n\n\n\t\tPOLYNOMIAL ADDITION\n\n");
					display(first);
					printf("\n\n\t\t\t\t+\n\n\t\t");
					display(second);
					printf("\n");
					for(i=0; i <= 80; i++)
						printf("_");
					printf("\n\n");
					add(first, second, &addresult);
					display(addresult);
					break;
				case 2:
					printf("\n\n\n\t\tPOLYNOMIAL MULTIPLICATION\n\n");
					display(first);
					printf("\n\n\t\t\t\t*\n\n\t\t");
					display(second);
					printf("\n");
					for(i=0; i <= 80; i++)
						printf("_");
					printf("\n\n");
					mul(first, second, &mulresult);
					display(mulresult);
					break;
				default:
					printf("\n\n\n\t\tINVALID CHOICE");
			}
			printf("\n\n\n\t\tDo you want to continue more operation?(y/n): ");
			fflush(stdin);
			scanf("%c", &cha);
		}while(cha == 'y' || cha == 'Y');
		printf("\n\n\n\tIf you want to continue the polynoimial operation with another input press y or Y: ");
		fflush(stdin);
		scanf("%c", &c);
	}while(c == 'y' || c == 'Y');
	printf("\n\n\n\t\t\t****THANK YOU****");
	getch();
}

void addnode(NODE **q, int x, int y)
{
	NODE *temp = *q;
	if(*q == NULL)
	{
		*q = (NODE *)malloc(sizeof(NODE));
		temp = *q;
	}
	else
	{
		while(temp->link != NULL)
			temp = temp->link;
		temp->link = (NODE *)malloc(sizeof(NODE));
		temp = temp->link;
	}
	temp->coeff = x;
	temp->exp = y;
	temp->link = NULL;
}

void sort(node **l)
{
	int i;
	node *temp, *temp1;
	temp = *l;
	while(temp->link != NULL)
	{
		temp1 = temp->link;
		while(temp1->link != NULL)
		{
			if(temp->exp >= temp1->exp)
				temp1 = temp1->link;
			else
			{
				i = temp->exp;
				temp->exp = temp1->exp;
				temp1->exp = i;
				i = temp->coeff;
				temp->coeff = temp1->coeff;
				temp1->coeff = i;
				temp1 = temp1->link;
			}
		}
		if(temp->exp < temp1->exp)
		{
			i = temp->exp;
			temp->exp = temp1->exp;
			temp1->exp = i;
			i = temp->coeff;
			temp->coeff = temp1->coeff;
			temp1->coeff = i;
		}
		temp = temp->link;
	}
}

void display(NODE *q)
{
	while(q != NULL)
	{
		printf("|%dx^%d| ", q->coeff, q->exp);
		q = q->link;
	}
	printf("->NULL");
}

void add(NODE *x, NODE *y, NODE **s)
{
	NODE *z;
	if(x == NULL && y == NULL)
		return;
	while(x != NULL && y != NULL)
	{
		if(*s == NULL)
		{
			*s = (NODE *)malloc(sizeof(NODE));
			z = *s;
		}
		else
		{
			z->link = (NODE *)malloc(sizeof(NODE));
			z = z->link;
		}
		if(x->exp < y->exp)
		{
			z->coeff = y->coeff;
			z->exp = y->exp;
			y = y->link;
		}
		else
		{
			if(x->exp > y->exp)
			{
				z->coeff = x->coeff;
				z->exp = x->exp;
				x = x->link;
			}
			else
			{
				if(x->exp == y->exp)
				{
					z->coeff = x->coeff + y->coeff;
					z->exp = x->exp;
					x = x->link;
					y = y->link;
				}
			}
		}
	}
	while(x != NULL)
	{
		if(*s == NULL)
		{
			*s = (NODE *)malloc(sizeof(NODE));
			z = *s;
		}
		else
		{
			z->link = (NODE *)malloc(sizeof(NODE));
			z = z->link;
		}
		z->coeff = x->coeff;
		z->exp = x->exp;
		x = x->link;
	}
	while(y != NULL)
	{
		if(*s == NULL)
		{
			*s = (NODE *)malloc(sizeof(NODE));
			z = *s;
		}
		else
		{
			z->link = (NODE *)malloc(sizeof(NODE));
			z = z->link;
		}
		z->coeff = y->coeff;
		z->exp = y->exp;
		y = y->link;
	}
	z->link = NULL;
}

void mul(NODE *x, NODE *y, NODE **s)
{
	NODE *p, *q, *r;
	if(x == NULL && y == NULL)
		return;
	p = x;
	r = *s;
	while(p != NULL)
	{
		q = y;
		while(q != NULL)
		{
			if(*s == NULL)
			{
				*s = (NODE *)malloc(sizeof(NODE));
				r = *s;
				r->coeff = (p->coeff) * (q->coeff);
				r->exp = (p->exp) + (q->exp);
				r->link = NULL;
				q = q->link;
			}
			else
			{
				r->link = (NODE *)malloc(sizeof(NODE));
				r = r->link;
				r->coeff = (p->coeff) * (q->coeff);
				r->exp = (p->exp) + (q->exp);
				r->link = NULL;
				q = q->link;
			}
		}
		p = p->link;
	}
}

