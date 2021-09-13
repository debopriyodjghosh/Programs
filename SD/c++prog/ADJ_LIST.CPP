/* 		         surya rules			*/

/*		       adjacency list			*/

/* 		the program is working fine		*/

#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"
struct edgelist;

struct nodelist
{
	char vertex;
	int status;
	struct nodelist *next;
	struct edgelist *adj;
};

struct edgelist
{
	struct nodelist *vertex1;
	struct edgelist *next1;
};

  /* inserting the vertices of the graph */

    void insert_vertex(struct nodelist **sr,char v)
	   {
		struct nodelist *temp,*temp1;
		temp=(struct nodelist *)malloc(sizeof(struct nodelist));
		temp->vertex=v;
		temp->status=1;
		temp->next=NULL;
		temp->adj=NULL;

		if (*sr==NULL)
			*sr=temp;
		else
		    {
		      temp1=*sr;
		      while(temp1->next!=NULL)
			temp1=temp1->next;
		     temp1->next=temp;
		    }
	    }

	/* finding the location of vertex in a graph */

    struct nodelist * search_vertex(char v,struct nodelist **sr)
	   {
		struct nodelist *temp;
		temp=*sr;
		while(temp->vertex != v && temp->next != NULL)
		    temp=temp->next;
		if(temp->vertex==v)
		   return(temp);
		else
		   return(NULL);
	    }

	/* inserting the adjacent vertices of a vertex */

     void insert_edge(struct nodelist **add,struct nodelist **search)
	     {
		struct edgelist  *temp,*temp1;
		temp=(struct edgelist *)malloc(sizeof(struct edgelist));
		temp->vertex1=*add;
		temp->next1=NULL;

		if ((*search)->adj==NULL)
		    (*search)->adj=temp;
		else
		   {
		    temp1=(*search)->adj;
		    while(temp1->next1 != NULL)
		       temp1=temp1->next1;
		    temp1->next1=temp;
		    }
	       }

void main()
{
	char v,start,item;
	struct nodelist *head,*address,*address1,*search;
	struct edgelist *temp;

	head=NULL;
	clrscr();
	/* taking the vertices as input */
	printf("\n Enter vertex in char(press enter to stop): ");
	fflush(stdin);
	scanf("%c",&v);
	while(v != '\n')
	     {
		insert_vertex(&head,v);
		printf("\n Enter vertex in char(press enter to stop): ");
		fflush(stdin);
		scanf("%c",&v);
	     }

	 /* taking the adjacent vertices as input */
	 search=head;
	 printf("\n\n");
	    do
	       {
		  printf("Enter adjacent vertex of(enter to nil)%c:",search->vertex);
		  fflush(stdin);
		  scanf("%c",&v);
		  if (v != '\n')
		     {
		      address=search_vertex(v,&head);
		      insert_edge(&address,&search);
		     }
		  else
		      {
		      printf("\n\n");
		      search=search->next;
		      }

		} while (search != NULL);

	 search=head;
	 while(search != NULL)
	     {
		printf("%c :",search->vertex);
		temp=search->adj;
		while(temp != NULL)
		     {
		      printf(" %c",temp->vertex1->vertex);
		      temp=temp->next1;
		     }
		printf("\n\n");
		search=search->next;
	      }

	getch();

}